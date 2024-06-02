#pragma once

namespace UnityEngine
{
	// Name: UnityEngine::PlayMode
	// Flags: Private | Assembly | Famorassem
	enum class PlayMode
	{
		StopSameLayer = 0,
		StopAll = 4,
	};

	// Name: UnityEngine::StateInfoIndex
	// Flags: 
	enum class StateInfoIndex
	{
		CurrentState = 0,
		NextState = 1,
		ExitState = 2,
		InterruptedState = 3,
	};

	// Name: UnityEngine::HumanBodyBones
	// Flags: Private | Assembly | Famorassem
	enum class HumanBodyBones
	{
		Hips = 0,
		LeftUpperLeg = 1,
		RightUpperLeg = 2,
		LeftLowerLeg = 3,
		RightLowerLeg = 4,
		LeftFoot = 5,
		RightFoot = 6,
		Spine = 7,
		Chest = 8,
		UpperChest = 54,
		Neck = 9,
		Head = 10,
		LeftShoulder = 11,
		RightShoulder = 12,
		LeftUpperArm = 13,
		RightUpperArm = 14,
		LeftLowerArm = 15,
		RightLowerArm = 16,
		LeftHand = 17,
		RightHand = 18,
		LeftToes = 19,
		RightToes = 20,
		LeftEye = 21,
		RightEye = 22,
		Jaw = 23,
		LeftThumbProximal = 24,
		LeftThumbIntermediate = 25,
		LeftThumbDistal = 26,
		LeftIndexProximal = 27,
		LeftIndexIntermediate = 28,
		LeftIndexDistal = 29,
		LeftMiddleProximal = 30,
		LeftMiddleIntermediate = 31,
		LeftMiddleDistal = 32,
		LeftRingProximal = 33,
		LeftRingIntermediate = 34,
		LeftRingDistal = 35,
		LeftLittleProximal = 36,
		LeftLittleIntermediate = 37,
		LeftLittleDistal = 38,
		RightThumbProximal = 39,
		RightThumbIntermediate = 40,
		RightThumbDistal = 41,
		RightIndexProximal = 42,
		RightIndexIntermediate = 43,
		RightIndexDistal = 44,
		RightMiddleProximal = 45,
		RightMiddleIntermediate = 46,
		RightMiddleDistal = 47,
		RightRingProximal = 48,
		RightRingIntermediate = 49,
		RightRingDistal = 50,
		RightLittleProximal = 51,
		RightLittleIntermediate = 52,
		RightLittleDistal = 53,
		LastBone = 55,
	};

	// Name: UnityEngine::AnimationState
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::AnimationState -> UnityEngine::TrackedReference -> System::Object
	class AnimationState : public UnityEngine::TrackedReference
	{
	public:
		CLASS("UnityEngine.AnimationModule", "UnityEngine", "AnimationState");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E7230
		void set_normalizedTime(float value)
		{
			static NaMethodInvoker<void, AnimationState*, float> invoker = METHOD_ADDRESS("System.Void", "set_normalizedTime", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E7280
		void set_speed(float value)
		{
			static NaMethodInvoker<void, AnimationState*, float> invoker = METHOD_ADDRESS("System.Void", "set_speed", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E71F0
		void set_layer(int32_t value)
		{
			static NaMethodInvoker<void, AnimationState*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_layer", "System.Int32");
			invoker(this, value);
		}
	};

	// Name: UnityEngine::Animation
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Animation -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Animation : public UnityEngine::Behaviour
	{
	public:
		// Name: Enumerator
		// ClassType: Normal
		// Flags: Private | Famandassem | Assembly | Famorassem | Public
		// Inheritance: Enumerator -> System::Object
		class Enumerator
		{
		public:
			NESTED_CLASS(Animation, "Enumerator");

			FIELD(UnityEngine::Animation*, m_Outer);
			FIELD(int32_t, m_CurrentIndex);


			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9B30EA3A0
			void* get_Current()
			{
				static NaMethodInvoker<void*, Enumerator*> invoker = METHOD_ADDRESS("System.Object", "get_Current");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9B30EA340
			bool MoveNext()
			{
				static NaMethodInvoker<bool, Enumerator*> invoker = METHOD_ADDRESS("System.Boolean", "MoveNext");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9B210AA80
			void Reset()
			{
				static NaMethodInvoker<void, Enumerator*> invoker = METHOD_ADDRESS("System.Void", "Reset");
				invoker(this);
			}
		};

	public:
		CLASS("UnityEngine.AnimationModule", "UnityEngine", "Animation");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E7A10
		UnityEngine::AnimationState* get_Item(const std::string& name)
		{
			static NaMethodInvoker<UnityEngine::AnimationState*, Animation*, void*> invoker = METHOD_ADDRESS("UnityEngine.AnimationState", "get_Item", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7AA0
		bool Play()
		{
			static NaMethodInvoker<bool, Animation*> invoker = METHOD_ADDRESS("System.Boolean", "Play");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7A60
		bool Play(UnityEngine::PlayMode mode)
		{
			static NaMethodInvoker<bool, Animation*, UnityEngine::PlayMode> invoker = METHOD_ADDRESS("System.Boolean", "Play", "UnityEngine.PlayMode");
			return invoker(this, mode);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E7A60
		bool PlayDefaultAnimation(UnityEngine::PlayMode mode)
		{
			static NaMethodInvoker<bool, Animation*, UnityEngine::PlayMode> invoker = METHOD_ADDRESS("System.Boolean", "PlayDefaultAnimation", "UnityEngine.PlayMode");
			return invoker(this, mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7B40
		bool Play(const std::string& animation)
		{
			static NaMethodInvoker<bool, Animation*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Play", "System.String");
			return invoker(this, VmGeneralType::String(animation));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7AE0
		bool Play(const std::string& animation, UnityEngine::PlayMode mode)
		{
			static NaMethodInvoker<bool, Animation*, void*, UnityEngine::PlayMode> invoker = METHOD_ADDRESS("System.Boolean", "Play", "System.String", "UnityEngine.PlayMode");
			return invoker(this, VmGeneralType::String(animation), mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7850
		void CrossFade(const std::string& animation, float fadeLength)
		{
			static NaMethodInvoker<void, Animation*, void*, float> invoker = METHOD_ADDRESS("System.Void", "CrossFade", "System.String", "System.Single");
			invoker(this, VmGeneralType::String(animation), fadeLength);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E78B0
		void CrossFade(const std::string& animation, float fadeLength, UnityEngine::PlayMode mode)
		{
			static NaMethodInvoker<void, Animation*, void*, float, UnityEngine::PlayMode> invoker = METHOD_ADDRESS("System.Void", "CrossFade", "System.String", "System.Single", "UnityEngine.PlayMode");
			invoker(this, VmGeneralType::String(animation), fadeLength, mode);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7A10
		UnityEngine::AnimationState* GetState(const std::string& name)
		{
			static NaMethodInvoker<UnityEngine::AnimationState*, Animation*, void*> invoker = METHOD_ADDRESS("UnityEngine.AnimationState", "GetState", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E7990
		UnityEngine::AnimationState* GetStateAtIndex(int32_t index)
		{
			static NaMethodInvoker<UnityEngine::AnimationState*, Animation*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.AnimationState", "GetStateAtIndex", "System.Int32");
			return invoker(this, index);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E79D0
		int32_t GetStateCount()
		{
			static NaMethodInvoker<int32_t, Animation*> invoker = METHOD_ADDRESS("System.Int32", "GetStateCount");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E7B90
		bool get_animatePhysics()
		{
			static NaMethodInvoker<bool, Animation*> invoker = METHOD_ADDRESS("System.Boolean", "get_animatePhysics");
			return invoker(this);
		}
	};

	// Name: UnityEngine::AnimatorStateInfo
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::AnimatorStateInfo -> System::ValueType -> System::Object
	class AnimatorStateInfo
	{
	public:
		CLASS("UnityEngine.AnimationModule", "UnityEngine", "AnimatorStateInfo");

		int32_t m_Name;
		int32_t m_Path;
		int32_t m_FullPath;
		float m_NormalizedTime;
		float m_Length;
		float m_Speed;
		float m_SpeedMultiplier;
		int32_t m_Tag;
		int32_t m_Loop;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8530
		bool IsName(const std::string& name)
		{
			static NaMethodInvoker<bool, AnimatorStateInfo*, void*> invoker = METHOD_ADDRESS("System.Boolean", "IsName", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E7730
		int32_t get_shortNameHash()
		{
			static NaMethodInvoker<int32_t, AnimatorStateInfo*> invoker = METHOD_ADDRESS("System.Int32", "get_shortNameHash");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B1DAF0B0
		float get_normalizedTime()
		{
			static NaMethodInvoker<float, AnimatorStateInfo*> invoker = METHOD_ADDRESS("System.Single", "get_normalizedTime");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8590
		bool IsTag(const std::string& tag)
		{
			static NaMethodInvoker<bool, AnimatorStateInfo*, void*> invoker = METHOD_ADDRESS("System.Boolean", "IsTag", "System.String");
			return invoker(this, VmGeneralType::String(tag));
		}
	};

	// Name: UnityEngine::Animator
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Animator -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Animator : public UnityEngine::Behaviour
	{
	public:
		CLASS("UnityEngine.AnimationModule", "UnityEngine", "Animator");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30E9AE0
		static int32_t StringToHash(const std::string& name)
		{
			static NaMethodInvoker<int32_t, void*> invoker = METHOD_ADDRESS("System.Int32", "StringToHash", "System.String");
			return invoker(VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9DF0
		bool get_isHuman()
		{
			static NaMethodInvoker<bool, Animator*> invoker = METHOD_ADDRESS("System.Boolean", "get_isHuman");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9D70
		bool get_hasRootMotion()
		{
			static NaMethodInvoker<bool, Animator*> invoker = METHOD_ADDRESS("System.Boolean", "get_hasRootMotion");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9DB0
		float get_humanScale()
		{
			static NaMethodInvoker<float, Animator*> invoker = METHOD_ADDRESS("System.Single", "get_humanScale");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8FC0
		float GetFloat(const std::string& name)
		{
			static NaMethodInvoker<float, Animator*, void*> invoker = METHOD_ADDRESS("System.Single", "GetFloat", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9420
		void SetFloat(const std::string& name, float value)
		{
			static NaMethodInvoker<void, Animator*, void*, float> invoker = METHOD_ADDRESS("System.Void", "SetFloat", "System.String", "System.Single");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E93D0
		void SetFloat(int32_t id, float value)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "SetFloat", "System.Int32", "System.Single");
			invoker(this, id, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9370
		void SetFloat(int32_t id, float value, float dampTime, float deltaTime)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float, float, float> invoker = METHOD_ADDRESS("System.Void", "SetFloat", "System.Int32", "System.Single", "System.Single", "System.Single");
			invoker(this, id, value, dampTime, deltaTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8ED0
		bool GetBool(const std::string& name)
		{
			static NaMethodInvoker<bool, Animator*, void*> invoker = METHOD_ADDRESS("System.Boolean", "GetBool", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8E90
		bool GetBool(int32_t id)
		{
			static NaMethodInvoker<bool, Animator*, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "GetBool", "System.Int32");
			return invoker(this, id);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9310
		void SetBool(const std::string& name, bool value)
		{
			static NaMethodInvoker<void, Animator*, void*, bool> invoker = METHOD_ADDRESS("System.Void", "SetBool", "System.String", "System.Boolean");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E92B0
		void SetBool(int32_t id, bool value)
		{
			static NaMethodInvoker<void, Animator*, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "SetBool", "System.Int32", "System.Boolean");
			invoker(this, id, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9010
		int32_t GetInteger(const std::string& name)
		{
			static NaMethodInvoker<int32_t, Animator*, void*> invoker = METHOD_ADDRESS("System.Int32", "GetInteger", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9800
		void SetInteger(const std::string& name, int32_t value)
		{
			static NaMethodInvoker<void, Animator*, void*, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetInteger", "System.String", "System.Int32");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9A90
		void SetTrigger(const std::string& name)
		{
			static NaMethodInvoker<void, Animator*, void*> invoker = METHOD_ADDRESS("System.Void", "SetTrigger", "System.String");
			invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9260
		void ResetTrigger(const std::string& name)
		{
			static NaMethodInvoker<void, Animator*, void*> invoker = METHOD_ADDRESS("System.Void", "ResetTrigger", "System.String");
			invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9C40
		UnityEngine::Vector3 get_deltaPosition()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Animator*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_deltaPosition");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9CE0
		UnityEngine::Quaternion get_deltaRotation()
		{
			static NaMethodInvoker<UnityEngine::Quaternion, Animator*> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "get_deltaRotation");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9B70
		bool get_applyRootMotion()
		{
			static NaMethodInvoker<bool, Animator*> invoker = METHOD_ADDRESS("System.Boolean", "get_applyRootMotion");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9F50
		void set_applyRootMotion(bool value)
		{
			static NaMethodInvoker<void, Animator*, bool> invoker = METHOD_ADDRESS("System.Void", "set_applyRootMotion", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9950
		void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition)
		{
			static NaMethodInvoker<void, Animator*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "SetLookAtPosition", "UnityEngine.Vector3");
			invoker(this, lookAtPosition);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9900
		void SetLookAtPositionInternal(UnityEngine::Vector3 lookAtPosition)
		{
			static NaMethodInvoker<void, Animator*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "SetLookAtPositionInternal", "UnityEngine.Vector3");
			invoker(this, lookAtPosition);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9A20
		void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight)
		{
			static NaMethodInvoker<void, Animator*, float, float, float, float, float> invoker = METHOD_ADDRESS("System.Void", "SetLookAtWeight", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single");
			invoker(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E99B0
		void SetLookAtWeightInternal(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight)
		{
			static NaMethodInvoker<void, Animator*, float, float, float, float, float> invoker = METHOD_ADDRESS("System.Void", "SetLookAtWeightInternal", "System.Single", "System.Single", "System.Single", "System.Single", "System.Single");
			invoker(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9060
		float GetLayerWeight(int32_t layerIndex)
		{
			static NaMethodInvoker<float, Animator*, int32_t> invoker = METHOD_ADDRESS("System.Single", "GetLayerWeight", "System.Int32");
			return invoker(this, layerIndex);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9860
		void SetLayerWeight(int32_t layerIndex, float weight)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "SetLayerWeight", "System.Int32", "System.Single");
			invoker(this, layerIndex, weight);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E8AD0
		void GetAnimatorStateInfo(int32_t layerIndex, UnityEngine::StateInfoIndex stateInfoIndex, UnityEngine::AnimatorStateInfo& info)
		{
			static NaMethodInvoker<void, Animator*, int32_t, UnityEngine::StateInfoIndex, UnityEngine::AnimatorStateInfo&> invoker = METHOD_ADDRESS("System.Void", "GetAnimatorStateInfo", "System.Int32", "UnityEngine.StateInfoIndex", "UnityEngine.AnimatorStateInfo&");
			invoker(this, layerIndex, stateInfoIndex, info);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8F20
		UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex)
		{
			static NaMethodInvoker<UnityEngine::AnimatorStateInfo, Animator*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.AnimatorStateInfo", "GetCurrentAnimatorStateInfo", "System.Int32");
			return invoker(this, layerIndex);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E90E0
		bool IsInTransition(int32_t layerIndex)
		{
			static NaMethodInvoker<bool, Animator*, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "IsInTransition", "System.Int32");
			return invoker(this, layerIndex);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9EC0
		UnityEngine::Vector3 get_pivotPosition()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Animator*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_pivotPosition");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9FE0
		void set_speed(float value)
		{
			static NaMethodInvoker<void, Animator*, float> invoker = METHOD_ADDRESS("System.Void", "set_speed", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8820
		void CrossFadeInFixedTime(const std::string& stateName, float fixedTransitionDuration)
		{
			static NaMethodInvoker<void, Animator*, void*, float> invoker = METHOD_ADDRESS("System.Void", "CrossFadeInFixedTime", "System.String", "System.Single");
			invoker(this, VmGeneralType::String(stateName), fixedTransitionDuration);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8690
		void CrossFadeInFixedTime(const std::string& stateName, float fixedTransitionDuration, int32_t layer)
		{
			static NaMethodInvoker<void, Animator*, void*, float, int32_t> invoker = METHOD_ADDRESS("System.Void", "CrossFadeInFixedTime", "System.String", "System.Single", "System.Int32");
			invoker(this, VmGeneralType::String(stateName), fixedTransitionDuration, layer);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8790
		void CrossFadeInFixedTime(const std::string& stateName, float fixedTransitionDuration, int32_t layer, float fixedTimeOffset)
		{
			static NaMethodInvoker<void, Animator*, void*, float, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "CrossFadeInFixedTime", "System.String", "System.Single", "System.Int32", "System.Single");
			invoker(this, VmGeneralType::String(stateName), fixedTransitionDuration, layer, fixedTimeOffset);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8730
		void CrossFadeInFixedTime(int32_t stateHashName, float fixedTransitionDuration, int32_t layer, float fixedTimeOffset, float normalizedTransitionTime)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float, int32_t, float, float> invoker = METHOD_ADDRESS("System.Void", "CrossFadeInFixedTime", "System.Int32", "System.Single", "System.Int32", "System.Single", "System.Single");
			invoker(this, stateHashName, fixedTransitionDuration, layer, fixedTimeOffset, normalizedTransitionTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8950
		void CrossFade(const std::string& stateName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset)
		{
			static NaMethodInvoker<void, Animator*, void*, float, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "CrossFade", "System.String", "System.Single", "System.Int32", "System.Single");
			invoker(this, VmGeneralType::String(stateName), normalizedTransitionDuration, layer, normalizedTimeOffset);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E88B0
		void CrossFade(const std::string& stateName, float normalizedTransitionDuration, int32_t layer)
		{
			static NaMethodInvoker<void, Animator*, void*, float, int32_t> invoker = METHOD_ADDRESS("System.Void", "CrossFade", "System.String", "System.Single", "System.Int32");
			invoker(this, VmGeneralType::String(stateName), normalizedTransitionDuration, layer);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8A40
		void CrossFade(const std::string& stateName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset, float normalizedTransitionTime)
		{
			static NaMethodInvoker<void, Animator*, void*, float, int32_t, float, float> invoker = METHOD_ADDRESS("System.Void", "CrossFade", "System.String", "System.Single", "System.Int32", "System.Single", "System.Single");
			invoker(this, VmGeneralType::String(stateName), normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E89E0
		void CrossFade(int32_t stateHashName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset, float normalizedTransitionTime)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float, int32_t, float, float> invoker = METHOD_ADDRESS("System.Void", "CrossFade", "System.Int32", "System.Single", "System.Int32", "System.Single", "System.Single");
			invoker(this, stateHashName, normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9240
		void Play(const std::string& stateName, int32_t layer)
		{
			static NaMethodInvoker<void, Animator*, void*, int32_t> invoker = METHOD_ADDRESS("System.Void", "Play", "System.String", "System.Int32");
			invoker(this, VmGeneralType::String(stateName), layer);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9120
		void Play(const std::string& stateName)
		{
			static NaMethodInvoker<void, Animator*, void*> invoker = METHOD_ADDRESS("System.Void", "Play", "System.String");
			invoker(this, VmGeneralType::String(stateName));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E91B0
		void Play(const std::string& stateName, int32_t layer, float normalizedTime)
		{
			static NaMethodInvoker<void, Animator*, void*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "Play", "System.String", "System.Int32", "System.Single");
			invoker(this, VmGeneralType::String(stateName), layer, normalizedTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9150
		void Play(int32_t stateNameHash, int32_t layer, float normalizedTime)
		{
			static NaMethodInvoker<void, Animator*, int32_t, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "Play", "System.Int32", "System.Int32", "System.Single");
			invoker(this, stateNameHash, layer, normalizedTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8B70
		UnityEngine::Transform* GetBoneTransform(UnityEngine::HumanBodyBones humanBoneId)
		{
			static NaMethodInvoker<UnityEngine::Transform*, Animator*, UnityEngine::HumanBodyBones> invoker = METHOD_ADDRESS("UnityEngine.Transform", "GetBoneTransform", "UnityEngine.HumanBodyBones");
			return invoker(this, humanBoneId);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E8B30
		UnityEngine::Transform* GetBoneTransformInternal(int32_t humanBoneId)
		{
			static NaMethodInvoker<UnityEngine::Transform*, Animator*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Transform", "GetBoneTransformInternal", "System.Int32");
			return invoker(this, humanBoneId);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9D30
		bool get_hasBoundPlayables()
		{
			static NaMethodInvoker<bool, Animator*> invoker = METHOD_ADDRESS("System.Boolean", "get_hasBoundPlayables");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E85E0
		void CheckIfInIKPass()
		{
			static NaMethodInvoker<void, Animator*> invoker = METHOD_ADDRESS("System.Void", "CheckIfInIKPass");
			invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E90A0
		bool IsInIKPass()
		{
			static NaMethodInvoker<bool, Animator*> invoker = METHOD_ADDRESS("System.Boolean", "IsInIKPass");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9420
		void SetFloatString(const std::string& name, float value)
		{
			static NaMethodInvoker<void, Animator*, void*, float> invoker = METHOD_ADDRESS("System.Void", "SetFloatString", "System.String", "System.Single");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E93D0
		void SetFloatID(int32_t id, float value)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "SetFloatID", "System.Int32", "System.Single");
			invoker(this, id, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E8FC0
		float GetFloatString(const std::string& name)
		{
			static NaMethodInvoker<float, Animator*, void*> invoker = METHOD_ADDRESS("System.Single", "GetFloatString", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9310
		void SetBoolString(const std::string& name, bool value)
		{
			static NaMethodInvoker<void, Animator*, void*, bool> invoker = METHOD_ADDRESS("System.Void", "SetBoolString", "System.String", "System.Boolean");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E92B0
		void SetBoolID(int32_t id, bool value)
		{
			static NaMethodInvoker<void, Animator*, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "SetBoolID", "System.Int32", "System.Boolean");
			invoker(this, id, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E8ED0
		bool GetBoolString(const std::string& name)
		{
			static NaMethodInvoker<bool, Animator*, void*> invoker = METHOD_ADDRESS("System.Boolean", "GetBoolString", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E8E90
		bool GetBoolID(int32_t id)
		{
			static NaMethodInvoker<bool, Animator*, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "GetBoolID", "System.Int32");
			return invoker(this, id);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9800
		void SetIntegerString(const std::string& name, int32_t value)
		{
			static NaMethodInvoker<void, Animator*, void*, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetIntegerString", "System.String", "System.Int32");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9010
		int32_t GetIntegerString(const std::string& name)
		{
			static NaMethodInvoker<int32_t, Animator*, void*> invoker = METHOD_ADDRESS("System.Int32", "GetIntegerString", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9A90
		void SetTriggerString(const std::string& name)
		{
			static NaMethodInvoker<void, Animator*, void*> invoker = METHOD_ADDRESS("System.Void", "SetTriggerString", "System.String");
			invoker(this, VmGeneralType::String(name));
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9260
		void ResetTriggerString(const std::string& name)
		{
			static NaMethodInvoker<void, Animator*, void*> invoker = METHOD_ADDRESS("System.Void", "ResetTriggerString", "System.String");
			invoker(this, VmGeneralType::String(name));
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E9370
		void SetFloatIDDamp(int32_t id, float value, float dampTime, float deltaTime)
		{
			static NaMethodInvoker<void, Animator*, int32_t, float, float, float> invoker = METHOD_ADDRESS("System.Void", "SetFloatIDDamp", "System.Int32", "System.Single", "System.Single", "System.Single");
			invoker(this, id, value, dampTime, deltaTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30E9B20
		void Update(float deltaTime)
		{
			static NaMethodInvoker<void, Animator*, float> invoker = METHOD_ADDRESS("System.Void", "Update", "System.Single");
			invoker(this, deltaTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9E30
		bool get_logWarnings()
		{
			static NaMethodInvoker<bool, Animator*> invoker = METHOD_ADDRESS("System.Boolean", "get_logWarnings");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9BF0
		void get_deltaPosition_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Animator*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_deltaPosition_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9C90
		void get_deltaRotation_Injected(UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, Animator*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "get_deltaRotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30E98B0
		void SetLookAtPositionInternal_Injected(UnityEngine::Vector3& lookAtPosition)
		{
			static NaMethodInvoker<void, Animator*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "SetLookAtPositionInternal_Injected", "UnityEngine.Vector3&");
			invoker(this, lookAtPosition);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B30E9E70
		void get_pivotPosition_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Animator*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_pivotPosition_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}
	};
}