#pragma once

template <typename T>
struct Array
{
public:
	void* klass;
	void* monitor;
	void* bounds;
	size_t length;
	T items[1024];
	Array() : klass(nullptr), monitor(nullptr), bounds(nullptr), length(0) {}
	T& operator[](size_t index)
	{
		if (index > length)
			throw std::exception("Index out of bounds");
		return items[index];
	}
	T* begin()
	{
		return items;
	}
	T* end()
	{
		return items + length;
	}
	void clear()
	{
		length = 0;
	}
	void push_back(T item)
	{
		items[length++] = item;
	}
	void pop_back()
	{
		length--;
	}
	T& front()
	{
		return items[0];
	}
	T& back()
	{
		return items[length - 1];
	}
	bool empty()
	{
		return length == 0;
	}
	size_t size()
	{
		return length;
	}
};

namespace System
{
	namespace Collections
	{
		namespace Generic
		{
			template <typename T>
			struct List
			{
			public:
				void* klass;
				void* monitor;
				Array<T>* items;
				int _size;
				int _version;
				List() : klass(nullptr), monitor(nullptr), items(nullptr), _size(0), _version(0) {}
				T& operator[](size_t index)
				{
					return items->items[index];
				}
				T* begin()
				{
					return items->items;
				}
				T* end()
				{
					return items->items + _size;
				}
				void clear()
				{
					_size = 0;
				}
				void push_back(T item)
				{
					items->items[_size++] = item;
				}
				void pop_back()
				{
					_size--;
				}
				T& front()
				{
					return items->items[0];
				}
				T& back()
				{
					return items->items[_size - 1];
				}
				bool empty()
				{
					return _size == 0;
				}
				size_t size()
				{
					return items->size();
				}
			};

			template <typename TKey, typename TValue>
			struct DictionaryEntry
			{
				void* monitor;
				TKey key;
				TValue value;
			};

			template <typename TKey, typename TValue>
			struct Dictionary
			{
				void* klass;
				void* monitor;
				void* buckets;
				Array<DictionaryEntry<TKey, TValue>>* entries;
				uint32_t count;
				uint32_t version;
				uint32_t freeList;
				uint32_t freeCount;
				void* comparer;
				void* keys;
				void* values;
				unsigned char _syncRoot;
				Dictionary() : klass(nullptr), monitor(nullptr), buckets(nullptr), entries(nullptr), count(0), version(0), freeList(0), freeCount(0), comparer(nullptr), keys(nullptr), values(nullptr), _syncRoot(0) {}
				TValue& operator[](TKey key)
				{
					int num = FindEntry(key);
					if (num >= 0)
						return entries->items[num].value;
					throw std::exception("Key not found");
				}
				int FindEntry(TKey key)
				{
					if (buckets != nullptr)
					{
						uint32_t num = (uint32_t)(key.GetHashCode() & 0x7FFFFFFF);
						for (int num2 = buckets[num % buckets->length] - 1; num2 >= 0; num2 = entries->items[num2].next)
						{
							if (entries->items[num2].hashCode == num && entries->items[num2].key == key)
								return num2;
						}
					}
					return -1;
				}
				TValue& GetValueOrDefault(TKey key)
				{
					int num = FindEntry(key);
					if (num >= 0)
						return entries->items[num].value;
					return TValue();
				}
				bool ContainsKey(TKey key)
				{
					return FindEntry(key) >= 0;
				}
				bool TryGetValue(TKey key, TValue& value)
				{
					int num = FindEntry(key);
					if (num >= 0)
					{
						value = entries->items[num].value;
						return true;
					}
					value = TValue();
					return false;
				}
			};

			template <typename T>
			struct HashSetSlot
			{
				void* monitor;
				int hashCode;
				int next;
				T value;
			};

			template <typename T>
			struct HashSet
			{
				void* klass;
				void* monitor;
				void* buckets;
				Array<HashSetSlot<T>>* slots;
				uint32_t count;
				uint32_t lastIndex;
				uint32_t freeList;
				void* comparer;
				int version;
				void* siInfo;
			};

			template <typename T>
			struct FastList
			{
				void* klass;
				void* monitor;
				Array<T>* Array;
				int Count;
				int mCapacity;
			};

			template <typename T>
			struct Queue
			{
				void* klass;
				void* monitor;
				Array<T>* Array;
				int32_t _head;
				int32_t _tail;
				int32_t _size;
				int32_t _version;
				void* _syncRoot;
			};
		}
	}
}
