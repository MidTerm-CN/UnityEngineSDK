#pragma once

namespace UnityEngine
{
	namespace Experimental
	{
		namespace Rendering
		{
			// Name: UnityEngine::Experimental::Rendering::GraphicsFormat
			// Flags: Private | Assembly | Famorassem
			enum class GraphicsFormat
			{
				None = 0,
				R8_SRGB = 1,
				R8G8_SRGB = 2,
				R8G8B8_SRGB = 3,
				R8G8B8A8_SRGB = 4,
				R8_UNorm = 5,
				R8G8_UNorm = 6,
				R8G8B8_UNorm = 7,
				R8G8B8A8_UNorm = 8,
				R8_SNorm = 9,
				R8G8_SNorm = 10,
				R8G8B8_SNorm = 11,
				R8G8B8A8_SNorm = 12,
				R8_UInt = 13,
				R8G8_UInt = 14,
				R8G8B8_UInt = 15,
				R8G8B8A8_UInt = 16,
				R8_SInt = 17,
				R8G8_SInt = 18,
				R8G8B8_SInt = 19,
				R8G8B8A8_SInt = 20,
				R16_UNorm = 21,
				R16G16_UNorm = 22,
				R16G16B16_UNorm = 23,
				R16G16B16A16_UNorm = 24,
				R16_SNorm = 25,
				R16G16_SNorm = 26,
				R16G16B16_SNorm = 27,
				R16G16B16A16_SNorm = 28,
				R16_UInt = 29,
				R16G16_UInt = 30,
				R16G16B16_UInt = 31,
				R16G16B16A16_UInt = 32,
				R16_SInt = 33,
				R16G16_SInt = 34,
				R16G16B16_SInt = 35,
				R16G16B16A16_SInt = 36,
				R32_UInt = 37,
				R32G32_UInt = 38,
				R32G32B32_UInt = 39,
				R32G32B32A32_UInt = 40,
				R32_SInt = 41,
				R32G32_SInt = 42,
				R32G32B32_SInt = 43,
				R32G32B32A32_SInt = 44,
				R16_SFloat = 45,
				R16G16_SFloat = 46,
				R16G16B16_SFloat = 47,
				R16G16B16A16_SFloat = 48,
				R32_SFloat = 49,
				R32G32_SFloat = 50,
				R32G32B32_SFloat = 51,
				R32G32B32A32_SFloat = 52,
				B8G8R8_SRGB = 56,
				B8G8R8A8_SRGB = 57,
				B8G8R8_UNorm = 58,
				B8G8R8A8_UNorm = 59,
				B8G8R8_SNorm = 60,
				B8G8R8A8_SNorm = 61,
				B8G8R8_UInt = 62,
				B8G8R8A8_UInt = 63,
				B8G8R8_SInt = 64,
				B8G8R8A8_SInt = 65,
				R4G4B4A4_UNormPack16 = 66,
				B4G4R4A4_UNormPack16 = 67,
				R5G6B5_UNormPack16 = 68,
				B5G6R5_UNormPack16 = 69,
				R5G5B5A1_UNormPack16 = 70,
				B5G5R5A1_UNormPack16 = 71,
				A1R5G5B5_UNormPack16 = 72,
				E5B9G9R9_UFloatPack32 = 73,
				B10G11R11_UFloatPack32 = 74,
				A2B10G10R10_UNormPack32 = 75,
				A2B10G10R10_UIntPack32 = 76,
				A2B10G10R10_SIntPack32 = 77,
				A2R10G10B10_UNormPack32 = 78,
				A2R10G10B10_UIntPack32 = 79,
				A2R10G10B10_SIntPack32 = 80,
				A2R10G10B10_XRSRGBPack32 = 81,
				A2R10G10B10_XRUNormPack32 = 82,
				R10G10B10_XRSRGBPack32 = 83,
				R10G10B10_XRUNormPack32 = 84,
				A10R10G10B10_XRSRGBPack32 = 85,
				A10R10G10B10_XRUNormPack32 = 86,
				RGB_DXT1_SRGB = 96,
				RGBA_DXT1_SRGB = 96,
				RGB_DXT1_UNorm = 97,
				RGBA_DXT1_UNorm = 97,
				RGBA_DXT3_SRGB = 98,
				RGBA_DXT3_UNorm = 99,
				RGBA_DXT5_SRGB = 100,
				RGBA_DXT5_UNorm = 101,
				R_BC4_UNorm = 102,
				R_BC4_SNorm = 103,
				RG_BC5_UNorm = 104,
				RG_BC5_SNorm = 105,
				RGB_BC6H_UFloat = 106,
				RGB_BC6H_SFloat = 107,
				RGBA_BC7_SRGB = 108,
				RGBA_BC7_UNorm = 109,
				RGB_PVRTC_2Bpp_SRGB = 110,
				RGB_PVRTC_2Bpp_UNorm = 111,
				RGB_PVRTC_4Bpp_SRGB = 112,
				RGB_PVRTC_4Bpp_UNorm = 113,
				RGBA_PVRTC_2Bpp_SRGB = 114,
				RGBA_PVRTC_2Bpp_UNorm = 115,
				RGBA_PVRTC_4Bpp_SRGB = 116,
				RGBA_PVRTC_4Bpp_UNorm = 117,
				RGB_ETC_UNorm = 118,
				RGB_ETC2_SRGB = 119,
				RGB_ETC2_UNorm = 120,
				RGB_A1_ETC2_SRGB = 121,
				RGB_A1_ETC2_UNorm = 122,
				RGBA_ETC2_SRGB = 123,
				RGBA_ETC2_UNorm = 124,
				R_EAC_UNorm = 125,
				R_EAC_SNorm = 126,
				RG_EAC_UNorm = 127,
				RG_EAC_SNorm = 128,
				RGBA_ASTC4X4_SRGB = 129,
				RGBA_ASTC4X4_UNorm = 130,
				RGBA_ASTC5X5_SRGB = 131,
				RGBA_ASTC5X5_UNorm = 132,
				RGBA_ASTC6X6_SRGB = 133,
				RGBA_ASTC6X6_UNorm = 134,
				RGBA_ASTC8X8_SRGB = 135,
				RGBA_ASTC8X8_UNorm = 136,
				RGBA_ASTC10X10_SRGB = 137,
				RGBA_ASTC10X10_UNorm = 138,
				RGBA_ASTC12X12_SRGB = 139,
				RGBA_ASTC12X12_UNorm = 140,
			};

			// Name: UnityEngine::Experimental::Rendering::TextureCreationFlags
			// Flags: Private | Assembly | Famorassem
			enum class TextureCreationFlags
			{
				None = 0,
				MipChain = 1,
				Crunch = 64,
			};
		}
	}

	// Name: UnityEngine::ApplicationMemoryUsage
	// Flags: Private | Assembly | Famorassem
	enum class ApplicationMemoryUsage
	{
		Unknown = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		Critical = 4,
	};

	// Name: UnityEngine::CursorMode
	// Flags: Private | Assembly | Famorassem
	enum class CursorMode
	{
		Auto = 0,
		ForceSoftware = 1,
	};

	// Name: UnityEngine::LogType
	// Flags: Private | Assembly | Famorassem
	enum class LogType
	{
		Error = 0,
		Assert = 1,
		Warning = 2,
		Log = 3,
		Exception = 4,
	};

	// Name: UnityEngine::ApplicationInstallMode
	// Flags: Private | Assembly | Famorassem
	enum class ApplicationInstallMode
	{
		Unknown = 0,
		Store = 1,
		DeveloperBuild = 2,
		Adhoc = 3,
		Enterprise = 4,
		Editor = 5,
	};

	// Name: UnityEngine::CameraClearFlags
	// Flags: Private | Assembly | Famorassem
	enum class CameraClearFlags
	{
		Skybox = 1,
		Color = 2,
		SolidColor = 2,
		Depth = 3,
		Nothing = 4,
	};

	// Name: UnityEngine::RuntimePlatform
	// Flags: Private | Assembly | Famorassem
	enum class RuntimePlatform
	{
		OSXEditor = 0,
		OSXPlayer = 1,
		WindowsPlayer = 2,
		OSXWebPlayer = 3,
		OSXDashboardPlayer = 4,
		WindowsWebPlayer = 5,
		WindowsEditor = 7,
		IPhonePlayer = 8,
		XBOX360 = 10,
		PS3 = 9,
		Android = 11,
		NaCl = 12,
		FlashPlayer = 15,
		LinuxPlayer = 13,
		LinuxEditor = 16,
		WebGLPlayer = 17,
		MetroPlayerX86 = 18,
		WSAPlayerX86 = 18,
		MetroPlayerX64 = 19,
		WSAPlayerX64 = 19,
		MetroPlayerARM = 20,
		WSAPlayerARM = 20,
		WP8Player = 21,
		BlackBerryPlayer = 22,
		TizenPlayer = 23,
		PSP2 = 24,
		PS4 = 25,
		PSM = 26,
		XboxOne = 27,
		SamsungTVPlayer = 28,
		WiiU = 30,
		tvOS = 31,
		Switch = 32,
		Lumin = 33,
		Stadia = 34,
		CloudRendering = 35,
		GameCoreScarlett = -1,
		GameCoreXboxSeries = 36,
		GameCoreXboxOne = 37,
		PS5 = 38,
		EmbeddedLinuxArm64 = 39,
		EmbeddedLinuxArm32 = 40,
		EmbeddedLinuxX64 = 41,
		EmbeddedLinuxX86 = 42,
		LinuxServer = 43,
		WindowsServer = 44,
		OSXServer = 45,
		QNXArm32 = 46,
		QNXArm64 = 47,
		QNXX64 = 48,
		QNXX86 = 49,
		VisionOS = 50,
	};

	// Name: UnityEngine::NetworkReachability
	// Flags: Private | Assembly | Famorassem
	enum class NetworkReachability
	{
		NotReachable = 0,
		ReachableViaCarrierDataNetwork = 1,
		ReachableViaLocalAreaNetwork = 2,
	};

	// Name: UnityEngine::HideFlags
	// Flags: Private | Assembly | Famorassem
	enum class HideFlags
	{
		None = 0,
		HideInHierarchy = 1,
		HideInInspector = 2,
		DontSaveInEditor = 4,
		NotEditable = 8,
		DontSaveInBuild = 16,
		DontUnloadUnusedAsset = 32,
		DontSave = 52,
		HideAndDontSave = 61,
	};

	// Name: UnityEngine::CameraType
	// Flags: Private | Assembly | Famorassem
	enum class CameraType
	{
		Game = 1,
		SceneView = 2,
		Preview = 4,
		VR = 8,
		Reflection = 16,
	};

	// Name: UnityEngine::TextureFormat
	// Flags: Private | Assembly | Famorassem
	enum class TextureFormat
	{
		Alpha8 = 1,
		ARGB4444 = 2,
		RGB24 = 3,
		RGBA32 = 4,
		ARGB32 = 5,
		RGB565 = 7,
		R16 = 9,
		DXT1 = 10,
		DXT5 = 12,
		RGBA4444 = 13,
		BGRA32 = 14,
		RHalf = 15,
		RGHalf = 16,
		RGBAHalf = 17,
		RFloat = 18,
		RGFloat = 19,
		RGBAFloat = 20,
		YUY2 = 21,
		RGB9e5Float = 22,
		BC4 = 26,
		BC5 = 27,
		BC6H = 24,
		BC7 = 25,
		DXT1Crunched = 28,
		DXT5Crunched = 29,
		PVRTC_RGB2 = 30,
		PVRTC_RGBA2 = 31,
		PVRTC_RGB4 = 32,
		PVRTC_RGBA4 = 33,
		ETC_RGB4 = 34,
		EAC_R = 41,
		EAC_R_SIGNED = 42,
		EAC_RG = 43,
		EAC_RG_SIGNED = 44,
		ETC2_RGB = 45,
		ETC2_RGBA1 = 46,
		ETC2_RGBA8 = 47,
		ASTC_4x4 = 48,
		ASTC_5x5 = 49,
		ASTC_6x6 = 50,
		ASTC_8x8 = 51,
		ASTC_10x10 = 52,
		ASTC_12x12 = 53,
		ETC_RGB4_3DS = 60,
		ETC_RGBA8_3DS = 61,
		RG16 = 62,
		R8 = 63,
		ETC_RGB4Crunched = 64,
		ETC2_RGBA8Crunched = 65,
		ASTC_HDR_4x4 = 66,
		ASTC_HDR_5x5 = 67,
		ASTC_HDR_6x6 = 68,
		ASTC_HDR_8x8 = 69,
		ASTC_HDR_10x10 = 70,
		ASTC_HDR_12x12 = 71,
		RG32 = 72,
		RGB48 = 73,
		RGBA64 = 74,
		ASTC_RGB_4x4 = 48,
		ASTC_RGB_5x5 = 49,
		ASTC_RGB_6x6 = 50,
		ASTC_RGB_8x8 = 51,
		ASTC_RGB_10x10 = 52,
		ASTC_RGB_12x12 = 53,
		ASTC_RGBA_4x4 = 54,
		ASTC_RGBA_5x5 = 55,
		ASTC_RGBA_6x6 = 56,
		ASTC_RGBA_8x8 = 57,
		ASTC_RGBA_10x10 = 58,
		ASTC_RGBA_12x12 = 59,
	};

	// Name: UnityEngine::TextureColorSpace
	// Flags: 
	enum class TextureColorSpace
	{
		Linear = 0,
		sRGB = 1,
	};

	// Name: UnityEngine::ColorSpace
	// Flags: Private | Assembly | Famorassem
	enum class ColorSpace
	{
		Uninitialized = -1,
		Gamma = 0,
		Linear = 1,
	};

	// Name: UnityEngine::FilterMode
	// Flags: Private | Assembly | Famorassem
	enum class FilterMode
	{
		Point = 0,
		Bilinear = 1,
		Trilinear = 2,
	};

	// Name: UnityEngine::TextureWrapMode
	// Flags: Private | Assembly | Famorassem
	enum class TextureWrapMode
	{
		Repeat = 0,
		Clamp = 1,
		Mirror = 2,
		MirrorOnce = 3,
	};

	// Name: UnityEngine::FullScreenMode
	// Flags: Private | Assembly | Famorassem
	enum class FullScreenMode
	{
		ExclusiveFullScreen = 0,
		FullScreenWindow = 1,
		MaximizedWindow = 2,
		Windowed = 3,
	};

	// Name: UnityEngine::CursorLockMode
	// Flags: Private | Assembly | Famorassem
	enum class CursorLockMode
	{
		None = 0,
		Locked = 1,
		Confined = 2,
	};


	// Name: UnityEngine::Vector2
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Vector2 -> System::ValueType -> System::Object
	class Vector2
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Vector2");

		STATIC_FIELD(UnityEngine::Vector2, zeroVector);
		STATIC_FIELD(UnityEngine::Vector2, oneVector);
		STATIC_FIELD(UnityEngine::Vector2, upVector);
		STATIC_FIELD(UnityEngine::Vector2, downVector);
		STATIC_FIELD(UnityEngine::Vector2, leftVector);
		STATIC_FIELD(UnityEngine::Vector2, rightVector);
		STATIC_FIELD(UnityEngine::Vector2, positiveInfinityVector);
		STATIC_FIELD(UnityEngine::Vector2, negativeInfinityVector);
		STATIC_FIELD(float, kEpsilon);
		STATIC_FIELD(float, kEpsilonNormalSqrt);

		float x;
		float y;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC486C0
		static UnityEngine::Vector2 Lerp(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "Lerp", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48670
		static UnityEngine::Vector2 LerpUnclamped(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float t)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "LerpUnclamped", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC487B0
		static UnityEngine::Vector2 MoveTowards(UnityEngine::Vector2 current, UnityEngine::Vector2 target, float maxDistanceDelta)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, float> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "MoveTowards", "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single");
			return invoker(current, target, maxDistanceDelta);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48960
		static UnityEngine::Vector2 Scale(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "Scale", "UnityEngine.Vector2", "UnityEngine.Vector2");
			return invoker(a, b);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48530
		static float Dot(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
		{
			static NaMethodInvoker<float, UnityEngine::Vector2, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Single", "Dot", "UnityEngine.Vector2", "UnityEngine.Vector2");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48480
		static float Distance(UnityEngine::Vector2 a, UnityEngine::Vector2 b)
		{
			static NaMethodInvoker<float, UnityEngine::Vector2, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Single", "Distance", "UnityEngine.Vector2", "UnityEngine.Vector2");
			return invoker(a, b);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48380
		static UnityEngine::Vector2 ClampMagnitude(UnityEngine::Vector2 vector, float maxLength)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, float> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "ClampMagnitude", "UnityEngine.Vector2", "System.Single");
			return invoker(vector, maxLength);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48770
		static UnityEngine::Vector2 Min(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "Min", "UnityEngine.Vector2", "UnityEngine.Vector2");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC48730
		static UnityEngine::Vector2 Max(UnityEngine::Vector2 lhs, UnityEngine::Vector2 rhs)
		{
			static NaMethodInvoker<UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "Max", "UnityEngine.Vector2", "UnityEngine.Vector2");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC49000
		static UnityEngine::Vector2 get_zero()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_zero");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48EF0
		static UnityEngine::Vector2 get_one()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_one");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48FB0
		static UnityEngine::Vector2 get_up()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_up");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48C70
		static UnityEngine::Vector2 get_down()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_down");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48CC0
		static UnityEngine::Vector2 get_left()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_left");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48F40
		static UnityEngine::Vector2 get_right()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_right");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48DC0
		static UnityEngine::Vector2 get_negativeInfinity()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_negativeInfinity");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48B80
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBA49CA0
		float get_Item(int32_t index)
		{
			static NaMethodInvoker<float, Vector2*, int32_t> invoker = METHOD_ADDRESS("System.Single", "get_Item", "System.Int32");
			return invoker(this, index);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC304F0
		void set_Item(int32_t index, float value)
		{
			static NaMethodInvoker<void, Vector2*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "set_Item", "System.Int32", "System.Single");
			invoker(this, index, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC488E0
		void Normalize()
		{
			static NaMethodInvoker<void, Vector2*> invoker = METHOD_ADDRESS("System.Void", "Normalize");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48E10
		UnityEngine::Vector2 get_normalized()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Vector2*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_normalized");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC489B0
		std::string ToString()
		{
			static NaMethodInvoker<void*, Vector2*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC489A0
		std::string ToString(const std::string& format)
		{
			static NaMethodInvoker<void*, Vector2*, void*> invoker = METHOD_ADDRESS("System.String", "ToString", "System.String");
			return VmGeneralType::String(invoker(this, VmGeneralType::String(format)));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC48630
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Vector2*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC48560
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Vector2*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9BBC48600
		bool Equals(UnityEngine::Vector2 other)
		{
			static NaMethodInvoker<bool, Vector2*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Vector2");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48D10
		float get_magnitude()
		{
			static NaMethodInvoker<float, Vector2*> invoker = METHOD_ADDRESS("System.Single", "get_magnitude");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC48F90
		float get_sqrMagnitude()
		{
			static NaMethodInvoker<float, Vector2*> invoker = METHOD_ADDRESS("System.Single", "get_sqrMagnitude");
			return invoker(this);
		}
	};

	// Name: UnityEngine::Vector3
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Vector3 -> System::ValueType -> System::Object
	class Vector3
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Vector3");

		STATIC_FIELD(float, kEpsilon);
		STATIC_FIELD(float, kEpsilonNormalSqrt);
		STATIC_FIELD(UnityEngine::Vector3, zeroVector);
		STATIC_FIELD(UnityEngine::Vector3, oneVector);
		STATIC_FIELD(UnityEngine::Vector3, upVector);
		STATIC_FIELD(UnityEngine::Vector3, downVector);
		STATIC_FIELD(UnityEngine::Vector3, leftVector);
		STATIC_FIELD(UnityEngine::Vector3, rightVector);
		STATIC_FIELD(UnityEngine::Vector3, forwardVector);
		STATIC_FIELD(UnityEngine::Vector3, backVector);
		STATIC_FIELD(UnityEngine::Vector3, positiveInfinityVector);
		STATIC_FIELD(UnityEngine::Vector3, negativeInfinityVector);

		float x;
		float y;
		float z;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A540
		static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Slerp", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC4A220
		static void OrthoNormalize2(UnityEngine::Vector3& a, UnityEngine::Vector3& b)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "OrthoNormalize2", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(a, b);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A220
		static void OrthoNormalize(UnityEngine::Vector3& normal, UnityEngine::Vector3& tangent)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "OrthoNormalize", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(normal, tangent);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A420
		static UnityEngine::Vector3 RotateTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, float maxRadiansDelta, float maxMagnitudeDelta)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "RotateTowards", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Single");
			return invoker(current, target, maxRadiansDelta, maxMagnitudeDelta);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49DF0
		static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Lerp", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49DA0
		static UnityEngine::Vector3 LerpUnclamped(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float t)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "LerpUnclamped", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49F90
		static UnityEngine::Vector3 MoveTowards(UnityEngine::Vector3 current, UnityEngine::Vector3 target, float maxDistanceDelta)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "MoveTowards", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single");
			return invoker(current, target, maxDistanceDelta);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A910
		static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime, float maxSpeed)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, float, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "SmoothDamp", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3&", "System.Single", "System.Single");
			return invoker(current, target, currentVelocity, smoothTime, maxSpeed);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A9F0
		static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "SmoothDamp", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3&", "System.Single");
			return invoker(current, target, currentVelocity, smoothTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A5B0
		static UnityEngine::Vector3 SmoothDamp(UnityEngine::Vector3 current, UnityEngine::Vector3 target, UnityEngine::Vector3& currentVelocity, float smoothTime, float maxSpeed, float deltaTime)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3&, float, float, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "SmoothDamp", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3&", "System.Single", "System.Single", "System.Single");
			return invoker(current, target, currentVelocity, smoothTime, maxSpeed, deltaTime);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A4A0
		static UnityEngine::Vector3 Scale(UnityEngine::Vector3 a, UnityEngine::Vector3 b)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Scale", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(a, b);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49B30
		static UnityEngine::Vector3 Cross(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Cross", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BA7C71F0
		static UnityEngine::Vector3 Normalize(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Normalize", "UnityEngine.Vector3");
			return invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49C60
		static float Dot(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
		{
			static NaMethodInvoker<float, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Single", "Dot", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4A270
		static UnityEngine::Vector3 Project(UnityEngine::Vector3 vector, UnityEngine::Vector3 onNormal)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Project", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(vector, onNormal);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC498C0
		static float Angle(UnityEngine::Vector3 from, UnityEngine::Vector3 to)
		{
			static NaMethodInvoker<float, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Single", "Angle", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(from, to);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BA8CF250
		static float SignedAngle(UnityEngine::Vector3 from, UnityEngine::Vector3 to, UnityEngine::Vector3 axis)
		{
			static NaMethodInvoker<float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Single", "SignedAngle", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(from, to, axis);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49B90
		static float Distance(UnityEngine::Vector3 a, UnityEngine::Vector3 b)
		{
			static NaMethodInvoker<float, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Single", "Distance", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(a, b);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49A30
		static UnityEngine::Vector3 ClampMagnitude(UnityEngine::Vector3 vector, float maxLength)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "ClampMagnitude", "UnityEngine.Vector3", "System.Single");
			return invoker(vector, maxLength);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49E60
		static float Magnitude(UnityEngine::Vector3 vector)
		{
			static NaMethodInvoker<float, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Single", "Magnitude", "UnityEngine.Vector3");
			return invoker(vector);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC4AAD0
		static float SqrMagnitude(UnityEngine::Vector3 vector)
		{
			static NaMethodInvoker<float, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Single", "SqrMagnitude", "UnityEngine.Vector3");
			return invoker(vector);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49F50
		static UnityEngine::Vector3 Min(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Min", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC49F10
		static UnityEngine::Vector3 Max(UnityEngine::Vector3 lhs, UnityEngine::Vector3 rhs)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Max", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(lhs, rhs);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B260
		static UnityEngine::Vector3 get_zero()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_zero");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B170
		static UnityEngine::Vector3 get_one()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_one");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4AF90
		static UnityEngine::Vector3 get_forward()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_forward");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4AEF0
		static UnityEngine::Vector3 get_back()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_back");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B210
		static UnityEngine::Vector3 get_up()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_up");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4AF40
		static UnityEngine::Vector3 get_down()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_down");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4AFE0
		static UnityEngine::Vector3 get_left()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_left");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B1C0
		static UnityEngine::Vector3 get_right()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_right");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4AD40
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC4A4D0
		static void Slerp_Injected(UnityEngine::Vector3& a, UnityEngine::Vector3& b, float t, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&, float, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "Slerp_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "UnityEngine.Vector3&");
			invoker(a, b, t, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC4A3B0
		static void RotateTowards_Injected(UnityEngine::Vector3& current, UnityEngine::Vector3& target, float maxRadiansDelta, float maxMagnitudeDelta, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&, float, float, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "RotateTowards_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "System.Single", "System.Single", "UnityEngine.Vector3&");
			invoker(current, target, maxRadiansDelta, maxMagnitudeDelta, ret);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBB9A580
		float get_Item(int32_t index)
		{
			static NaMethodInvoker<float, Vector3*, int32_t> invoker = METHOD_ADDRESS("System.Single", "get_Item", "System.Int32");
			return invoker(this, index);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B3F0
		void set_Item(int32_t index, float value)
		{
			static NaMethodInvoker<void, Vector3*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "set_Item", "System.Int32", "System.Single");
			invoker(this, index, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC49D40
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Vector3*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC49C90
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Vector3*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9BBB87240
		bool Equals(UnityEngine::Vector3 other)
		{
			static NaMethodInvoker<bool, Vector3*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Vector3");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC4A110
		void Normalize()
		{
			static NaMethodInvoker<void, Vector3*> invoker = METHOD_ADDRESS("System.Void", "Normalize");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B120
		UnityEngine::Vector3 get_normalized()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Vector3*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_normalized");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4B030
		float get_magnitude()
		{
			static NaMethodInvoker<float, Vector3*> invoker = METHOD_ADDRESS("System.Single", "get_magnitude");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC4AAD0
		float get_sqrMagnitude()
		{
			static NaMethodInvoker<float, Vector3*> invoker = METHOD_ADDRESS("System.Single", "get_sqrMagnitude");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC4AB10
		std::string ToString()
		{
			static NaMethodInvoker<void*, Vector3*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC4AB00
		std::string ToString(const std::string& format)
		{
			static NaMethodInvoker<void*, Vector3*, void*> invoker = METHOD_ADDRESS("System.String", "ToString", "System.String");
			return VmGeneralType::String(invoker(this, VmGeneralType::String(format)));
		}
	};

	// Name: UnityEngine::Quaternion
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Quaternion -> System::ValueType -> System::Object
	class Quaternion
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Quaternion");

		STATIC_FIELD(UnityEngine::Quaternion, identityQuaternion);
		STATIC_FIELD(float, kEpsilon);

		float x;
		float y;
		float z;
		float w;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3BB30
		static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "FromToRotation", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(fromDirection, toDirection);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3BE70
		static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Inverse", "UnityEngine.Quaternion");
			return invoker(rotation);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3C510
		static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion, float> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Slerp", "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3C430
		static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion, float> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "SlerpUnclamped", "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3BF40
		static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion, float> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Lerp", "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BBE0
		static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Internal_FromEulerRad", "UnityEngine.Vector3");
			return invoker(euler);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BDD0
		static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Internal_ToEulerRad", "UnityEngine.Quaternion");
			return invoker(rotation);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BD20
		static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion, UnityEngine::Vector3&, float&> invoker = METHOD_ADDRESS("System.Void", "Internal_ToAxisAngleRad", "UnityEngine.Quaternion", "UnityEngine.Vector3&", "System.Single&");
			invoker(q, axis, angle);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3B780
		static UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, float, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "AngleAxis", "System.Single", "UnityEngine.Vector3");
			return invoker(angle, axis);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3C0D0
		static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "LookRotation", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(forward, upwards);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3C010
		static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "LookRotation", "UnityEngine.Vector3");
			return invoker(forward);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3C9A0
		static UnityEngine::Quaternion get_identity()
		{
			static NaMethodInvoker<UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "get_identity");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BA7E7500
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CAF0
		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BEC0
		static bool IsEqualUsingDot(float dot)
		{
			static NaMethodInvoker<bool, float> invoker = METHOD_ADDRESS("System.Boolean", "IsEqualUsingDot", "System.Single");
			return invoker(dot);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3B870
		static float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b)
		{
			static NaMethodInvoker<float, UnityEngine::Quaternion, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Single", "Dot", "UnityEngine.Quaternion", "UnityEngine.Quaternion");
			return invoker(a, b);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3B7E0
		static float Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b)
		{
			static NaMethodInvoker<float, UnityEngine::Quaternion, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Single", "Angle", "UnityEngine.Quaternion", "UnityEngine.Quaternion");
			return invoker(a, b);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BC30
		static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler)
		{
			static NaMethodInvoker<UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "Internal_MakePositive", "UnityEngine.Vector3");
			return invoker(euler);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3BA50
		static UnityEngine::Quaternion Euler(float x, float y, float z)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, float, float, float> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Euler", "System.Single", "System.Single", "System.Single");
			return invoker(x, y, z);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3B9B0
		static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Euler", "UnityEngine.Vector3");
			return invoker(euler);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3C270
		static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Quaternion, UnityEngine::Quaternion, float> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "RotateTowards", "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single");
			return invoker(from, to, maxDegreesDelta);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3C160
		static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q)
		{
			static NaMethodInvoker<UnityEngine::Quaternion, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "Normalize", "UnityEngine.Quaternion");
			return invoker(q);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3C880
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BAD0
		static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "FromToRotation_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Quaternion&");
			invoker(fromDirection, toDirection, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BE20
		static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "Inverse_Injected", "UnityEngine.Quaternion&", "UnityEngine.Quaternion&");
			invoker(rotation, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3C4A0
		static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion&, UnityEngine::Quaternion&, float, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "Slerp_Injected", "UnityEngine.Quaternion&", "UnityEngine.Quaternion&", "System.Single", "UnityEngine.Quaternion&");
			invoker(a, b, t, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3C3C0
		static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion&, UnityEngine::Quaternion&, float, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "SlerpUnclamped_Injected", "UnityEngine.Quaternion&", "UnityEngine.Quaternion&", "System.Single", "UnityEngine.Quaternion&");
			invoker(a, b, t, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BED0
		static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion&, UnityEngine::Quaternion&, float, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "Lerp_Injected", "UnityEngine.Quaternion&", "UnityEngine.Quaternion&", "System.Single", "UnityEngine.Quaternion&");
			invoker(a, b, t, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BB90
		static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "Internal_FromEulerRad_Injected", "UnityEngine.Vector3&", "UnityEngine.Quaternion&");
			invoker(euler, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BD80
		static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "Internal_ToEulerRad_Injected", "UnityEngine.Quaternion&", "UnityEngine.Vector3&");
			invoker(rotation, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BCC0
		static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle)
		{
			static NaMethodInvoker<void, UnityEngine::Quaternion&, UnityEngine::Vector3&, float&> invoker = METHOD_ADDRESS("System.Void", "Internal_ToAxisAngleRad_Injected", "UnityEngine.Quaternion&", "UnityEngine.Vector3&", "System.Single&");
			invoker(q, axis, angle);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3B720
		static void AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, float, UnityEngine::Vector3&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "AngleAxis_Injected", "System.Single", "UnityEngine.Vector3&", "UnityEngine.Quaternion&");
			invoker(angle, axis, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3BFB0
		static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "LookRotation_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Quaternion&");
			invoker(forward, upwards, ret);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3C8C0
		UnityEngine::Vector3 get_eulerAngles()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Quaternion*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_eulerAngles");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC3C580
		void ToAngleAxis(float& angle, UnityEngine::Vector3& axis)
		{
			static NaMethodInvoker<void, Quaternion*, float&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "ToAngleAxis", "System.Single&", "UnityEngine.Vector3&");
			invoker(this, angle, axis);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC3C130
		void Normalize()
		{
			static NaMethodInvoker<void, Quaternion*> invoker = METHOD_ADDRESS("System.Void", "Normalize");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3C9F0
		UnityEngine::Quaternion get_normalized()
		{
			static NaMethodInvoker<UnityEngine::Quaternion, Quaternion*> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "get_normalized");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BA9E1DB0
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Quaternion*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC3B8B0
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Quaternion*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9BBC14520
		bool Equals(UnityEngine::Quaternion other)
		{
			static NaMethodInvoker<bool, Quaternion*, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Quaternion");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC3C870
		std::string ToString()
		{
			static NaMethodInvoker<void*, Quaternion*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC3C5E0
		std::string ToString(const std::string& format)
		{
			static NaMethodInvoker<void*, Quaternion*, void*> invoker = METHOD_ADDRESS("System.String", "ToString", "System.String");
			return VmGeneralType::String(invoker(this, VmGeneralType::String(format)));
		}
	};

	// Name: UnityEngine::Color32
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem | Static
	// Inheritance: UnityEngine::Color32 -> System::ValueType -> System::Object
	class Color32
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Color32");

		int32_t rgba;
		uint8_t r;
		uint8_t g;
		uint8_t b;
		uint8_t a;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC13C00
		std::string ToString()
		{
			static NaMethodInvoker<void*, Color32*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}
	};

	// Name: UnityEngine::Color
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Color -> System::ValueType -> System::Object
	class Color
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Color");

		float r;
		float g;
		float b;
		float a;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14C40
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14BF0
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14AF0
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14B80
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC14620
		static UnityEngine::Color Lerp(UnityEngine::Color a, UnityEngine::Color b, float t)
		{
			static NaMethodInvoker<UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, float> invoker = METHOD_ADDRESS("UnityEngine.Color", "Lerp", "UnityEngine.Color", "UnityEngine.Color", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC145A0
		static UnityEngine::Color LerpUnclamped(UnityEngine::Color a, UnityEngine::Color b, float t)
		{
			static NaMethodInvoker<UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, float> invoker = METHOD_ADDRESS("UnityEngine.Color", "LerpUnclamped", "UnityEngine.Color", "UnityEngine.Color", "System.Single");
			return invoker(a, b, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14AC0
		static UnityEngine::Color get_red()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_red");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14A00
		static UnityEngine::Color get_green()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_green");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC149D0
		static UnityEngine::Color get_blue()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_blue");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14AD0
		static UnityEngine::Color get_white()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_white");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC149C0
		static UnityEngine::Color get_black()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_black");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14AE0
		static UnityEngine::Color get_yellow()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_yellow");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC149E0
		static UnityEngine::Color get_cyan()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_cyan");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC149F0
		static UnityEngine::Color get_gray()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_gray");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BAEF3040
		static UnityEngine::Color get_clear()
		{
			static NaMethodInvoker<UnityEngine::Color> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_clear");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14B60
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14B60
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC14710
		std::string ToString()
		{
			static NaMethodInvoker<void*, Color*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BA9E1BE0
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Color*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC14420
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Color*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9BBC14520
		bool Equals(UnityEngine::Color other)
		{
			static NaMethodInvoker<bool, Color*, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Color");
			return invoker(this, other);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC146C0
		UnityEngine::Color RGBMultiplied(float multiplier)
		{
			static NaMethodInvoker<UnityEngine::Color, Color*, float> invoker = METHOD_ADDRESS("UnityEngine.Color", "RGBMultiplied", "System.Single");
			return invoker(this, multiplier);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14A10
		UnityEngine::Color get_linear()
		{
			static NaMethodInvoker<UnityEngine::Color, Color*> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_linear");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC14AA0
		float get_maxColorComponent()
		{
			static NaMethodInvoker<float, Color*> invoker = METHOD_ADDRESS("System.Single", "get_maxColorComponent");
			return invoker(this);
		}
	};

	// Name: UnityEngine::Bounds
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Bounds -> System::ValueType -> System::Object
	class Bounds
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Bounds");

		FIELD(UnityEngine::Vector3, m_Center);
		FIELD(UnityEngine::Vector3, m_Extents);


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC11E60
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Bounds*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC11D40
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Bounds*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9BBC11CB0
		bool Equals(UnityEngine::Bounds other)
		{
			static NaMethodInvoker<bool, Bounds*, UnityEngine::Bounds> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Bounds");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBBF6320
		UnityEngine::Vector3 get_center()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Bounds*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_center");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBAEC190
		void set_center(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Bounds*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_center", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC12270
		UnityEngine::Vector3 get_size()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Bounds*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_size");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC12410
		void set_size(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Bounds*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_size", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11B90
		UnityEngine::Vector3 get_extents()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Bounds*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_extents");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11BB0
		void set_extents(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Bounds*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_extents", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC12220
		UnityEngine::Vector3 get_min()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Bounds*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_min");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC121D0
		UnityEngine::Vector3 get_max()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Bounds*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_max");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC11F30
		void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max)
		{
			static NaMethodInvoker<void, Bounds*, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "SetMinMax", "UnityEngine.Vector3", "UnityEngine.Vector3");
			invoker(this, min, max);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC11BC0
		void Encapsulate(UnityEngine::Vector3 point)
		{
			static NaMethodInvoker<void, Bounds*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "Encapsulate", "UnityEngine.Vector3");
			invoker(this, point);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC12170
		std::string ToString()
		{
			static NaMethodInvoker<void*, Bounds*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}
	};

	class Transform;
	class Component;

	// Name: UnityEngine::Object
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Object -> System::Object
	class Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Object");

		STATIC_FIELD(int32_t, OffsetOfInstanceIDInCPlusPlusObject);
		STATIC_STR_FIELD(objectIsNullMessage);
		STATIC_STR_FIELD(cloneDestroyedMessage);

		FIELD(intptr_t, m_CachedPtr);


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A840
		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC38F10
		static bool CompareBaseObjects(UnityEngine::Object* lhs, UnityEngine::Object* rhs)
		{
			static NaMethodInvoker<bool, UnityEngine::Object*, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Boolean", "CompareBaseObjects", "UnityEngine.Object", "UnityEngine.Object");
			return invoker(lhs, rhs);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A510
		static bool IsNativeObjectAlive(UnityEngine::Object* o)
		{
			static NaMethodInvoker<bool, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Boolean", "IsNativeObjectAlive", "UnityEngine.Object");
			return invoker(o);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39BE0
		static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Object", "Instantiate", "UnityEngine.Object", "UnityEngine.Vector3", "UnityEngine.Quaternion");
			return invoker(original, position, rotation);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39750
		static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform*> invoker = METHOD_ADDRESS("UnityEngine.Object", "Instantiate", "UnityEngine.Object", "UnityEngine.Vector3", "UnityEngine.Quaternion", "UnityEngine.Transform");
			return invoker(original, position, rotation, parent);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39A50
		static UnityEngine::Object* Instantiate(UnityEngine::Object* original)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*> invoker = METHOD_ADDRESS("UnityEngine.Object", "Instantiate", "UnityEngine.Object");
			return invoker(original);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39E80
		static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Transform* parent, bool instantiateInWorldSpace)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Transform*, bool> invoker = METHOD_ADDRESS("UnityEngine.Object", "Instantiate", "UnityEngine.Object", "UnityEngine.Transform", "System.Boolean");
			return invoker(original, parent, instantiateInWorldSpace);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC390B0
		static void Destroy(UnityEngine::Object* obj, float t)
		{
			static NaMethodInvoker<void, UnityEngine::Object*, float> invoker = METHOD_ADDRESS("System.Void", "Destroy", "UnityEngine.Object", "System.Single");
			invoker(obj, t);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39100
		static void Destroy(UnityEngine::Object* obj)
		{
			static NaMethodInvoker<void, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Void", "Destroy", "UnityEngine.Object");
			invoker(obj);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39060
		static void DestroyImmediate(UnityEngine::Object* obj, bool allowDestroyingAssets)
		{
			static NaMethodInvoker<void, UnityEngine::Object*, bool> invoker = METHOD_ADDRESS("System.Void", "DestroyImmediate", "UnityEngine.Object", "System.Boolean");
			invoker(obj, allowDestroyingAssets);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC38FF0
		static void DestroyImmediate(UnityEngine::Object* obj)
		{
			static NaMethodInvoker<void, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Void", "DestroyImmediate", "UnityEngine.Object");
			invoker(obj);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC394C0
		template<typename T>
		static Array<T*>* FindObjectsOfType()
		{
			static NaMethodInvoker<Array<T*>*, void*> invoker = METHOD_ADDRESS("UnityEngine.Object[]", "FindObjectsOfType", "System.Type");
			return invoker(T::ThisClass().type.GetObject().object);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39530
		template<typename T>
		static Array<T*>* FindObjectsOfType(bool includeInactive)
		{
			static NaMethodInvoker<Array<UnityEngine::Object*>*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Object[]", "FindObjectsOfType", "System.Type", "System.Boolean");
			return invoker(T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39170
		static void DontDestroyOnLoad(UnityEngine::Object* target)
		{
			static NaMethodInvoker<void, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Void", "DontDestroyOnLoad", "UnityEngine.Object");
			invoker(target);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC38EB0
		static void CheckNullArgument(void* arg, const std::string& message)
		{
			static NaMethodInvoker<void, void*, void*> invoker = METHOD_ADDRESS("System.Void", "CheckNullArgument", "System.Object", "System.String");
			invoker(arg, VmGeneralType::String(message));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39420
		template<typename T>
		static T* FindObjectOfType(bool includeInactive)
		{
			static NaMethodInvoker<T*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Object", "FindObjectOfType", "System.Type", "System.Boolean");
			return invoker(T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A730
		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A8D0
		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC39720
		static int32_t GetOffsetOfInstanceIDInCPlusPlusObject()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "GetOffsetOfInstanceIDInCPlusPlusObject");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A2D0
		static UnityEngine::Object* Internal_CloneSingle(UnityEngine::Object* data)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*> invoker = METHOD_ADDRESS("UnityEngine.Object", "Internal_CloneSingle", "UnityEngine.Object");
			return invoker(data);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A270
		static UnityEngine::Object* Internal_CloneSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, bool worldPositionStays)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Transform*, bool> invoker = METHOD_ADDRESS("UnityEngine.Object", "Internal_CloneSingleWithParent", "UnityEngine.Object", "UnityEngine.Transform", "System.Boolean");
			return invoker(data, parent, worldPositionStays);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A480
		static UnityEngine::Object* Internal_InstantiateSingle(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Vector3, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Object", "Internal_InstantiateSingle", "UnityEngine.Object", "UnityEngine.Vector3", "UnityEngine.Quaternion");
			return invoker(data, pos, rot);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A380
		static UnityEngine::Object* Internal_InstantiateSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Object", "Internal_InstantiateSingleWithParent", "UnityEngine.Object", "UnityEngine.Transform", "UnityEngine.Vector3", "UnityEngine.Quaternion");
			return invoker(data, parent, pos, rot);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A600
		static std::string ToString(UnityEngine::Object* obj)
		{
			static NaMethodInvoker<void*, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.String", "ToString", "UnityEngine.Object");
			return VmGeneralType::String(invoker(obj));
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC396E0
		static std::string GetName(UnityEngine::Object* obj)
		{
			static NaMethodInvoker<void*, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.String", "GetName", "UnityEngine.Object");
			return VmGeneralType::String(invoker(obj));
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A540
		static void SetName(UnityEngine::Object* obj, const std::string& name)
		{
			static NaMethodInvoker<void, UnityEngine::Object*, void*> invoker = METHOD_ADDRESS("System.Void", "SetName", "UnityEngine.Object", "System.String");
			invoker(obj, VmGeneralType::String(name));
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC393E0
		static UnityEngine::Object* FindObjectFromInstanceID(int32_t instanceID)
		{
			static NaMethodInvoker<UnityEngine::Object*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Object", "FindObjectFromInstanceID", "System.Int32");
			return invoker(instanceID);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC39580
		static UnityEngine::Object* ForceLoadFromInstanceID(int32_t instanceID)
		{
			static NaMethodInvoker<UnityEngine::Object*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Object", "ForceLoadFromInstanceID", "System.Int32");
			return invoker(instanceID);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A640
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A420
		static UnityEngine::Object* Internal_InstantiateSingle_Injected(UnityEngine::Object* data, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Vector3&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("UnityEngine.Object", "Internal_InstantiateSingle_Injected", "UnityEngine.Object", "UnityEngine.Vector3&", "UnityEngine.Quaternion&");
			return invoker(data, pos, rot);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3A310
		static UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot)
		{
			static NaMethodInvoker<UnityEngine::Object*, UnityEngine::Object*, UnityEngine::Transform*, UnityEngine::Vector3&, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("UnityEngine.Object", "Internal_InstantiateSingleWithParent_Injected", "UnityEngine.Object", "UnityEngine.Transform", "UnityEngine.Vector3&", "UnityEngine.Quaternion&");
			return invoker(data, parent, pos, rot);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC395D0
		int32_t GetInstanceID()
		{
			static NaMethodInvoker<int32_t, Object*> invoker = METHOD_ADDRESS("System.Int32", "GetInstanceID");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC395C0
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Object*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC391B0
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Object*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BAD150B0
		intptr_t GetCachedPtr()
		{
			static NaMethodInvoker<intptr_t, Object*> invoker = METHOD_ADDRESS("System.IntPtr", "GetCachedPtr");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A6C0
		std::string get_name()
		{
			static NaMethodInvoker<void*, Object*> invoker = METHOD_ADDRESS("System.String", "get_name");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3AA20
		void set_name(const std::string& value)
		{
			static NaMethodInvoker<void, Object*, void*> invoker = METHOD_ADDRESS("System.Void", "set_name", "System.String");
			invoker(this, VmGeneralType::String(value));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A680
		UnityEngine::HideFlags get_hideFlags()
		{
			static NaMethodInvoker<UnityEngine::HideFlags, Object*> invoker = METHOD_ADDRESS("UnityEngine.HideFlags", "get_hideFlags");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3A9E0
		void set_hideFlags(UnityEngine::HideFlags value)
		{
			static NaMethodInvoker<void, Object*, UnityEngine::HideFlags> invoker = METHOD_ADDRESS("System.Void", "set_hideFlags", "UnityEngine.HideFlags");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC3A590
		std::string ToString()
		{
			static NaMethodInvoker<void*, Object*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}
	};

	// Name: UnityEngine::ApplicationMemoryUsageChange
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::ApplicationMemoryUsageChange -> System::ValueType -> System::Object
	class ApplicationMemoryUsageChange
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "ApplicationMemoryUsageChange");

		BACKING_FIELD(UnityEngine::ApplicationMemoryUsage, memoryUsage);


		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BAAA1590
		void set_memoryUsage(UnityEngine::ApplicationMemoryUsage value)
		{
			static NaMethodInvoker<void, ApplicationMemoryUsageChange*, UnityEngine::ApplicationMemoryUsage> invoker = METHOD_ADDRESS("System.Void", "set_memoryUsage", "UnityEngine.ApplicationMemoryUsage");
			invoker(this, value);
		}
	};

	// Name: UnityEngine::Application
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Application -> System::Object
	class Application
	{
	public:
		// Name: LowMemoryCallback
		// ClassType: Normal
		// Flags: Famandassem | Assembly | Public
		// Inheritance: LowMemoryCallback -> System::MulticastDelegate -> System::Delegate -> System::Object
		class LowMemoryCallback
		{
		public:
			NESTED_CLASS(Application, "LowMemoryCallback");

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9BA7A0070
			void Invoke()
			{
				static NaMethodInvoker<void, LowMemoryCallback*> invoker = METHOD_ADDRESS("System.Void", "Invoke");
				invoker(this);
			}
		};

		// Name: MemoryUsageChangedCallback
		// ClassType: Normal
		// Flags: Famandassem | Assembly | Public
		// Inheritance: MemoryUsageChangedCallback -> System::MulticastDelegate -> System::Delegate -> System::Object
		class MemoryUsageChangedCallback
		{
		public:
			NESTED_CLASS(Application, "MemoryUsageChangedCallback");

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9BA7A0B80
			void Invoke(UnityEngine::ApplicationMemoryUsageChange& usage)
			{
				static NaMethodInvoker<void, MemoryUsageChangedCallback*, UnityEngine::ApplicationMemoryUsageChange&> invoker = METHOD_ADDRESS("System.Void", "Invoke", "UnityEngine.ApplicationMemoryUsageChange&");
				invoker(this, usage);
			}
		};

		// Name: LogCallback
		// ClassType: Normal
		// Flags: Famandassem | Assembly | Public
		// Inheritance: LogCallback -> System::MulticastDelegate -> System::Delegate -> System::Object
		class LogCallback
		{
		public:
			NESTED_CLASS(Application, "LogCallback");

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9BA8A26B0
			void Invoke(const std::string& condition, const std::string& stackTrace, UnityEngine::LogType type)
			{
				static NaMethodInvoker<void, LogCallback*, void*, void*, UnityEngine::LogType> invoker = METHOD_ADDRESS("System.Void", "Invoke", "System.String", "System.String", "UnityEngine.LogType");
				invoker(this, VmGeneralType::String(condition), VmGeneralType::String(stackTrace), type);
			}
		};

	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Application");

		STATIC_FIELD(UnityEngine::Application::LowMemoryCallback*, lowMemory);
		STATIC_FIELD(UnityEngine::Application::MemoryUsageChangedCallback*, memoryUsageChanged);
		STATIC_FIELD(UnityEngine::Application::LogCallback*, s_LogCallbackHandler);
		STATIC_FIELD(UnityEngine::Application::LogCallback*, s_LogCallbackHandlerThreaded);
		STATIC_FIELD(void*, focusChanged);
		STATIC_FIELD(void*, deepLinkActivated);
		STATIC_FIELD(void*, wantsToQuit);
		STATIC_FIELD(void*, quitting);
		STATIC_FIELD(void*, unloading);


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC10790
		static void Quit(int32_t exitCode)
		{
			static NaMethodInvoker<void, int32_t> invoker = METHOD_ADDRESS("System.Void", "Quit", "System.Int32");
			invoker(exitCode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC107D0
		static void Quit()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "Quit");
			invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10E50
		static bool get_isPlaying()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_isPlaying");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10D80
		static bool get_isFocused()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_isFocused");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10BD0
		static std::string get_buildGUID()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_buildGUID");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10F10
		static bool get_runInBackground()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_runInBackground");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11350
		static void set_runInBackground(bool value)
		{
			static NaMethodInvoker<void, bool> invoker = METHOD_ADDRESS("System.Void", "set_runInBackground", "System.Boolean");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10D50
		static bool get_isBatchMode()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_isBatchMode");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10C30
		static std::string get_dataPath()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_dataPath");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10F40
		static std::string get_streamingAssetsPath()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_streamingAssetsPath");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10E80
		static std::string get_persistentDataPath()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_persistentDataPath");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10FA0
		static std::string get_temporaryCachePath()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_temporaryCachePath");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10FD0
		static std::string get_unityVersion()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_unityVersion");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11000
		static std::string get_version()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_version");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10CC0
		static std::string get_identifier()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_identifier");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10CF0
		static UnityEngine::ApplicationInstallMode get_installMode()
		{
			static NaMethodInvoker<UnityEngine::ApplicationInstallMode> invoker = METHOD_ADDRESS("UnityEngine.ApplicationInstallMode", "get_installMode");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10EE0
		static std::string get_productName()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_productName");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10C00
		static std::string get_cloudProjectId()
		{
			static NaMethodInvoker<void*> invoker = METHOD_ADDRESS("System.String", "get_cloudProjectId");
			return VmGeneralType::String(invoker());
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC10750
		static void OpenURL(const std::string& url)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "OpenURL", "System.String");
			invoker(VmGeneralType::String(url));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10F70
		static int32_t get_targetFrameRate()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "get_targetFrameRate");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11390
		static void set_targetFrameRate(int32_t value)
		{
			static NaMethodInvoker<void, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_targetFrameRate", "System.Int32");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10C90
		static bool get_genuine()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_genuine");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10C60
		static bool get_genuineCheckAvailable()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_genuineCheckAvailable");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10EB0
		static UnityEngine::RuntimePlatform get_platform()
		{
			static NaMethodInvoker<UnityEngine::RuntimePlatform> invoker = METHOD_ADDRESS("UnityEngine.RuntimePlatform", "get_platform");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10DB0
		static bool get_isMobilePlatform()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_isMobilePlatform");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10D20
		static UnityEngine::NetworkReachability get_internetReachability()
		{
			static NaMethodInvoker<UnityEngine::NetworkReachability> invoker = METHOD_ADDRESS("UnityEngine.NetworkReachability", "get_internetReachability");
			return invoker();
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC100D0
		static void CallLowMemory(UnityEngine::ApplicationMemoryUsage usage)
		{
			static NaMethodInvoker<void, UnityEngine::ApplicationMemoryUsage> invoker = METHOD_ADDRESS("System.Void", "CallLowMemory", "UnityEngine.ApplicationMemoryUsage");
			invoker(usage);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC10210
		static bool HasLogCallback()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "HasLogCallback");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC0FFE0
		static void CallLogCallback(const std::string& logString, const std::string& stackTrace, UnityEngine::LogType type, bool invokedOnMainThread)
		{
			static NaMethodInvoker<void, void*, void*, UnityEngine::LogType, bool> invoker = METHOD_ADDRESS("System.Void", "CallLogCallback", "System.String", "System.String", "UnityEngine.LogType", "System.Boolean");
			invoker(VmGeneralType::String(logString), VmGeneralType::String(stackTrace), type, invokedOnMainThread);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC108B0
		static void add_focusChanged(void* value)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "add_focusChanged", "System.Action<System.Boolean>");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11030
		static void remove_focusChanged(void* value)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "remove_focusChanged", "System.Action<System.Boolean>");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10AC0
		static void add_wantsToQuit(void* value)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "add_wantsToQuit", "System.Func<System.Boolean>");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11240
		static void remove_wantsToQuit(void* value)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "remove_wantsToQuit", "System.Func<System.Boolean>");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC109C0
		static void add_quitting(void* value)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "add_quitting", "System.Action");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11140
		static void remove_quitting(void* value)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "remove_quitting", "System.Action");
			invoker(value);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC10430
		static bool Internal_ApplicationWantsToQuit()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "Internal_ApplicationWantsToQuit");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC10290
		static void Internal_ApplicationQuit()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "Internal_ApplicationQuit");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC103A0
		static void Internal_ApplicationUnload()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "Internal_ApplicationUnload");
			invoker();
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC10710
		static void InvokeOnBeforeRender()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "InvokeOnBeforeRender");
			invoker();
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC10670
		static void InvokeFocusChanged(bool focus)
		{
			static NaMethodInvoker<void, bool> invoker = METHOD_ADDRESS("System.Void", "InvokeFocusChanged", "System.Boolean");
			invoker(focus);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC105D0
		static void InvokeDeepLinkActivated(const std::string& url)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "InvokeDeepLinkActivated", "System.String");
			invoker(VmGeneralType::String(url));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BB4A2970
		static bool get_isEditor()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_isEditor");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC10830
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}
	};

	// Name: UnityEngine::Debug
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Debug -> System::Object
	class Debug
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Debug");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC16C30
		static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "DrawLine", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Color");
			invoker(start, end, color);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC16B90
		static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color, float duration, bool depthTest)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Color, float, bool> invoker = METHOD_ADDRESS("System.Void", "DrawLine", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Color", "System.Single", "System.Boolean");
			invoker(start, end, color, duration, depthTest);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC16E90
		static void DrawRay(UnityEngine::Vector3 start, UnityEngine::Vector3 dir, UnityEngine::Color color)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "DrawRay", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Color");
			invoker(start, dir, color);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC16D20
		static void DrawRay(UnityEngine::Vector3 start, UnityEngine::Vector3 dir, UnityEngine::Color color, float duration, bool depthTest)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Color, float, bool> invoker = METHOD_ADDRESS("System.Void", "DrawRay", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Color", "System.Single", "System.Boolean");
			invoker(start, dir, color, duration, depthTest);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17D00
		static void Log(void* message)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "Log", "System.Object");
			invoker(message);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17C30
		static void Log(void* message, UnityEngine::Object* context)
		{
			static NaMethodInvoker<void, void*, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Void", "Log", "System.Object", "UnityEngine.Object");
			invoker(message, context);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC175E0
		static void LogError(void* message)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "LogError", "System.Object");
			invoker(message);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17510
		static void LogError(void* message, UnityEngine::Object* context)
		{
			static NaMethodInvoker<void, void*, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Void", "LogError", "System.Object", "UnityEngine.Object");
			invoker(message, context);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17440
		static void LogErrorFormat(const std::string& format, Array<void*>* args)
		{
			static NaMethodInvoker<void, void*, Array<void*>*> invoker = METHOD_ADDRESS("System.Void", "LogErrorFormat", "System.String", "System.Object[]");
			invoker(VmGeneralType::String(format), args);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17360
		static void LogErrorFormat(UnityEngine::Object* context, const std::string& format, Array<void*>* args)
		{
			static NaMethodInvoker<void, UnityEngine::Object*, void*, Array<void*>*> invoker = METHOD_ADDRESS("System.Void", "LogErrorFormat", "UnityEngine.Object", "System.String", "System.Object[]");
			invoker(context, VmGeneralType::String(format), args);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17B70
		static void LogWarning(void* message)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "LogWarning", "System.Object");
			invoker(message);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17AA0
		static void LogWarning(void* message, UnityEngine::Object* context)
		{
			static NaMethodInvoker<void, void*, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Void", "LogWarning", "System.Object", "UnityEngine.Object");
			invoker(message, context);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC166F0
		static void Assert(bool condition)
		{
			static NaMethodInvoker<void, bool> invoker = METHOD_ADDRESS("System.Void", "Assert", "System.Boolean");
			invoker(condition);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC167C0
		static void Assert(bool condition, const std::string& message)
		{
			static NaMethodInvoker<void, bool, void*> invoker = METHOD_ADDRESS("System.Void", "Assert", "System.Boolean", "System.String");
			invoker(condition, VmGeneralType::String(message));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC172A0
		static void LogAssertion(void* message)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "LogAssertion", "System.Object");
			invoker(message);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC17F00
		static bool get_isDebugBuild()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_isDebugBuild");
			return invoker();
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC17060
		static bool IsLoggingEnabled()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "IsLoggingEnabled");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC17DC0
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC16B20
		static void DrawLine_Injected(UnityEngine::Vector3& start, UnityEngine::Vector3& end, UnityEngine::Color& color, float duration, bool depthTest)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::Color&, float, bool> invoker = METHOD_ADDRESS("System.Void", "DrawLine_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Color&", "System.Single", "System.Boolean");
			invoker(start, end, color, duration, depthTest);
		}
	};

	// Name: UnityEngine::GameObject
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::GameObject -> UnityEngine::Object -> System::Object
	class GameObject : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "GameObject");

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC35A20
		static void Internal_CreateGameObject(UnityEngine::GameObject* self, const std::string& name)
		{
			static NaMethodInvoker<void, UnityEngine::GameObject*, void*> invoker = METHOD_ADDRESS("System.Void", "Internal_CreateGameObject", "UnityEngine.GameObject", "System.String");
			invoker(self, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC35730
		static UnityEngine::GameObject* Find(const std::string& name)
		{
			static NaMethodInvoker<UnityEngine::GameObject*, void*> invoker = METHOD_ADDRESS("UnityEngine.GameObject", "Find", "System.String");
			return invoker(VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35890
		template<typename T>
		UnityEngine::Component* GetComponent()
		{
			static NaMethodInvoker<UnityEngine::Component*, GameObject*, void*> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetComponent", "System.Type");
			return invoker(this, T::ThisClass().type.GetObject().object);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35770
		template<typename T>
		void GetComponentFastPath(intptr_t oneFurtherThanResultValue)
		{
			static NaMethodInvoker<void, GameObject*, void*, intptr_t> invoker = METHOD_ADDRESS("System.Void", "GetComponentFastPath", "System.Type", "System.IntPtr");
			invoker(this, T::ThisClass().type.GetObject().object, oneFurtherThanResultValue);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC357D0
		template<typename T>
		UnityEngine::Component* GetComponentInChildren(bool includeInactive)
		{
			static NaMethodInvoker<UnityEngine::Component*, GameObject*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetComponentInChildren", "System.Type", "System.Boolean");
			return invoker(this, T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35830
		template<typename T>
		UnityEngine::Component* GetComponentInParent(bool includeInactive)
		{
			static NaMethodInvoker<UnityEngine::Component*, GameObject*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetComponentInParent", "System.Type", "System.Boolean");
			return invoker(this, T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC359A0
		template<typename T>
		Array<T*>* GetComponentsInternal(bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, void* resultList)
		{
			static NaMethodInvoker<Array<T*>*, GameObject*, void*, bool, bool, bool, bool, void*> invoker = METHOD_ADDRESS("System.Array", "GetComponentsInternal", "System.Type", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Object");
			return invoker(this, T::ThisClass().type.GetObject().object, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC358E0
		template<typename T>
		Array<UnityEngine::Component*>* GetComponentsInChildren(bool includeInactive)
		{
			static NaMethodInvoker<Array<UnityEngine::Component*>*, GameObject*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Component[]", "GetComponentsInChildren", "System.Type", "System.Boolean");
			return invoker(this, T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35BE0
		template<typename T>
		bool TryGetComponent(UnityEngine::Component& component)
		{
			static NaMethodInvoker<bool, GameObject*, void*, UnityEngine::Component&> invoker = METHOD_ADDRESS("System.Boolean", "TryGetComponent", "System.Type", "UnityEngine.Component&");
			return invoker(this, T::ThisClass().type.GetObject().object, component);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35B90
		template<typename T>
		UnityEngine::Component* TryGetComponentInternal()
		{
			static NaMethodInvoker<UnityEngine::Component*, GameObject*, void*> invoker = METHOD_ADDRESS("UnityEngine.Component", "TryGetComponentInternal", "System.Type");
			return invoker(this, T::ThisClass().type.GetObject().object);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35B30
		template<typename T>
		void TryGetComponentFastPath(intptr_t oneFurtherThanResultValue)
		{
			static NaMethodInvoker<void, GameObject*, void*, intptr_t> invoker = METHOD_ADDRESS("System.Void", "TryGetComponentFastPath", "System.Type", "System.IntPtr");
			invoker(this, T::ThisClass().type.GetObject().object, oneFurtherThanResultValue);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC35650
		template<typename T>
		UnityEngine::Component* Internal_AddComponentWithType()
		{
			static NaMethodInvoker<UnityEngine::Component*, GameObject*, void*> invoker = METHOD_ADDRESS("UnityEngine.Component", "Internal_AddComponentWithType", "System.Type");
			return invoker(this, T::ThisClass().type.GetObject().object);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35650
		template<typename T>
		UnityEngine::Component* AddComponent()
		{
			static NaMethodInvoker<UnityEngine::Component*, GameObject*, void*> invoker = METHOD_ADDRESS("UnityEngine.Component", "AddComponent", "System.Type");
			return invoker(this, T::ThisClass().type.GetObject().object);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC360C0
		UnityEngine::Transform* get_transform()
		{
			static NaMethodInvoker<UnityEngine::Transform*, GameObject*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "get_transform");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC35FA0
		int32_t get_layer()
		{
			static NaMethodInvoker<int32_t, GameObject*> invoker = METHOD_ADDRESS("System.Int32", "get_layer");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC36100
		void set_layer(int32_t value)
		{
			static NaMethodInvoker<void, GameObject*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_layer", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC35AE0
		void SetActive(bool value)
		{
			static NaMethodInvoker<void, GameObject*, bool> invoker = METHOD_ADDRESS("System.Void", "SetActive", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC35F20
		bool get_activeSelf()
		{
			static NaMethodInvoker<bool, GameObject*> invoker = METHOD_ADDRESS("System.Boolean", "get_activeSelf");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC35EE0
		bool get_activeInHierarchy()
		{
			static NaMethodInvoker<bool, GameObject*> invoker = METHOD_ADDRESS("System.Boolean", "get_activeInHierarchy");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC35F60
		bool get_isStatic()
		{
			static NaMethodInvoker<bool, GameObject*> invoker = METHOD_ADDRESS("System.Boolean", "get_isStatic");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC36080
		std::string get_tag()
		{
			static NaMethodInvoker<void*, GameObject*> invoker = METHOD_ADDRESS("System.String", "get_tag");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC356A0
		bool CompareTag(const std::string& tag)
		{
			static NaMethodInvoker<bool, GameObject*, void*> invoker = METHOD_ADDRESS("System.Boolean", "CompareTag", "System.String");
			return invoker(this, VmGeneralType::String(tag));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BB3E1FD0
		UnityEngine::GameObject* get_gameObject()
		{
			static NaMethodInvoker<UnityEngine::GameObject*, GameObject*> invoker = METHOD_ADDRESS("UnityEngine.GameObject", "get_gameObject");
			return invoker(this);
		}
	};

	// Name: UnityEngine::Component
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Component : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Component");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC327C0
		UnityEngine::Transform* get_transform()
		{
			static NaMethodInvoker<UnityEngine::Transform*, Component*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "get_transform");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC32710
		UnityEngine::GameObject* get_gameObject()
		{
			static NaMethodInvoker<UnityEngine::GameObject*, Component*> invoker = METHOD_ADDRESS("UnityEngine.GameObject", "get_gameObject");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC32470
		template<typename T>
		UnityEngine::Component* GetComponent()
		{
			static NaMethodInvoker<UnityEngine::Component*, Component*, void*> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetComponent", "System.Type");
			return invoker(this, T::ThisClass().type.GetObject().object);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC322F0
		template<typename T>
		void GetComponentFastPath(intptr_t oneFurtherThanResultValue)
		{
			static NaMethodInvoker<void, Component*, void*, intptr_t> invoker = METHOD_ADDRESS("System.Void", "GetComponentFastPath", "System.Type", "System.IntPtr");
			invoker(this, T::ThisClass().type.GetObject().object, oneFurtherThanResultValue);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC325C0
		template<typename T>
		bool TryGetComponent(UnityEngine::Component& component)
		{
			static NaMethodInvoker<bool, Component*, void*, UnityEngine::Component&> invoker = METHOD_ADDRESS("System.Boolean", "TryGetComponent", "System.Type", "UnityEngine.Component&");
			return invoker(this, T::ThisClass().type.GetObject().object, component);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC32350
		template<typename T>
		UnityEngine::Component* GetComponentInChildren(bool includeInactive)
		{
			static NaMethodInvoker<UnityEngine::Component*, Component*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetComponentInChildren", "System.Type", "System.Boolean");
			return invoker(this, T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC323E0
		template<typename T>
		UnityEngine::Component* GetComponentInParent(bool includeInactive)
		{
			static NaMethodInvoker<UnityEngine::Component*, Component*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetComponentInParent", "System.Type", "System.Boolean");
			return invoker(this, T::ThisClass().type.GetObject().object, includeInactive);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC324F0
		template<typename T>
		void GetComponentsForListInternal(void* resultList)
		{
			static NaMethodInvoker<void, Component*, void*, void*> invoker = METHOD_ADDRESS("System.Void", "GetComponentsForListInternal", "System.Type", "System.Object");
			invoker(this, T::ThisClass().type.GetObject().object, resultList);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC324F0
		template<typename T>
		void GetComponents(System::Collections::Generic::List<UnityEngine::Component*> results)
		{
			static NaMethodInvoker<void, Component*, void*, System::Collections::Generic::List<UnityEngine::Component*>> invoker = METHOD_ADDRESS("System.Void", "GetComponents", "System.Type", "System.Collections.Generic.List<UnityEngine.Component>");
			invoker(this, T::ThisClass().type.GetObject().object, results);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC32750
		std::string get_tag()
		{
			static NaMethodInvoker<void*, Component*> invoker = METHOD_ADDRESS("System.String", "get_tag");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC32270
		bool CompareTag(const std::string& tag)
		{
			static NaMethodInvoker<bool, Component*, void*> invoker = METHOD_ADDRESS("System.Boolean", "CompareTag", "System.String");
			return invoker(this, VmGeneralType::String(tag));
		}
	};

	// Name: UnityEngine::Transform
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Transform -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Transform : public UnityEngine::Component
	{
	public:
		// Name: Enumerator
		// ClassType: Normal
		// Flags: Private | Famandassem | Assembly | Famorassem | Public
		// Inheritance: Enumerator -> System::Object
		class Enumerator
		{
		public:
			NESTED_CLASS(Transform, "Enumerator");

			FIELD(UnityEngine::Transform*, outer);
			FIELD(int32_t, currentIndex);


			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9BBC35600
			void* get_Current()
			{
				static NaMethodInvoker<void*, Enumerator*> invoker = METHOD_ADDRESS("System.Object", "get_Current");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9BBC355A0
			bool MoveNext()
			{
				static NaMethodInvoker<bool, Enumerator*> invoker = METHOD_ADDRESS("System.Boolean", "MoveNext");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9BAC2AA80
			void Reset()
			{
				static NaMethodInvoker<void, Enumerator*> invoker = METHOD_ADDRESS("System.Void", "Reset");
				invoker(this);
			}
		};

	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Transform");

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC42DC0
		static UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine::Transform* transform, const std::string& path, bool isActiveOnly)
		{
			static NaMethodInvoker<UnityEngine::Transform*, UnityEngine::Transform*, void*, bool> invoker = METHOD_ADDRESS("UnityEngine.Transform", "FindRelativeTransformWithPath", "UnityEngine.Transform", "System.String", "System.Boolean");
			return invoker(transform, VmGeneralType::String(path), isActiveOnly);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44E70
		UnityEngine::Vector3 get_position()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_position");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45930
		void set_position(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_position", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44B40
		UnityEngine::Vector3 get_localPosition()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_localPosition");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45690
		void set_localPosition(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_localPosition", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44660
		UnityEngine::Vector3 get_eulerAngles()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_eulerAngles");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45470
		void set_eulerAngles(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_eulerAngles", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC449C0
		UnityEngine::Vector3 get_localEulerAngles()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_localEulerAngles");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45580
		void set_localEulerAngles(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_localEulerAngles", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44EC0
		UnityEngine::Vector3 get_right()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_right");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45190
		UnityEngine::Vector3 get_up()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_up");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44790
		UnityEngine::Vector3 get_forward()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_forward");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45140
		UnityEngine::Quaternion get_rotation()
		{
			static NaMethodInvoker<UnityEngine::Quaternion, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "get_rotation");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC459D0
		void set_rotation(UnityEngine::Quaternion value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Void", "set_rotation", "UnityEngine.Quaternion");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44BE0
		UnityEngine::Quaternion get_localRotation()
		{
			static NaMethodInvoker<UnityEngine::Quaternion, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "get_localRotation");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45730
		void set_localRotation(UnityEngine::Quaternion value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Void", "set_localRotation", "UnityEngine.Quaternion");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44C80
		UnityEngine::Vector3 get_localScale()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_localScale");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC457D0
		void set_localScale(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_localScale", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC42F70
		UnityEngine::Transform* get_parent()
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "get_parent");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45820
		void set_parent(UnityEngine::Transform* value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Transform*> invoker = METHOD_ADDRESS("System.Void", "set_parent", "UnityEngine.Transform");
			invoker(this, value);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC42F70
		UnityEngine::Transform* get_parentInternal()
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "get_parentInternal");
			return invoker(this);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC43FB0
		void set_parentInternal(UnityEngine::Transform* value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Transform*> invoker = METHOD_ADDRESS("System.Void", "set_parentInternal", "UnityEngine.Transform");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC42F70
		UnityEngine::Transform* GetParent()
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "GetParent");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43FB0
		void SetParent(UnityEngine::Transform* p)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Transform*> invoker = METHOD_ADDRESS("System.Void", "SetParent", "UnityEngine.Transform");
			invoker(this, p);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC44000
		void SetParent(UnityEngine::Transform* parent, bool worldPositionStays)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Transform*, bool> invoker = METHOD_ADDRESS("System.Void", "SetParent", "UnityEngine.Transform", "System.Boolean");
			invoker(this, parent, worldPositionStays);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC44500
		void Translate(float x, float y, float z)
		{
			static NaMethodInvoker<void, Transform*, float, float, float> invoker = METHOD_ADDRESS("System.Void", "Translate", "System.Single", "System.Single", "System.Single");
			invoker(this, x, y, z);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC438F0
		void Rotate(float xAngle, float yAngle, float zAngle)
		{
			static NaMethodInvoker<void, Transform*, float, float, float> invoker = METHOD_ADDRESS("System.Void", "Rotate", "System.Single", "System.Single", "System.Single");
			invoker(this, xAngle, yAngle, zAngle);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43630
		void RotateAroundInternal(UnityEngine::Vector3 axis, float angle)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("System.Void", "RotateAroundInternal", "UnityEngine.Vector3", "System.Single");
			invoker(this, axis, angle);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43690
		void Rotate(UnityEngine::Vector3 axis, float angle)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("System.Void", "Rotate", "UnityEngine.Vector3", "System.Single");
			invoker(this, axis, angle);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43340
		void LookAt(UnityEngine::Transform* target)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Transform*> invoker = METHOD_ADDRESS("System.Void", "LookAt", "UnityEngine.Transform");
			invoker(this, target);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC434C0
		void LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "LookAt", "UnityEngine.Vector3", "UnityEngine.Vector3");
			invoker(this, worldPosition, worldUp);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43530
		void LookAt(UnityEngine::Vector3 worldPosition)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "LookAt", "UnityEngine.Vector3");
			invoker(this, worldPosition);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC43050
		void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "Internal_LookAt", "UnityEngine.Vector3", "UnityEngine.Vector3");
			invoker(this, worldPosition, worldUp);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC44100
		UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "TransformDirection", "UnityEngine.Vector3");
			return invoker(this, direction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43110
		UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "InverseTransformDirection", "UnityEngine.Vector3");
			return invoker(this, direction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC44310
		UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "TransformVector", "UnityEngine.Vector3");
			return invoker(this, vector);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43290
		UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "InverseTransformVector", "UnityEngine.Vector3");
			return invoker(this, vector);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC441C0
		UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "TransformPoint", "UnityEngine.Vector3");
			return invoker(this, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC44220
		UnityEngine::Vector3 TransformPoint(float x, float y, float z)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, float, float, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "TransformPoint", "System.Single", "System.Single", "System.Single");
			return invoker(this, x, y, z);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC431D0
		UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "InverseTransformPoint", "UnityEngine.Vector3");
			return invoker(this, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC42FB0
		UnityEngine::Transform* get_root()
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "get_root");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC42FB0
		UnityEngine::Transform* GetRoot()
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "GetRoot");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44620
		int32_t get_childCount()
		{
			static NaMethodInvoker<int32_t, Transform*> invoker = METHOD_ADDRESS("System.Int32", "get_childCount");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC43F70
		void SetAsFirstSibling()
		{
			static NaMethodInvoker<void, Transform*> invoker = METHOD_ADDRESS("System.Void", "SetAsFirstSibling");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC44060
		void SetSiblingIndex(int32_t index)
		{
			static NaMethodInvoker<void, Transform*, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetSiblingIndex", "System.Int32");
			invoker(this, index);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC42E20
		UnityEngine::Transform* Find(const std::string& n)
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*, void*> invoker = METHOD_ADDRESS("UnityEngine.Transform", "Find", "System.String");
			return invoker(this, VmGeneralType::String(n));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44DD0
		UnityEngine::Vector3 get_lossyScale()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Transform*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_lossyScale");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC432F0
		bool IsChildOf(UnityEngine::Transform* parent)
		{
			static NaMethodInvoker<bool, Transform*, UnityEngine::Transform*> invoker = METHOD_ADDRESS("System.Boolean", "IsChildOf", "UnityEngine.Transform");
			return invoker(this, parent);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45530
		void set_hasChanged(bool value)
		{
			static NaMethodInvoker<void, Transform*, bool> invoker = METHOD_ADDRESS("System.Void", "set_hasChanged", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC42EC0
		UnityEngine::Transform* GetChild(int32_t index)
		{
			static NaMethodInvoker<UnityEngine::Transform*, Transform*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Transform", "GetChild", "System.Int32");
			return invoker(this, index);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44E20
		void get_position_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_position_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC458E0
		void set_position_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_position_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44AF0
		void get_localPosition_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_localPosition_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45640
		void set_localPosition_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_localPosition_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC450F0
		void get_rotation_Injected(UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "get_rotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45980
		void set_rotation_Injected(UnityEngine::Quaternion& value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "set_rotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44B90
		void get_localRotation_Injected(UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "get_localRotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC456E0
		void set_localRotation_Injected(UnityEngine::Quaternion& value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "set_localRotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44C30
		void get_localScale_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_localScale_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC45780
		void set_localScale_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_localScale_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC435D0
		void RotateAroundInternal_Injected(UnityEngine::Vector3& axis, float angle)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, float> invoker = METHOD_ADDRESS("System.Void", "RotateAroundInternal_Injected", "UnityEngine.Vector3&", "System.Single");
			invoker(this, axis, angle);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC42FF0
		void Internal_LookAt_Injected(UnityEngine::Vector3& worldPosition, UnityEngine::Vector3& worldUp)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "Internal_LookAt_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, worldPosition, worldUp);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC440A0
		void TransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "TransformDirection_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, direction, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC430B0
		void InverseTransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "InverseTransformDirection_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, direction, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC442B0
		void TransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "TransformVector_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, vector, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC43230
		void InverseTransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "InverseTransformVector_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, vector, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC44160
		void TransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "TransformPoint_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, position, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC43170
		void InverseTransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "InverseTransformPoint_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, position, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC44D80
		void get_lossyScale_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Transform*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_lossyScale_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}
	};

	// Name: UnityEngine::ScriptableObject
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::ScriptableObject -> UnityEngine::Object -> System::Object
	class ScriptableObject : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "ScriptableObject");
	};

	// Name: UnityEngine::Behaviour
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Behaviour : public UnityEngine::Component
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Behaviour");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC31EE0
		bool get_enabled()
		{
			static NaMethodInvoker<bool, Behaviour*> invoker = METHOD_ADDRESS("System.Boolean", "get_enabled");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC31F60
		void set_enabled(bool value)
		{
			static NaMethodInvoker<void, Behaviour*, bool> invoker = METHOD_ADDRESS("System.Void", "set_enabled", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC31F20
		bool get_isActiveAndEnabled()
		{
			static NaMethodInvoker<bool, Behaviour*> invoker = METHOD_ADDRESS("System.Boolean", "get_isActiveAndEnabled");
			return invoker(this);
		}
	};

	// Name: UnityEngine::MonoBehaviour
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::MonoBehaviour -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class MonoBehaviour : public UnityEngine::Behaviour
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "MonoBehaviour");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC38780
		static void print(void* message)
		{
			static NaMethodInvoker<void, void*> invoker = METHOD_ADDRESS("System.Void", "print", "System.Object");
			invoker(message);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC37BB0
		static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self)
		{
			static NaMethodInvoker<void, UnityEngine::MonoBehaviour*> invoker = METHOD_ADDRESS("System.Void", "Internal_CancelInvokeAll", "UnityEngine.MonoBehaviour");
			invoker(self);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC37C80
		static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self)
		{
			static NaMethodInvoker<bool, UnityEngine::MonoBehaviour*> invoker = METHOD_ADDRESS("System.Boolean", "Internal_IsInvokingAll", "UnityEngine.MonoBehaviour");
			return invoker(self);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC37CC0
		static void InvokeDelayed(UnityEngine::MonoBehaviour* self, const std::string& methodName, float time, float repeatRate)
		{
			static NaMethodInvoker<void, UnityEngine::MonoBehaviour*, void*, float, float> invoker = METHOD_ADDRESS("System.Void", "InvokeDelayed", "UnityEngine.MonoBehaviour", "System.String", "System.Single", "System.Single");
			invoker(self, VmGeneralType::String(methodName), time, repeatRate);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC37BF0
		static void CancelInvoke(UnityEngine::MonoBehaviour* self, const std::string& methodName)
		{
			static NaMethodInvoker<void, UnityEngine::MonoBehaviour*, void*> invoker = METHOD_ADDRESS("System.Void", "CancelInvoke", "UnityEngine.MonoBehaviour", "System.String");
			invoker(self, VmGeneralType::String(methodName));
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC37E60
		static bool IsInvoking(UnityEngine::MonoBehaviour* self, const std::string& methodName)
		{
			static NaMethodInvoker<bool, UnityEngine::MonoBehaviour*, void*> invoker = METHOD_ADDRESS("System.Boolean", "IsInvoking", "UnityEngine.MonoBehaviour", "System.String");
			return invoker(self, VmGeneralType::String(methodName));
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC37EB0
		static bool IsObjectMonoBehaviour(UnityEngine::Object* obj)
		{
			static NaMethodInvoker<bool, UnityEngine::Object*> invoker = METHOD_ADDRESS("System.Boolean", "IsObjectMonoBehaviour", "UnityEngine.Object");
			return invoker(obj);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC37F30
		void RaiseCancellation()
		{
			static NaMethodInvoker<void, MonoBehaviour*> invoker = METHOD_ADDRESS("System.Void", "RaiseCancellation");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37C80
		bool IsInvoking()
		{
			static NaMethodInvoker<bool, MonoBehaviour*> invoker = METHOD_ADDRESS("System.Boolean", "IsInvoking");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37BB0
		void CancelInvoke()
		{
			static NaMethodInvoker<void, MonoBehaviour*> invoker = METHOD_ADDRESS("System.Void", "CancelInvoke");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37E00
		void Invoke(const std::string& methodName, float time)
		{
			static NaMethodInvoker<void, MonoBehaviour*, void*, float> invoker = METHOD_ADDRESS("System.Void", "Invoke", "System.String", "System.Single");
			invoker(this, VmGeneralType::String(methodName), time);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37D30
		void InvokeRepeating(const std::string& methodName, float time, float repeatRate)
		{
			static NaMethodInvoker<void, MonoBehaviour*, void*, float, float> invoker = METHOD_ADDRESS("System.Void", "InvokeRepeating", "System.String", "System.Single", "System.Single");
			invoker(this, VmGeneralType::String(methodName), time, repeatRate);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37BF0
		void CancelInvoke(const std::string& methodName)
		{
			static NaMethodInvoker<void, MonoBehaviour*, void*> invoker = METHOD_ADDRESS("System.Void", "CancelInvoke", "System.String");
			invoker(this, VmGeneralType::String(methodName));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37E60
		bool IsInvoking(const std::string& methodName)
		{
			static NaMethodInvoker<bool, MonoBehaviour*, void*> invoker = METHOD_ADDRESS("System.Boolean", "IsInvoking", "System.String");
			return invoker(this, VmGeneralType::String(methodName));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC38420
		void StopCoroutine(const std::string& methodName)
		{
			static NaMethodInvoker<void, MonoBehaviour*, void*> invoker = METHOD_ADDRESS("System.Void", "StopCoroutine", "System.String");
			invoker(this, VmGeneralType::String(methodName));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC38340
		void StopAllCoroutines()
		{
			static NaMethodInvoker<void, MonoBehaviour*> invoker = METHOD_ADDRESS("System.Void", "StopAllCoroutines");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC38740
		bool get_useGUILayout()
		{
			static NaMethodInvoker<bool, MonoBehaviour*> invoker = METHOD_ADDRESS("System.Boolean", "get_useGUILayout");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC387D0
		void set_useGUILayout(bool value)
		{
			static NaMethodInvoker<void, MonoBehaviour*, bool> invoker = METHOD_ADDRESS("System.Void", "set_useGUILayout", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC37C40
		std::string GetScriptClassName()
		{
			static NaMethodInvoker<void*, MonoBehaviour*> invoker = METHOD_ADDRESS("System.String", "GetScriptClassName");
			return VmGeneralType::String(invoker(this));
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC37EF0
		void OnCancellationTokenCreated()
		{
			static NaMethodInvoker<void, MonoBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnCancellationTokenCreated");
			invoker(this);
		}
	};

	// Name: UnityEngine::Ray
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Ray -> System::ValueType -> System::Object
	class Ray
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Ray");

		UnityEngine::Vector3 m_Origin;
		UnityEngine::Vector3 m_Direction;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBBF6320
		UnityEngine::Vector3 get_origin()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Ray*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_origin");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC11B90
		UnityEngine::Vector3 get_direction()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Ray*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_direction");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC262A0
		UnityEngine::Vector3 GetPoint(float distance)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Ray*, float> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "GetPoint", "System.Single");
			return invoker(this, distance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC26300
		std::string ToString()
		{
			static NaMethodInvoker<void*, Ray*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}
	};

	// Name: UnityEngine::Rect
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Rect -> System::ValueType -> System::Object
	class Rect
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Rect");

		float m_XMin;
		float m_YMin;
		float m_Width;
		float m_Height;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC278D0
		static UnityEngine::Rect get_zero()
		{
			static NaMethodInvoker<UnityEngine::Rect> invoker = METHOD_ADDRESS("UnityEngine.Rect", "get_zero");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC27410
		static UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax)
		{
			static NaMethodInvoker<UnityEngine::Rect, float, float, float, float> invoker = METHOD_ADDRESS("UnityEngine.Rect", "MinMaxRect", "System.Single", "System.Single", "System.Single", "System.Single");
			return invoker(xmin, ymin, xmax, ymax);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC27450
		static UnityEngine::Rect OrderMinMax(UnityEngine::Rect rect)
		{
			static NaMethodInvoker<UnityEngine::Rect, UnityEngine::Rect> invoker = METHOD_ADDRESS("UnityEngine.Rect", "OrderMinMax", "UnityEngine.Rect");
			return invoker(rect);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BAABA130
		float get_x()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_x");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBB1F2D0
		void set_x(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_x", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BAABA140
		float get_y()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_y");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBA48930
		void set_y(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_y", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27870
		UnityEngine::Vector2 get_position()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Rect*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_position");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27A20
		void set_position(UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Rect*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "set_position", "UnityEngine.Vector2");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27800
		UnityEngine::Vector2 get_center()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Rect*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_center");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27970
		void set_center(UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Rect*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "set_center", "UnityEngine.Vector2");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27850
		UnityEngine::Vector2 get_min()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Rect*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_min");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC279E0
		void set_min(UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Rect*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "set_min", "UnityEngine.Vector2");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27830
		UnityEngine::Vector2 get_max()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Rect*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_max");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC279B0
		void set_max(UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Rect*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "set_max", "UnityEngine.Vector2");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BA8CF0C0
		float get_width()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_width");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBB08910
		void set_width(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_width", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BA8CF0B0
		float get_height()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_height");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBB9AE10
		void set_height(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_height", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27890
		UnityEngine::Vector2 get_size()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Rect*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_size");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27A40
		void set_size(UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Rect*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "set_size", "UnityEngine.Vector2");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BAABA130
		float get_xMin()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_xMin");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27A70
		void set_xMin(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_xMin", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BAABA140
		float get_yMin()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_yMin");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27AA0
		void set_yMin(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_yMin", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC278B0
		float get_xMax()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_xMax");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27A60
		void set_xMax(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_xMax", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC278C0
		float get_yMax()
		{
			static NaMethodInvoker<float, Rect*> invoker = METHOD_ADDRESS("System.Single", "get_yMax");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC27A90
		void set_yMax(float value)
		{
			static NaMethodInvoker<void, Rect*, float> invoker = METHOD_ADDRESS("System.Void", "set_yMax", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC27110
		bool Contains(UnityEngine::Vector2 point)
		{
			static NaMethodInvoker<bool, Rect*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Boolean", "Contains", "UnityEngine.Vector2");
			return invoker(this, point);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC27150
		bool Contains(UnityEngine::Vector3 point)
		{
			static NaMethodInvoker<bool, Rect*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Boolean", "Contains", "UnityEngine.Vector3");
			return invoker(this, point);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC274C0
		bool Overlaps(UnityEngine::Rect other)
		{
			static NaMethodInvoker<bool, Rect*, UnityEngine::Rect> invoker = METHOD_ADDRESS("System.Boolean", "Overlaps", "UnityEngine.Rect");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBB84DE0
		bool Overlaps(UnityEngine::Rect other, bool allowInverse)
		{
			static NaMethodInvoker<bool, Rect*, UnityEngine::Rect, bool> invoker = METHOD_ADDRESS("System.Boolean", "Overlaps", "UnityEngine.Rect", "System.Boolean");
			return invoker(this, other, allowInverse);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC27370
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Rect*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC27190
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Rect*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9BBC272C0
		bool Equals(UnityEngine::Rect other)
		{
			static NaMethodInvoker<bool, Rect*, UnityEngine::Rect> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Rect");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC27510
		std::string ToString()
		{
			static NaMethodInvoker<void*, Rect*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}
	};

	// Name: UnityEngine::Texture
// ClassType: Normal
// Flags: Private | Assembly | Famorassem
// Inheritance: UnityEngine::Texture -> UnityEngine::Object -> System::Object
	class Texture : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Texture");

		STATIC_FIELD(int32_t, GenerateAllMips);


		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F560
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC2F120
		int32_t GetDataWidth()
		{
			static NaMethodInvoker<int32_t, Texture*> invoker = METHOD_ADDRESS("System.Int32", "GetDataWidth");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC2F0E0
		int32_t GetDataHeight()
		{
			static NaMethodInvoker<int32_t, Texture*> invoker = METHOD_ADDRESS("System.Int32", "GetDataHeight");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
		// Addresss: 00007FF9BBC2F120
		int32_t get_width()
		{
			static NaMethodInvoker<int32_t, Texture*> invoker = METHOD_ADDRESS("System.Int32", "get_width");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
		// Addresss: 00007FF9BBC2F850
		void set_width(int32_t value)
		{
			static NaMethodInvoker<void, Texture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_width", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
		// Addresss: 00007FF9BBC2F0E0
		int32_t get_height()
		{
			static NaMethodInvoker<int32_t, Texture*> invoker = METHOD_ADDRESS("System.Int32", "get_height");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
		// Addresss: 00007FF9BBC2F810
		void set_height(int32_t value)
		{
			static NaMethodInvoker<void, Texture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_height", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
		// Addresss: 00007FF9BBC2F670
		bool get_isReadable()
		{
			static NaMethodInvoker<bool, Texture*> invoker = METHOD_ADDRESS("System.Boolean", "get_isReadable");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F750
		UnityEngine::TextureWrapMode get_wrapMode()
		{
			static NaMethodInvoker<UnityEngine::TextureWrapMode, Texture*> invoker = METHOD_ADDRESS("UnityEngine.TextureWrapMode", "get_wrapMode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F630
		UnityEngine::FilterMode get_filterMode()
		{
			static NaMethodInvoker<UnityEngine::FilterMode, Texture*> invoker = METHOD_ADDRESS("UnityEngine.FilterMode", "get_filterMode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F7D0
		void set_filterMode(UnityEngine::FilterMode value)
		{
			static NaMethodInvoker<void, Texture*, UnityEngine::FilterMode> invoker = METHOD_ADDRESS("System.Void", "set_filterMode", "UnityEngine.FilterMode");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F790
		void set_anisoLevel(int32_t value)
		{
			static NaMethodInvoker<void, Texture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_anisoLevel", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F700
		UnityEngine::Vector2 get_texelSize()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Texture*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_texelSize");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC2F1C0
		int32_t Internal_GetActiveTextureColorSpace()
		{
			static NaMethodInvoker<int32_t, Texture*> invoker = METHOD_ADDRESS("System.Int32", "Internal_GetActiveTextureColorSpace");
			return invoker(this);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F5F0
		UnityEngine::ColorSpace get_activeTextureColorSpace()
		{
			static NaMethodInvoker<UnityEngine::ColorSpace, Texture*> invoker = METHOD_ADDRESS("UnityEngine.ColorSpace", "get_activeTextureColorSpace");
			return invoker(this);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC2F1B0
		UnityEngine::TextureColorSpace GetTextureColorSpace(bool linear)
		{
			static NaMethodInvoker<UnityEngine::TextureColorSpace, Texture*, bool> invoker = METHOD_ADDRESS("UnityEngine.TextureColorSpace", "GetTextureColorSpace", "System.Boolean");
			return invoker(this, linear);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC2F3C0
		bool ValidateFormat(UnityEngine::TextureFormat format)
		{
			static NaMethodInvoker<bool, Texture*, UnityEngine::TextureFormat> invoker = METHOD_ADDRESS("System.Boolean", "ValidateFormat", "UnityEngine.TextureFormat");
			return invoker(this, format);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2F6B0
		void get_texelSize_Injected(UnityEngine::Vector2& ret)
		{
			static NaMethodInvoker<void, Texture*, UnityEngine::Vector2&> invoker = METHOD_ADDRESS("System.Void", "get_texelSize_Injected", "UnityEngine.Vector2&");
			invoker(this, ret);
		}
	};

	// Name: UnityEngine::RenderBuffer
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::RenderBuffer -> System::ValueType -> System::Object
	class RenderBuffer
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "RenderBuffer");

		int32_t m_RenderTextureInstanceID;
		intptr_t m_BufferPtr;
	};

	// Name: UnityEngine::RenderTexture
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::RenderTexture -> UnityEngine::Texture -> UnityEngine::Object -> System::Object
	class RenderTexture : public UnityEngine::Texture
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "RenderTexture");

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC282B0
		static UnityEngine::RenderTexture* GetActive()
		{
			static NaMethodInvoker<UnityEngine::RenderTexture*> invoker = METHOD_ADDRESS("UnityEngine.RenderTexture", "GetActive");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC29440
		static void SetActive(UnityEngine::RenderTexture* rt)
		{
			static NaMethodInvoker<void, UnityEngine::RenderTexture*> invoker = METHOD_ADDRESS("System.Void", "SetActive", "UnityEngine.RenderTexture");
			invoker(rt);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC282B0
		static UnityEngine::RenderTexture* get_active()
		{
			static NaMethodInvoker<UnityEngine::RenderTexture*> invoker = METHOD_ADDRESS("UnityEngine.RenderTexture", "get_active");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC29440
		static void set_active(UnityEngine::RenderTexture* value)
		{
			static NaMethodInvoker<void, UnityEngine::RenderTexture*> invoker = METHOD_ADDRESS("System.Void", "set_active", "UnityEngine.RenderTexture");
			invoker(value);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC29340
		static void Internal_Create(UnityEngine::RenderTexture* rt)
		{
			static NaMethodInvoker<void, UnityEngine::RenderTexture*> invoker = METHOD_ADDRESS("System.Void", "Internal_Create", "UnityEngine.RenderTexture");
			invoker(rt);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2AB20
		int32_t get_width()
		{
			static NaMethodInvoker<int32_t, RenderTexture*> invoker = METHOD_ADDRESS("System.Int32", "get_width");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2AD50
		void set_width(int32_t value)
		{
			static NaMethodInvoker<void, RenderTexture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_width", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2AAE0
		int32_t get_height()
		{
			static NaMethodInvoker<int32_t, RenderTexture*> invoker = METHOD_ADDRESS("System.Int32", "get_height");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2AC30
		void set_height(int32_t value)
		{
			static NaMethodInvoker<void, RenderTexture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_height", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2ABA0
		void set_autoGenerateMips(bool value)
		{
			static NaMethodInvoker<void, RenderTexture*, bool> invoker = METHOD_ADDRESS("System.Void", "set_autoGenerateMips", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2AB60
		void set_antiAliasing(int32_t value)
		{
			static NaMethodInvoker<void, RenderTexture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_antiAliasing", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2ACB0
		void set_useDynamicScale(bool value)
		{
			static NaMethodInvoker<void, RenderTexture*, bool> invoker = METHOD_ADDRESS("System.Void", "set_useDynamicScale", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC28330
		UnityEngine::RenderBuffer GetColorBuffer()
		{
			static NaMethodInvoker<UnityEngine::RenderBuffer, RenderTexture*> invoker = METHOD_ADDRESS("UnityEngine.RenderBuffer", "GetColorBuffer");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC28600
		UnityEngine::RenderBuffer GetDepthBuffer()
		{
			static NaMethodInvoker<UnityEngine::RenderBuffer, RenderTexture*> invoker = METHOD_ADDRESS("UnityEngine.RenderBuffer", "GetDepthBuffer");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC294C0
		void SetMipMapCount(int32_t count)
		{
			static NaMethodInvoker<void, RenderTexture*, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetMipMapCount", "System.Int32");
			invoker(this, count);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2A990
		UnityEngine::RenderBuffer get_colorBuffer()
		{
			static NaMethodInvoker<UnityEngine::RenderBuffer, RenderTexture*> invoker = METHOD_ADDRESS("UnityEngine.RenderBuffer", "get_colorBuffer");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2A9F0
		UnityEngine::RenderBuffer get_depthBuffer()
		{
			static NaMethodInvoker<UnityEngine::RenderBuffer, RenderTexture*> invoker = METHOD_ADDRESS("UnityEngine.RenderBuffer", "get_depthBuffer");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC28250
		void DiscardContents(bool discardColor, bool discardDepth)
		{
			static NaMethodInvoker<void, RenderTexture*, bool, bool> invoker = METHOD_ADDRESS("System.Void", "DiscardContents", "System.Boolean", "System.Boolean");
			invoker(this, discardColor, discardDepth);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC28210
		void DiscardContents()
		{
			static NaMethodInvoker<void, RenderTexture*> invoker = METHOD_ADDRESS("System.Void", "DiscardContents");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC281D0
		bool Create()
		{
			static NaMethodInvoker<bool, RenderTexture*> invoker = METHOD_ADDRESS("System.Boolean", "Create");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC29400
		void Release()
		{
			static NaMethodInvoker<void, RenderTexture*> invoker = METHOD_ADDRESS("System.Void", "Release");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC29380
		bool IsCreated()
		{
			static NaMethodInvoker<bool, RenderTexture*> invoker = METHOD_ADDRESS("System.Boolean", "IsCreated");
			return invoker(this);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC295A0
		void SetSRGBReadWrite(bool srgb)
		{
			static NaMethodInvoker<void, RenderTexture*, bool> invoker = METHOD_ADDRESS("System.Void", "SetSRGBReadWrite", "System.Boolean");
			invoker(this, srgb);
		}


		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC282E0
		void GetColorBuffer_Injected(UnityEngine::RenderBuffer& ret)
		{
			static NaMethodInvoker<void, RenderTexture*, UnityEngine::RenderBuffer&> invoker = METHOD_ADDRESS("System.Void", "GetColorBuffer_Injected", "UnityEngine.RenderBuffer&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC285B0
		void GetDepthBuffer_Injected(UnityEngine::RenderBuffer& ret)
		{
			static NaMethodInvoker<void, RenderTexture*, UnityEngine::RenderBuffer&> invoker = METHOD_ADDRESS("System.Void", "GetDepthBuffer_Injected", "UnityEngine.RenderBuffer&");
			invoker(this, ret);
		}
	};

	// Name: UnityEngine::Camera
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Camera -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Camera : public UnityEngine::Behaviour
	{
	public:
		// Name: MonoOrStereoscopicEye
		// Flags: Famandassem | Assembly | Public
		enum class MonoOrStereoscopicEye
		{
			Left = 0,
			Right = 1,
			Mono = 2,
		};
		// Name: CameraCallback
		// ClassType: Normal
		// Flags: Famandassem | Assembly | Public
		// Inheritance: CameraCallback -> System::MulticastDelegate -> System::Delegate -> System::Object
		class CameraCallback
		{
		public:
			NESTED_CLASS(Camera, "CameraCallback");

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9BA7A0B80
			void Invoke(UnityEngine::Camera* cam)
			{
				static NaMethodInvoker<void, CameraCallback*, UnityEngine::Camera*> invoker = METHOD_ADDRESS("System.Void", "Invoke", "UnityEngine.Camera");
				invoker(this, cam);
			}
		};

	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Camera");

		STATIC_FIELD(float, kMinAperture);
		STATIC_FIELD(float, kMaxAperture);
		STATIC_FIELD(int32_t, kMinBladeCount);
		STATIC_FIELD(int32_t, kMaxBladeCount);
		STATIC_FIELD(UnityEngine::Camera::CameraCallback*, onPreCull);
		STATIC_FIELD(UnityEngine::Camera::CameraCallback*, onPreRender);
		STATIC_FIELD(UnityEngine::Camera::CameraCallback*, onPostRender);


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC131E0
		static UnityEngine::Camera* get_main()
		{
			static NaMethodInvoker<UnityEngine::Camera*> invoker = METHOD_ADDRESS("UnityEngine.Camera", "get_main");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC130B0
		static UnityEngine::Camera* get_current()
		{
			static NaMethodInvoker<UnityEngine::Camera*> invoker = METHOD_ADDRESS("UnityEngine.Camera", "get_current");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC12710
		static int32_t GetAllCamerasCount()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "GetAllCamerasCount");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC12740
		static int32_t GetAllCamerasImpl(Array<UnityEngine::Camera*>* cam)
		{
			static NaMethodInvoker<int32_t, Array<UnityEngine::Camera*>*> invoker = METHOD_ADDRESS("System.Int32", "GetAllCamerasImpl", "UnityEngine.Camera[]");
			return invoker(cam);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC12710
		static int32_t get_allCamerasCount()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "get_allCamerasCount");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC12780
		static int32_t GetAllCameras(Array<UnityEngine::Camera*>* cameras)
		{
			static NaMethodInvoker<int32_t, Array<UnityEngine::Camera*>*> invoker = METHOD_ADDRESS("System.Int32", "GetAllCameras", "UnityEngine.Camera[]");
			return invoker(cameras);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC12D10
		static void SetupCurrent(UnityEngine::Camera* cur)
		{
			static NaMethodInvoker<void, UnityEngine::Camera*> invoker = METHOD_ADDRESS("System.Void", "SetupCurrent", "UnityEngine.Camera");
			invoker(cur);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC12650
		static void FireOnPreCull(UnityEngine::Camera* cam)
		{
			static NaMethodInvoker<void, UnityEngine::Camera*> invoker = METHOD_ADDRESS("System.Void", "FireOnPreCull", "UnityEngine.Camera");
			invoker(cam);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC126B0
		static void FireOnPreRender(UnityEngine::Camera* cam)
		{
			static NaMethodInvoker<void, UnityEngine::Camera*> invoker = METHOD_ADDRESS("System.Void", "FireOnPreRender", "UnityEngine.Camera");
			invoker(cam);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC125F0
		static void FireOnPostRender(UnityEngine::Camera* cam)
		{
			static NaMethodInvoker<void, UnityEngine::Camera*> invoker = METHOD_ADDRESS("System.Void", "FireOnPostRender", "UnityEngine.Camera");
			invoker(cam);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13210
		float get_nearClipPlane()
		{
			static NaMethodInvoker<float, Camera*> invoker = METHOD_ADDRESS("System.Single", "get_nearClipPlane");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13730
		void set_nearClipPlane(float value)
		{
			static NaMethodInvoker<void, Camera*, float> invoker = METHOD_ADDRESS("System.Void", "set_nearClipPlane", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13160
		float get_farClipPlane()
		{
			static NaMethodInvoker<float, Camera*> invoker = METHOD_ADDRESS("System.Single", "get_farClipPlane");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13690
		void set_farClipPlane(float value)
		{
			static NaMethodInvoker<void, Camera*, float> invoker = METHOD_ADDRESS("System.Void", "set_farClipPlane", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC131A0
		float get_fieldOfView()
		{
			static NaMethodInvoker<float, Camera*> invoker = METHOD_ADDRESS("System.Single", "get_fieldOfView");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC136E0
		void set_fieldOfView(float value)
		{
			static NaMethodInvoker<void, Camera*, float> invoker = METHOD_ADDRESS("System.Void", "set_fieldOfView", "System.Single");
			invoker(this, value);
		}


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13440
		void set_allowHDR(bool value)
		{
			static NaMethodInvoker<void, Camera*, bool> invoker = METHOD_ADDRESS("System.Void", "set_allowHDR", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13490
		void set_allowMSAA(bool value)
		{
			static NaMethodInvoker<void, Camera*, bool> invoker = METHOD_ADDRESS("System.Void", "set_allowMSAA", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC133F0
		void set_allowDynamicResolution(bool value)
		{
			static NaMethodInvoker<void, Camera*, bool> invoker = METHOD_ADDRESS("System.Void", "set_allowDynamicResolution", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13250
		float get_orthographicSize()
		{
			static NaMethodInvoker<float, Camera*> invoker = METHOD_ADDRESS("System.Single", "get_orthographicSize");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13780
		void set_orthographicSize(float value)
		{
			static NaMethodInvoker<void, Camera*, float> invoker = METHOD_ADDRESS("System.Void", "set_orthographicSize", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC137D0
		void set_orthographic(bool value)
		{
			static NaMethodInvoker<void, Camera*, bool> invoker = METHOD_ADDRESS("System.Void", "set_orthographic", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC130E0
		float get_depth()
		{
			static NaMethodInvoker<float, Camera*> invoker = METHOD_ADDRESS("System.Single", "get_depth");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13640
		void set_depth(float value)
		{
			static NaMethodInvoker<void, Camera*, float> invoker = METHOD_ADDRESS("System.Void", "set_depth", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13070
		int32_t get_cullingMask()
		{
			static NaMethodInvoker<int32_t, Camera*> invoker = METHOD_ADDRESS("System.Int32", "get_cullingMask");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13600
		void set_cullingMask(int32_t value)
		{
			static NaMethodInvoker<void, Camera*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_cullingMask", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13120
		int32_t get_eventMask()
		{
			static NaMethodInvoker<int32_t, Camera*> invoker = METHOD_ADDRESS("System.Int32", "get_eventMask");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13580
		void set_cameraType(UnityEngine::CameraType value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::CameraType> invoker = METHOD_ADDRESS("System.Void", "set_cameraType", "UnityEngine.CameraType");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13950
		void set_useOcclusionCulling(bool value)
		{
			static NaMethodInvoker<void, Camera*, bool> invoker = METHOD_ADDRESS("System.Void", "set_useOcclusionCulling", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13530
		void set_backgroundColor(UnityEngine::Color value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "set_backgroundColor", "UnityEngine.Color");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13030
		UnityEngine::CameraClearFlags get_clearFlags()
		{
			static NaMethodInvoker<UnityEngine::CameraClearFlags, Camera*> invoker = METHOD_ADDRESS("UnityEngine.CameraClearFlags", "get_clearFlags");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC135C0
		void set_clearFlags(UnityEngine::CameraClearFlags value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::CameraClearFlags> invoker = METHOD_ADDRESS("System.Void", "set_clearFlags", "UnityEngine.CameraClearFlags");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13870
		void set_rect(UnityEngine::Rect value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Rect> invoker = METHOD_ADDRESS("System.Void", "set_rect", "UnityEngine.Rect");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC132E0
		UnityEngine::Rect get_pixelRect()
		{
			static NaMethodInvoker<UnityEngine::Rect, Camera*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "get_pixelRect");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC133B0
		UnityEngine::RenderTexture* get_targetTexture()
		{
			static NaMethodInvoker<UnityEngine::RenderTexture*, Camera*> invoker = METHOD_ADDRESS("UnityEngine.RenderTexture", "get_targetTexture");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13900
		void set_targetTexture(UnityEngine::RenderTexture* value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::RenderTexture*> invoker = METHOD_ADDRESS("System.Void", "set_targetTexture", "UnityEngine.RenderTexture");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13370
		int32_t get_targetDisplay()
		{
			static NaMethodInvoker<int32_t, Camera*> invoker = METHOD_ADDRESS("System.Int32", "get_targetDisplay");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12E50
		UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position, UnityEngine::Camera::MonoOrStereoscopicEye eye)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3, UnityEngine::Camera::MonoOrStereoscopicEye> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "WorldToScreenPoint", "UnityEngine.Vector3", "UnityEngine.Camera.MonoOrStereoscopicEye");
			return invoker(this, position, eye);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12FC0
		UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position, UnityEngine::Camera::MonoOrStereoscopicEye eye)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3, UnityEngine::Camera::MonoOrStereoscopicEye> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "WorldToViewportPoint", "UnityEngine.Vector3", "UnityEngine.Camera.MonoOrStereoscopicEye");
			return invoker(this, position, eye);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12C10
		UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine::Vector3 position, UnityEngine::Camera::MonoOrStereoscopicEye eye)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3, UnityEngine::Camera::MonoOrStereoscopicEye> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "ScreenToWorldPoint", "UnityEngine.Vector3", "UnityEngine.Camera.MonoOrStereoscopicEye");
			return invoker(this, position, eye);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12DC0
		UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "WorldToScreenPoint", "UnityEngine.Vector3");
			return invoker(this, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12F30
		UnityEngine::Vector3 WorldToViewportPoint(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "WorldToViewportPoint", "UnityEngine.Vector3");
			return invoker(this, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12C80
		UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "ScreenToWorldPoint", "UnityEngine.Vector3");
			return invoker(this, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12B40
		UnityEngine::Vector3 ScreenToViewportPoint(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Camera*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "ScreenToViewportPoint", "UnityEngine.Vector3");
			return invoker(this, position);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC12A70
		UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector2 pos, UnityEngine::Camera::MonoOrStereoscopicEye eye)
		{
			static NaMethodInvoker<UnityEngine::Ray, Camera*, UnityEngine::Vector2, UnityEngine::Camera::MonoOrStereoscopicEye> invoker = METHOD_ADDRESS("UnityEngine.Ray", "ScreenPointToRay", "UnityEngine.Vector2", "UnityEngine.Camera.MonoOrStereoscopicEye");
			return invoker(this, pos, eye);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC129C0
		UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos, UnityEngine::Camera::MonoOrStereoscopicEye eye)
		{
			static NaMethodInvoker<UnityEngine::Ray, Camera*, UnityEngine::Vector3, UnityEngine::Camera::MonoOrStereoscopicEye> invoker = METHOD_ADDRESS("UnityEngine.Ray", "ScreenPointToRay", "UnityEngine.Vector3", "UnityEngine.Camera.MonoOrStereoscopicEye");
			return invoker(this, pos, eye);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12910
		UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos)
		{
			static NaMethodInvoker<UnityEngine::Ray, Camera*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Ray", "ScreenPointToRay", "UnityEngine.Vector3");
			return invoker(this, pos);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13330
		bool get_stereoEnabled()
		{
			static NaMethodInvoker<bool, Camera*> invoker = METHOD_ADDRESS("System.Boolean", "get_stereoEnabled");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9BBC12860
		void Render()
		{
			static NaMethodInvoker<void, Camera*> invoker = METHOD_ADDRESS("System.Void", "Render");
			invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC134E0
		void set_backgroundColor_Injected(UnityEngine::Color& value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Color&> invoker = METHOD_ADDRESS("System.Void", "set_backgroundColor_Injected", "UnityEngine.Color&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13820
		void set_rect_Injected(UnityEngine::Rect& value)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Rect&> invoker = METHOD_ADDRESS("System.Void", "set_rect_Injected", "UnityEngine.Rect&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9BBC13290
		void get_pixelRect_Injected(UnityEngine::Rect& ret)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Rect&> invoker = METHOD_ADDRESS("System.Void", "get_pixelRect_Injected", "UnityEngine.Rect&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC12D50
		void WorldToScreenPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Vector3&, UnityEngine::Camera::MonoOrStereoscopicEye, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "WorldToScreenPoint_Injected", "UnityEngine.Vector3&", "UnityEngine.Camera.MonoOrStereoscopicEye", "UnityEngine.Vector3&");
			invoker(this, position, eye, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC12EC0
		void WorldToViewportPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Vector3&, UnityEngine::Camera::MonoOrStereoscopicEye, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "WorldToViewportPoint_Injected", "UnityEngine.Vector3&", "UnityEngine.Camera.MonoOrStereoscopicEye", "UnityEngine.Vector3&");
			invoker(this, position, eye, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC12BA0
		void ScreenToWorldPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Vector3&, UnityEngine::Camera::MonoOrStereoscopicEye, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "ScreenToWorldPoint_Injected", "UnityEngine.Vector3&", "UnityEngine.Camera.MonoOrStereoscopicEye", "UnityEngine.Vector3&");
			invoker(this, position, eye, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC12AE0
		void ScreenToViewportPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "ScreenToViewportPoint_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, position, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9BBC128A0
		void ScreenPointToRay_Injected(UnityEngine::Vector2& pos, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Ray& ret)
		{
			static NaMethodInvoker<void, Camera*, UnityEngine::Vector2&, UnityEngine::Camera::MonoOrStereoscopicEye, UnityEngine::Ray&> invoker = METHOD_ADDRESS("System.Void", "ScreenPointToRay_Injected", "UnityEngine.Vector2&", "UnityEngine.Camera.MonoOrStereoscopicEye", "UnityEngine.Ray&");
			invoker(this, pos, eye, ret);
		}
	};

	// Name: UnityEngine::Screen
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Screen -> System::Object
	class Screen
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Screen");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2B8A0
		static int32_t get_width()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "get_width");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2B870
		static int32_t get_height()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "get_height");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2B7E0
		static float get_dpi()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_dpi");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2B840
		static bool get_fullScreen()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_fullScreen");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2B810
		static UnityEngine::FullScreenMode get_fullScreenMode()
		{
			static NaMethodInvoker<UnityEngine::FullScreenMode> invoker = METHOD_ADDRESS("UnityEngine.FullScreenMode", "get_fullScreenMode");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC2B8D0
		static void set_fullScreenMode(UnityEngine::FullScreenMode value)
		{
			static NaMethodInvoker<void, UnityEngine::FullScreenMode> invoker = METHOD_ADDRESS("System.Void", "set_fullScreenMode", "UnityEngine.FullScreenMode");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC2B6E0
		static void SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate)
		{
			static NaMethodInvoker<void, int32_t, int32_t, bool, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetResolution", "System.Int32", "System.Int32", "System.Boolean", "System.Int32");
			invoker(width, height, fullscreen, preferredRefreshRate);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC2B660
		static void SetResolution(int32_t width, int32_t height, bool fullscreen)
		{
			static NaMethodInvoker<void, int32_t, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "SetResolution", "System.Int32", "System.Int32", "System.Boolean");
			invoker(width, height, fullscreen);
		}
	};

	// Name: UnityEngine::Time
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Time -> System::Object
	class Time
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Time");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41F70
		static float get_time()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_time");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41F40
		static float get_timeSinceLevelLoad()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_timeSinceLevelLoad");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41E20
		static float get_deltaTime()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_deltaTime");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41FD0
		static float get_unscaledTime()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_unscaledTime");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41E80
		static float get_fixedUnscaledTime()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_fixedUnscaledTime");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41FA0
		static float get_unscaledDeltaTime()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_unscaledDeltaTime");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41E50
		static float get_fixedDeltaTime()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_fixedDeltaTime");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41F10
		static float get_timeScale()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_timeScale");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC42000
		static void set_timeScale(float value)
		{
			static NaMethodInvoker<void, float> invoker = METHOD_ADDRESS("System.Void", "set_timeScale", "System.Single");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41EB0
		static int32_t get_frameCount()
		{
			static NaMethodInvoker<int32_t> invoker = METHOD_ADDRESS("System.Int32", "get_frameCount");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC41EE0
		static float get_realtimeSinceStartup()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_realtimeSinceStartup");
			return invoker();
		}
	};

	// Name: UnityEngine::Random
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem | Notserialized
	// Inheritance: UnityEngine::Random -> System::Object
	class Random
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Random");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3CCA0
		static void InitState(int32_t seed)
		{
			static NaMethodInvoker<void, int32_t> invoker = METHOD_ADDRESS("System.Void", "InitState", "System.Int32");
			invoker(seed);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3CD20
		static float Range(float minInclusive, float maxInclusive)
		{
			static NaMethodInvoker<float, float, float> invoker = METHOD_ADDRESS("System.Single", "Range", "System.Single", "System.Single");
			return invoker(minInclusive, maxInclusive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC3CCE0
		static int32_t Range(int32_t minInclusive, int32_t maxExclusive)
		{
			static NaMethodInvoker<int32_t, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Int32", "Range", "System.Int32", "System.Int32");
			return invoker(minInclusive, maxExclusive);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3CCE0
		static int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive)
		{
			static NaMethodInvoker<int32_t, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Int32", "RandomRangeInt", "System.Int32", "System.Int32");
			return invoker(minInclusive, maxExclusive);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CEB0
		static float get_value()
		{
			static NaMethodInvoker<float> invoker = METHOD_ADDRESS("System.Single", "get_value");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CDF0
		static UnityEngine::Vector3 get_insideUnitSphere()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_insideUnitSphere");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC3CC60
		static void GetRandomUnitCircle(UnityEngine::Vector2& output)
		{
			static NaMethodInvoker<void, UnityEngine::Vector2&> invoker = METHOD_ADDRESS("System.Void", "GetRandomUnitCircle", "UnityEngine.Vector2&");
			invoker(output);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CD70
		static UnityEngine::Vector2 get_insideUnitCircle()
		{
			static NaMethodInvoker<UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_insideUnitCircle");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CE70
		static UnityEngine::Vector3 get_onUnitSphere()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_onUnitSphere");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CDB0
		static void get_insideUnitSphere_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_insideUnitSphere_Injected", "UnityEngine.Vector3&");
			invoker(ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC3CE30
		static void get_onUnitSphere_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_onUnitSphere_Injected", "UnityEngine.Vector3&");
			invoker(ret);
		}
	};

	// Name: UnityEngine::Texture2D
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Texture2D -> UnityEngine::Texture -> UnityEngine::Object -> System::Object
	class Texture2D : public UnityEngine::Texture
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Texture2D");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FFA430E74A0
		static UnityEngine::Texture2D* get_whiteTexture()
		{
			static NaMethodInvoker<UnityEngine::Texture2D*> invoker = METHOD_ADDRESS("UnityEngine.Texture2D", "get_whiteTexture");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FFA430E67C0
		static bool Internal_CreateImpl(UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex)
		{
			static NaMethodInvoker<bool, UnityEngine::Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, intptr_t> invoker = METHOD_ADDRESS("System.Boolean", "Internal_CreateImpl", "UnityEngine.Texture2D", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.IntPtr");
			return invoker(mono, w, h, mipCount, format, flags, nativeTex);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FFA430E6820
		static void Internal_Create(UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex)
		{
			static NaMethodInvoker<void, UnityEngine::Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Experimental::Rendering::GraphicsFormat, UnityEngine::Experimental::Rendering::TextureCreationFlags, intptr_t> invoker = METHOD_ADDRESS("System.Void", "Internal_Create", "UnityEngine.Texture2D", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.IntPtr");
			invoker(mono, w, h, mipCount, format, flags, nativeTex);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA430E7420
		UnityEngine::TextureFormat get_format()
		{
			static NaMethodInvoker<UnityEngine::TextureFormat, Texture2D*> invoker = METHOD_ADDRESS("UnityEngine.TextureFormat", "get_format");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Specialname
		// Addresss: 00007FFA430E7460
		bool get_isReadable()
		{
			static NaMethodInvoker<bool, Texture2D*> invoker = METHOD_ADDRESS("System.Boolean", "get_isReadable");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6420
		void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
		{
			static NaMethodInvoker<void, Texture2D*, bool, bool> invoker = METHOD_ADDRESS("System.Void", "ApplyImpl", "System.Boolean", "System.Boolean");
			invoker(this, updateMipmaps, makeNoLongerReadable);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6B70
		bool ResizeImpl(int32_t width, int32_t height)
		{
			static NaMethodInvoker<bool, Texture2D*, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "ResizeImpl", "System.Int32", "System.Int32");
			return invoker(this, width, height);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6E00
		void SetPixelImpl(int32_t image, int32_t x, int32_t y, UnityEngine::Color color)
		{
			static NaMethodInvoker<void, Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "SetPixelImpl", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color");
			invoker(this, image, x, y, color);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6620
		UnityEngine::Color GetPixelBilinearImpl(int32_t image, float u, float v)
		{
			static NaMethodInvoker<UnityEngine::Color, Texture2D*, int32_t, float, float> invoker = METHOD_ADDRESS("UnityEngine.Color", "GetPixelBilinearImpl", "System.Int32", "System.Single", "System.Single");
			return invoker(this, image, u, v);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6BC0
		bool ResizeWithFormatImpl(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool hasMipMap)
		{
			static NaMethodInvoker<bool, Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, bool> invoker = METHOD_ADDRESS("System.Boolean", "ResizeWithFormatImpl", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean");
			return invoker(this, width, height, format, hasMipMap);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6960
		void ReadPixelsImpl(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps)
		{
			static NaMethodInvoker<void, Texture2D*, UnityEngine::Rect, int32_t, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "ReadPixelsImpl", "UnityEngine.Rect", "System.Int32", "System.Int32", "System.Boolean");
			invoker(this, source, destX, destY, recalculateMipMaps);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6F40
		void SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, Array<UnityEngine::Color>* pixel, int32_t miplevel, int32_t frame)
		{
			static NaMethodInvoker<void, Texture2D*, int32_t, int32_t, int32_t, int32_t, Array<UnityEngine::Color>*, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetPixelsImpl", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color[]", "System.Int32", "System.Int32");
			invoker(this, x, y, w, h, pixel, miplevel, frame);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6780
		Array<uint8_t>* GetRawTextureData()
		{
			static NaMethodInvoker<Array<uint8_t>*, Texture2D*> invoker = METHOD_ADDRESS("System.Byte[]", "GetRawTextureData");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6E70
		void SetPixel(int32_t x, int32_t y, UnityEngine::Color color)
		{
			static NaMethodInvoker<void, Texture2D*, int32_t, int32_t, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "SetPixel", "System.Int32", "System.Int32", "UnityEngine.Color");
			invoker(this, x, y, color);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6FA0
		void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, Array<UnityEngine::Color>* colors, int32_t miplevel)
		{
			static NaMethodInvoker<void, Texture2D*, int32_t, int32_t, int32_t, int32_t, Array<UnityEngine::Color>*, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetPixels", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color[]", "System.Int32");
			invoker(this, x, y, blockWidth, blockHeight, colors, miplevel);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E7060
		void SetPixels(Array<UnityEngine::Color>* colors)
		{
			static NaMethodInvoker<void, Texture2D*, Array<UnityEngine::Color>*> invoker = METHOD_ADDRESS("System.Void", "SetPixels", "UnityEngine.Color[]");
			invoker(this, colors);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E66A0
		UnityEngine::Color GetPixelBilinear(float u, float v)
		{
			static NaMethodInvoker<UnityEngine::Color, Texture2D*, float, float> invoker = METHOD_ADDRESS("UnityEngine.Color", "GetPixelBilinear", "System.Single", "System.Single");
			return invoker(this, u, v);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6510
		void Apply(bool updateMipmaps, bool makeNoLongerReadable)
		{
			static NaMethodInvoker<void, Texture2D*, bool, bool> invoker = METHOD_ADDRESS("System.Void", "Apply", "System.Boolean", "System.Boolean");
			invoker(this, updateMipmaps, makeNoLongerReadable);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6480
		void Apply()
		{
			static NaMethodInvoker<void, Texture2D*> invoker = METHOD_ADDRESS("System.Void", "Apply");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6CF0
		bool Resize(int32_t width, int32_t height)
		{
			static NaMethodInvoker<bool, Texture2D*, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Resize", "System.Int32", "System.Int32");
			return invoker(this, width, height);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6C30
		bool Resize(int32_t width, int32_t height, UnityEngine::TextureFormat format, bool hasMipMap)
		{
			static NaMethodInvoker<bool, Texture2D*, int32_t, int32_t, UnityEngine::TextureFormat, bool> invoker = METHOD_ADDRESS("System.Boolean", "Resize", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean");
			return invoker(this, width, height, format, hasMipMap);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E6AA0
		void ReadPixels(UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps)
		{
			static NaMethodInvoker<void, Texture2D*, UnityEngine::Rect, int32_t, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "ReadPixels", "UnityEngine.Rect", "System.Int32", "System.Int32", "System.Boolean");
			invoker(this, source, destX, destY, recalculateMipMaps);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA430E69D0
		void ReadPixels(UnityEngine::Rect source, int32_t destX, int32_t destY)
		{
			static NaMethodInvoker<void, Texture2D*, UnityEngine::Rect, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Void", "ReadPixels", "UnityEngine.Rect", "System.Int32", "System.Int32");
			invoker(this, source, destX, destY);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E6DA0
		void SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine::Color& color)
		{
			static NaMethodInvoker<void, Texture2D*, int32_t, int32_t, int32_t, UnityEngine::Color&> invoker = METHOD_ADDRESS("System.Void", "SetPixelImpl_Injected", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color&");
			invoker(this, image, x, y, color);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E65C0
		void GetPixelBilinearImpl_Injected(int32_t image, float u, float v, UnityEngine::Color& ret)
		{
			static NaMethodInvoker<void, Texture2D*, int32_t, float, float, UnityEngine::Color&> invoker = METHOD_ADDRESS("System.Void", "GetPixelBilinearImpl_Injected", "System.Int32", "System.Single", "System.Single", "UnityEngine.Color&");
			invoker(this, image, u, v, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA430E68F0
		void ReadPixelsImpl_Injected(UnityEngine::Rect& source, int32_t destX, int32_t destY, bool recalculateMipMaps)
		{
			static NaMethodInvoker<void, Texture2D*, UnityEngine::Rect&, int32_t, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "ReadPixelsImpl_Injected", "UnityEngine.Rect&", "System.Int32", "System.Int32", "System.Boolean");
			invoker(this, source, destX, destY, recalculateMipMaps);
		}
	};

	// Name: UnityEngine::Cursor
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Cursor -> System::Object
	class Cursor
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Cursor");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9BBC16380
		static void SetCursor(UnityEngine::Texture2D* texture, UnityEngine::Vector2 hotspot, UnityEngine::CursorMode cursorMode)
		{
			static NaMethodInvoker<void, UnityEngine::Texture2D*, UnityEngine::Vector2, UnityEngine::CursorMode> invoker = METHOD_ADDRESS("System.Void", "SetCursor", "UnityEngine.Texture2D", "UnityEngine.Vector2", "UnityEngine.CursorMode");
			invoker(texture, hotspot, cursorMode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC16440
		static void set_visible(bool value)
		{
			static NaMethodInvoker<void, bool> invoker = METHOD_ADDRESS("System.Void", "set_visible", "System.Boolean");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC163D0
		static UnityEngine::CursorLockMode get_lockState()
		{
			static NaMethodInvoker<UnityEngine::CursorLockMode> invoker = METHOD_ADDRESS("UnityEngine.CursorLockMode", "get_lockState");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9BBC16400
		static void set_lockState(UnityEngine::CursorLockMode value)
		{
			static NaMethodInvoker<void, UnityEngine::CursorLockMode> invoker = METHOD_ADDRESS("System.Void", "set_lockState", "UnityEngine.CursorLockMode");
			invoker(value);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9BBC16320
		static void SetCursor_Injected(UnityEngine::Texture2D* texture, UnityEngine::Vector2& hotspot, UnityEngine::CursorMode cursorMode)
		{
			static NaMethodInvoker<void, UnityEngine::Texture2D*, UnityEngine::Vector2&, UnityEngine::CursorMode> invoker = METHOD_ADDRESS("System.Void", "SetCursor_Injected", "UnityEngine.Texture2D", "UnityEngine.Vector2&", "UnityEngine.CursorMode");
			invoker(texture, hotspot, cursorMode);
		}
	};

	// Name: UnityEngine::TrackedReference
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::TrackedReference -> System::Object
	class TrackedReference
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "TrackedReference");

		FIELD(intptr_t, m_Ptr);

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC42BD0
		bool Equals(void* o)
		{
			static NaMethodInvoker<bool, TrackedReference*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, o);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9BBC42CA0
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, TrackedReference*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}
	};

	// Name: UnityEngine::Matrix4x4
	// ClassType: ValueType | Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Matrix4x4 -> System::ValueType -> System::Object
	class Matrix4x4
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Matrix4x4");

		STATIC_FIELD(UnityEngine::Matrix4x4, zeroMatrix);
		STATIC_FIELD(UnityEngine::Matrix4x4, identityMatrix);

		float m00;
		float m10;
		float m20;
		float m30;
		float m01;
		float m11;
		float m21;
		float m31;
		float m02;
		float m12;
		float m22;
		float m32;
		float m03;
		float m13;
		float m23;
		float m33;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3100AB0
		static UnityEngine::Matrix4x4 TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s)
		{
			static NaMethodInvoker<UnityEngine::Matrix4x4, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Matrix4x4", "TRS", "UnityEngine.Vector3", "UnityEngine.Quaternion", "UnityEngine.Vector3");
			return invoker(pos, q, s);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3100600
		static bool Inverse3DAffine(UnityEngine::Matrix4x4 input, UnityEngine::Matrix4x4& result)
		{
			static NaMethodInvoker<bool, UnityEngine::Matrix4x4, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Boolean", "Inverse3DAffine", "UnityEngine.Matrix4x4", "UnityEngine.Matrix4x4&");
			return invoker(input, result);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B31006A0
		static UnityEngine::Matrix4x4 Inverse(UnityEngine::Matrix4x4 m)
		{
			static NaMethodInvoker<UnityEngine::Matrix4x4, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("UnityEngine.Matrix4x4", "Inverse", "UnityEngine.Matrix4x4");
			return invoker(m);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3100890
		static UnityEngine::Matrix4x4 Rotate(UnityEngine::Quaternion q)
		{
			static NaMethodInvoker<UnityEngine::Matrix4x4, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("UnityEngine.Matrix4x4", "Rotate", "UnityEngine.Quaternion");
			return invoker(q);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B31013C0
		static UnityEngine::Matrix4x4 get_identity()
		{
			static NaMethodInvoker<UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("UnityEngine.Matrix4x4", "get_identity");
			return invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B3101230
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B3100420
		static void GetLossyScale_Injected(UnityEngine::Matrix4x4& _unity_self, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "GetLossyScale_Injected", "UnityEngine.Matrix4x4&", "UnityEngine.Vector3&");
			invoker(_unity_self, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B3100A40
		static void TRS_Injected(UnityEngine::Vector3& pos, UnityEngine::Quaternion& q, UnityEngine::Vector3& s, UnityEngine::Matrix4x4& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&, UnityEngine::Quaternion&, UnityEngine::Vector3&, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Void", "TRS_Injected", "UnityEngine.Vector3&", "UnityEngine.Quaternion&", "UnityEngine.Vector3&", "UnityEngine.Matrix4x4&");
			invoker(pos, q, s, ret);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B31005B0
		static bool Inverse3DAffine_Injected(UnityEngine::Matrix4x4& input, UnityEngine::Matrix4x4& result)
		{
			static NaMethodInvoker<bool, UnityEngine::Matrix4x4&, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Boolean", "Inverse3DAffine_Injected", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&");
			return invoker(input, result);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B3100650
		static void Inverse_Injected(UnityEngine::Matrix4x4& m, UnityEngine::Matrix4x4& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4&, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Void", "Inverse_Injected", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&");
			invoker(m, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3100470
		UnityEngine::Vector3 GetLossyScale()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Matrix4x4*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "GetLossyScale");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31014D0
		UnityEngine::Vector3 get_lossyScale()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Matrix4x4*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_lossyScale");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3101420
		UnityEngine::Matrix4x4 get_inverse()
		{
			static NaMethodInvoker<UnityEngine::Matrix4x4, Matrix4x4*> invoker = METHOD_ADDRESS("UnityEngine.Matrix4x4", "get_inverse");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9B3100270
		int32_t GetHashCode()
		{
			static NaMethodInvoker<int32_t, Matrix4x4*> invoker = METHOD_ADDRESS("System.Int32", "GetHashCode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9B30FFFE0
		bool Equals(void* other)
		{
			static NaMethodInvoker<bool, Matrix4x4*, void*> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "System.Object");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
		// Addresss: 00007FF9B3100090
		bool Equals(UnityEngine::Matrix4x4 other)
		{
			static NaMethodInvoker<bool, Matrix4x4*, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("System.Boolean", "Equals", "UnityEngine.Matrix4x4");
			return invoker(this, other);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31007A0
		UnityEngine::Vector3 MultiplyPoint(UnityEngine::Vector3 point)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Matrix4x4*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "MultiplyPoint", "UnityEngine.Vector3");
			return invoker(this, point);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3100700
		UnityEngine::Vector3 MultiplyPoint3x4(UnityEngine::Vector3 point)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Matrix4x4*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "MultiplyPoint3x4", "UnityEngine.Vector3");
			return invoker(this, point);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
		// Addresss: 00007FF9B3100B30
		std::string ToString()
		{
			static NaMethodInvoker<void*, Matrix4x4*> invoker = METHOD_ADDRESS("System.String", "ToString");
			return VmGeneralType::String(invoker(this));
		}
	};

	// Name: UnityEngine::Shader
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Shader -> UnityEngine::Object -> System::Object
	class Shader : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Shader");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B310B910
		static UnityEngine::Shader* Find(const std::string& name)
		{
			static NaMethodInvoker<UnityEngine::Shader*, void*> invoker = METHOD_ADDRESS("UnityEngine.Shader", "Find", "System.String");
			return invoker(VmGeneralType::String(name));
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B310B9C0
		static int32_t TagToID(const std::string& name)
		{
			static NaMethodInvoker<int32_t, void*> invoker = METHOD_ADDRESS("System.Int32", "TagToID", "System.String");
			return invoker(VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B310B980
		static int32_t PropertyToID(const std::string& name)
		{
			static NaMethodInvoker<int32_t, void*> invoker = METHOD_ADDRESS("System.Int32", "PropertyToID", "System.String");
			return invoker(VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B310BA50
		bool get_isSupported()
		{
			static NaMethodInvoker<bool, Shader*> invoker = METHOD_ADDRESS("System.Boolean", "get_isSupported");
			return invoker(this);
		}
	};

	// Name: UnityEngine::Material
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Material -> UnityEngine::Object -> System::Object
	class Material : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Material");

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FE9F0
		static void CreateWithShader(UnityEngine::Material* self, UnityEngine::Shader* shader)
		{
			static NaMethodInvoker<void, UnityEngine::Material*, UnityEngine::Shader*> invoker = METHOD_ADDRESS("System.Void", "CreateWithShader", "UnityEngine.Material", "UnityEngine.Shader");
			invoker(self, shader);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FE9A0
		static void CreateWithMaterial(UnityEngine::Material* self, UnityEngine::Material* source)
		{
			static NaMethodInvoker<void, UnityEngine::Material*, UnityEngine::Material*> invoker = METHOD_ADDRESS("System.Void", "CreateWithMaterial", "UnityEngine.Material", "UnityEngine.Material");
			invoker(self, source);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FEA40
		static void CreateWithString(UnityEngine::Material* self)
		{
			static NaMethodInvoker<void, UnityEngine::Material*> invoker = METHOD_ADDRESS("System.Void", "CreateWithString", "UnityEngine.Material");
			invoker(self);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFBA0
		UnityEngine::Shader* get_shader()
		{
			static NaMethodInvoker<UnityEngine::Shader*, Material*> invoker = METHOD_ADDRESS("UnityEngine.Shader", "get_shader");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFEA0
		void set_shader(UnityEngine::Shader* value)
		{
			static NaMethodInvoker<void, Material*, UnityEngine::Shader*> invoker = METHOD_ADDRESS("System.Void", "set_shader", "UnityEngine.Shader");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFBE0
		void set_color(UnityEngine::Color value)
		{
			static NaMethodInvoker<void, Material*, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "set_color", "UnityEngine.Color");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFA60
		UnityEngine::Texture* get_mainTexture()
		{
			static NaMethodInvoker<UnityEngine::Texture*, Material*> invoker = METHOD_ADDRESS("UnityEngine.Texture", "get_mainTexture");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFD90
		void set_mainTexture(UnityEngine::Texture* value)
		{
			static NaMethodInvoker<void, Material*, UnityEngine::Texture*> invoker = METHOD_ADDRESS("System.Void", "set_mainTexture", "UnityEngine.Texture");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFCB0
		void set_mainTextureOffset(UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Material*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "set_mainTextureOffset", "UnityEngine.Vector2");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF030
		bool HasProperty(int32_t nameID)
		{
			static NaMethodInvoker<bool, Material*, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "HasProperty", "System.Int32");
			return invoker(this, nameID);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF070
		bool HasProperty(const std::string& name)
		{
			static NaMethodInvoker<bool, Material*, void*> invoker = METHOD_ADDRESS("System.Boolean", "HasProperty", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFE60
		void set_renderQueue(int32_t value)
		{
			static NaMethodInvoker<void, Material*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_renderQueue", "System.Int32");
			invoker(this, value);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFB60
		int32_t get_rawRenderQueue()
		{
			static NaMethodInvoker<int32_t, Material*> invoker = METHOD_ADDRESS("System.Int32", "get_rawRenderQueue");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEAD0
		void EnableKeyword(const std::string& keyword)
		{
			static NaMethodInvoker<void, Material*, void*> invoker = METHOD_ADDRESS("System.Void", "EnableKeyword", "System.String");
			invoker(this, VmGeneralType::String(keyword));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEA80
		void DisableKeyword(const std::string& keyword)
		{
			static NaMethodInvoker<void, Material*, void*> invoker = METHOD_ADDRESS("System.Void", "DisableKeyword", "System.String");
			invoker(this, VmGeneralType::String(keyword));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF0E0
		bool IsKeywordEnabled(const std::string& keyword)
		{
			static NaMethodInvoker<bool, Material*, void*> invoker = METHOD_ADDRESS("System.Boolean", "IsKeywordEnabled", "System.String");
			return invoker(this, VmGeneralType::String(keyword));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30FFB20
		int32_t get_passCount()
		{
			static NaMethodInvoker<int32_t, Material*> invoker = METHOD_ADDRESS("System.Int32", "get_passCount");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FEE10
		std::string GetTagImpl(const std::string& tag, bool currentSubShaderOnly, const std::string& defaultValue)
		{
			static NaMethodInvoker<void*, Material*, void*, bool, void*> invoker = METHOD_ADDRESS("System.String", "GetTagImpl", "System.String", "System.Boolean", "System.String");
			return VmGeneralType::String(invoker(this, VmGeneralType::String(tag), currentSubShaderOnly, VmGeneralType::String(defaultValue)));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEE80
		std::string GetTag(const std::string& tag, bool searchFallbacks)
		{
			static NaMethodInvoker<void*, Material*, void*, bool> invoker = METHOD_ADDRESS("System.String", "GetTag", "System.String", "System.Boolean");
			return VmGeneralType::String(invoker(this, VmGeneralType::String(tag), searchFallbacks));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF510
		bool SetPass(int32_t pass)
		{
			static NaMethodInvoker<bool, Material*, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "SetPass", "System.Int32");
			return invoker(this, pass);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FE950
		void CopyPropertiesFromMaterial(UnityEngine::Material* mat)
		{
			static NaMethodInvoker<void, Material*, UnityEngine::Material*> invoker = METHOD_ADDRESS("System.Void", "CopyPropertiesFromMaterial", "UnityEngine.Material");
			invoker(this, mat);
		}


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FE910
		int32_t ComputeCRC()
		{
			static NaMethodInvoker<int32_t, Material*> invoker = METHOD_ADDRESS("System.Int32", "ComputeCRC");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF2B0
		void SetFloatImpl(int32_t name, float value)
		{
			static NaMethodInvoker<void, Material*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "SetFloatImpl", "System.Int32", "System.Single");
			invoker(this, name, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF180
		void SetColorImpl(int32_t name, UnityEngine::Color value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "SetColorImpl", "System.Int32", "UnityEngine.Color");
			invoker(this, name, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF450
		void SetMatrixImpl(int32_t name, UnityEngine::Matrix4x4 value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("System.Void", "SetMatrixImpl", "System.Int32", "UnityEngine.Matrix4x4");
			invoker(this, name, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF5A0
		void SetTextureImpl(int32_t name, UnityEngine::Texture* value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Texture*> invoker = METHOD_ADDRESS("System.Void", "SetTextureImpl", "System.Int32", "UnityEngine.Texture");
			invoker(this, name, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FED20
		float GetFloatImpl(int32_t name)
		{
			static NaMethodInvoker<float, Material*, int32_t> invoker = METHOD_ADDRESS("System.Single", "GetFloatImpl", "System.Int32");
			return invoker(this, name);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FEB70
		UnityEngine::Color GetColorImpl(int32_t name)
		{
			static NaMethodInvoker<UnityEngine::Color, Material*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Color", "GetColorImpl", "System.Int32");
			return invoker(this, name);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FEF10
		UnityEngine::Texture* GetTextureImpl(int32_t name)
		{
			static NaMethodInvoker<UnityEngine::Texture*, Material*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Texture", "GetTextureImpl", "System.Int32");
			return invoker(this, name);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF640
		void SetTextureOffsetImpl(int32_t name, UnityEngine::Vector2 offset)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "SetTextureOffsetImpl", "System.Int32", "UnityEngine.Vector2");
			invoker(this, name, offset);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF380
		void SetInt(const std::string& name, int32_t value)
		{
			static NaMethodInvoker<void, Material*, void*, int32_t> invoker = METHOD_ADDRESS("System.Void", "SetInt", "System.String", "System.Int32");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF300
		void SetFloat(const std::string& name, float value)
		{
			static NaMethodInvoker<void, Material*, void*, float> invoker = METHOD_ADDRESS("System.Void", "SetFloat", "System.String", "System.Single");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF2B0
		void SetFloat(int32_t nameID, float value)
		{
			static NaMethodInvoker<void, Material*, int32_t, float> invoker = METHOD_ADDRESS("System.Void", "SetFloat", "System.Int32", "System.Single");
			invoker(this, nameID, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF220
		void SetColor(const std::string& name, UnityEngine::Color value)
		{
			static NaMethodInvoker<void, Material*, void*, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "SetColor", "System.String", "UnityEngine.Color");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF1D0
		void SetColor(int32_t nameID, UnityEngine::Color value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "SetColor", "System.Int32", "UnityEngine.Color");
			invoker(this, nameID, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF4A0
		void SetMatrix(int32_t nameID, UnityEngine::Matrix4x4 value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("System.Void", "SetMatrix", "System.Int32", "UnityEngine.Matrix4x4");
			invoker(this, nameID, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF720
		void SetTexture(const std::string& name, UnityEngine::Texture* value)
		{
			static NaMethodInvoker<void, Material*, void*, UnityEngine::Texture*> invoker = METHOD_ADDRESS("System.Void", "SetTexture", "System.String", "UnityEngine.Texture");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF5A0
		void SetTexture(int32_t nameID, UnityEngine::Texture* value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Texture*> invoker = METHOD_ADDRESS("System.Void", "SetTexture", "System.Int32", "UnityEngine.Texture");
			invoker(this, nameID, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FED60
		float GetFloat(const std::string& name)
		{
			static NaMethodInvoker<float, Material*, void*> invoker = METHOD_ADDRESS("System.Single", "GetFloat", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FED20
		float GetFloat(int32_t nameID)
		{
			static NaMethodInvoker<float, Material*, int32_t> invoker = METHOD_ADDRESS("System.Single", "GetFloat", "System.Int32");
			return invoker(this, nameID);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEBD0
		UnityEngine::Color GetColor(const std::string& name)
		{
			static NaMethodInvoker<UnityEngine::Color, Material*, void*> invoker = METHOD_ADDRESS("UnityEngine.Color", "GetColor", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEC70
		UnityEngine::Color GetColor(int32_t nameID)
		{
			static NaMethodInvoker<UnityEngine::Color, Material*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Color", "GetColor", "System.Int32");
			return invoker(this, nameID);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEF50
		UnityEngine::Texture* GetTexture(const std::string& name)
		{
			static NaMethodInvoker<UnityEngine::Texture*, Material*, void*> invoker = METHOD_ADDRESS("UnityEngine.Texture", "GetTexture", "System.String");
			return invoker(this, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FEF10
		UnityEngine::Texture* GetTexture(int32_t nameID)
		{
			static NaMethodInvoker<UnityEngine::Texture*, Material*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Texture", "GetTexture", "System.Int32");
			return invoker(this, nameID);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF690
		void SetTextureOffset(const std::string& name, UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Material*, void*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "SetTextureOffset", "System.String", "UnityEngine.Vector2");
			invoker(this, VmGeneralType::String(name), value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B30FF640
		void SetTextureOffset(int32_t nameID, UnityEngine::Vector2 value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "SetTextureOffset", "System.Int32", "UnityEngine.Vector2");
			invoker(this, nameID, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF130
		void SetColorImpl_Injected(int32_t name, UnityEngine::Color& value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Color&> invoker = METHOD_ADDRESS("System.Void", "SetColorImpl_Injected", "System.Int32", "UnityEngine.Color&");
			invoker(this, name, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF400
		void SetMatrixImpl_Injected(int32_t name, UnityEngine::Matrix4x4& value)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Void", "SetMatrixImpl_Injected", "System.Int32", "UnityEngine.Matrix4x4&");
			invoker(this, name, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FEB20
		void GetColorImpl_Injected(int32_t name, UnityEngine::Color& ret)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Color&> invoker = METHOD_ADDRESS("System.Void", "GetColorImpl_Injected", "System.Int32", "UnityEngine.Color&");
			invoker(this, name, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B30FF5F0
		void SetTextureOffsetImpl_Injected(int32_t name, UnityEngine::Vector2& offset)
		{
			static NaMethodInvoker<void, Material*, int32_t, UnityEngine::Vector2&> invoker = METHOD_ADDRESS("System.Void", "SetTextureOffsetImpl_Injected", "System.Int32", "UnityEngine.Vector2&");
			invoker(this, name, offset);
		}
	};

	// Name: UnityEngine::GL
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::GL -> System::Object
	class GL
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "GL");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAD60
		static void Vertex3(float x, float y, float z)
		{
			static NaMethodInvoker<void, float, float, float> invoker = METHOD_ADDRESS("System.Void", "Vertex3", "System.Single", "System.Single", "System.Single");
			invoker(x, y, z);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAD00
		static void TexCoord3(float x, float y, float z)
		{
			static NaMethodInvoker<void, float, float, float> invoker = METHOD_ADDRESS("System.Void", "TexCoord3", "System.Single", "System.Single", "System.Single");
			invoker(x, y, z);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FACB0
		static void TexCoord2(float x, float y)
		{
			static NaMethodInvoker<void, float, float> invoker = METHOD_ADDRESS("System.Void", "TexCoord2", "System.Single", "System.Single");
			invoker(x, y);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FAAA0
		static void ImmediateColor(float r, float g, float b, float a)
		{
			static NaMethodInvoker<void, float, float, float, float> invoker = METHOD_ADDRESS("System.Void", "ImmediateColor", "System.Single", "System.Single", "System.Single", "System.Single");
			invoker(r, g, b, a);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FA8C0
		static void Color(UnityEngine::Color c)
		{
			static NaMethodInvoker<void, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "Color", "UnityEngine.Color");
			invoker(c);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FAC70
		static void SetViewMatrix(UnityEngine::Matrix4x4 m)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("System.Void", "SetViewMatrix", "UnityEngine.Matrix4x4");
			invoker(m);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B30FAE40
		static void set_modelview(UnityEngine::Matrix4x4 value)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("System.Void", "set_modelview", "UnityEngine.Matrix4x4");
			invoker(value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAC00
		static void PushMatrix()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "PushMatrix");
			invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FABD0
		static void PopMatrix()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "PopMatrix");
			invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAB20
		static void LoadOrtho()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "LoadOrtho");
			invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAB90
		static void LoadProjectionMatrix(UnityEngine::Matrix4x4 mat)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4> invoker = METHOD_ADDRESS("System.Void", "LoadProjectionMatrix", "UnityEngine.Matrix4x4");
			invoker(mat);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FAA20
		static void GLLoadPixelMatrixScript(float left, float right, float bottom, float top)
		{
			static NaMethodInvoker<void, float, float, float, float> invoker = METHOD_ADDRESS("System.Void", "GLLoadPixelMatrixScript", "System.Single", "System.Single", "System.Single", "System.Single");
			invoker(left, right, bottom, top);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAA20
		static void LoadPixelMatrix(float left, float right, float bottom, float top)
		{
			static NaMethodInvoker<void, float, float, float, float> invoker = METHOD_ADDRESS("System.Void", "LoadPixelMatrix", "System.Single", "System.Single", "System.Single", "System.Single");
			invoker(left, right, bottom, top);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FA810
		static void Begin(int32_t mode)
		{
			static NaMethodInvoker<void, int32_t> invoker = METHOD_ADDRESS("System.Void", "Begin", "System.Int32");
			invoker(mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FA910
		static void End()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "End");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FA9B0
		static void GLClear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor, float depth)
		{
			static NaMethodInvoker<void, bool, bool, UnityEngine::Color, float> invoker = METHOD_ADDRESS("System.Void", "GLClear", "System.Boolean", "System.Boolean", "UnityEngine.Color", "System.Single");
			invoker(clearDepth, clearColor, backgroundColor, depth);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FA850
		static void Clear(bool clearDepth, bool clearColor, UnityEngine::Color backgroundColor, float depth)
		{
			static NaMethodInvoker<void, bool, bool, UnityEngine::Color, float> invoker = METHOD_ADDRESS("System.Void", "Clear", "System.Boolean", "System.Boolean", "UnityEngine.Color", "System.Single");
			invoker(clearDepth, clearColor, backgroundColor, depth);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B30FAE00
		static void Viewport(UnityEngine::Rect pixelRect)
		{
			static NaMethodInvoker<void, UnityEngine::Rect> invoker = METHOD_ADDRESS("System.Void", "Viewport", "UnityEngine.Rect");
			invoker(pixelRect);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FAC30
		static void SetViewMatrix_Injected(UnityEngine::Matrix4x4& m)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Void", "SetViewMatrix_Injected", "UnityEngine.Matrix4x4&");
			invoker(m);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FAB50
		static void LoadProjectionMatrix_Injected(UnityEngine::Matrix4x4& mat)
		{
			static NaMethodInvoker<void, UnityEngine::Matrix4x4&> invoker = METHOD_ADDRESS("System.Void", "LoadProjectionMatrix_Injected", "UnityEngine.Matrix4x4&");
			invoker(mat);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FA940
		static void GLClear_Injected(bool clearDepth, bool clearColor, UnityEngine::Color& backgroundColor, float depth)
		{
			static NaMethodInvoker<void, bool, bool, UnityEngine::Color&, float> invoker = METHOD_ADDRESS("System.Void", "GLClear_Injected", "System.Boolean", "System.Boolean", "UnityEngine.Color&", "System.Single");
			invoker(clearDepth, clearColor, backgroundColor, depth);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B30FADC0
		static void Viewport_Injected(UnityEngine::Rect& pixelRect)
		{
			static NaMethodInvoker<void, UnityEngine::Rect&> invoker = METHOD_ADDRESS("System.Void", "Viewport_Injected", "UnityEngine.Rect&");
			invoker(pixelRect);
		}
	};

	// Name: UnityEngine::Sprite
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Sprite -> UnityEngine::Object -> System::Object
	class Sprite : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.CoreModule", "UnityEngine", "Sprite");

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA42DF1FE0
		int32_t GetPackingMode()
		{
			static NaMethodInvoker<int32_t, Sprite*> invoker = METHOD_ADDRESS("System.Int32", "GetPackingMode");
			return invoker(this);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA42DF1FA0
		int32_t GetPacked()
		{
			static NaMethodInvoker<int32_t, Sprite*> invoker = METHOD_ADDRESS("System.Int32", "GetPacked");
			return invoker(this);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Hidebysig
		// Addresss: 00007FFA42DF2110
		UnityEngine::Rect GetTextureRect()
		{
			static NaMethodInvoker<UnityEngine::Rect, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "GetTextureRect");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF22F0
		UnityEngine::Bounds get_bounds()
		{
			static NaMethodInvoker<UnityEngine::Bounds, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Bounds", "get_bounds");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF24C0
		UnityEngine::Rect get_rect()
		{
			static NaMethodInvoker<UnityEngine::Rect, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "get_rect");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF25E0
		UnityEngine::Texture2D* get_texture()
		{
			static NaMethodInvoker<UnityEngine::Texture2D*, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Texture2D", "get_texture");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2430
		float get_pixelsPerUnit()
		{
			static NaMethodInvoker<float, Sprite*> invoker = METHOD_ADDRESS("System.Single", "get_pixelsPerUnit");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF21C0
		UnityEngine::Texture2D* get_associatedAlphaSplitTexture()
		{
			static NaMethodInvoker<UnityEngine::Texture2D*, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Texture2D", "get_associatedAlphaSplitTexture");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF23E0
		UnityEngine::Vector2 get_pivot()
		{
			static NaMethodInvoker<UnityEngine::Vector2, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "get_pivot");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2350
		bool get_packed()
		{
			static NaMethodInvoker<bool, Sprite*> invoker = METHOD_ADDRESS("System.Boolean", "get_packed");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2510
		UnityEngine::Rect get_textureRect()
		{
			static NaMethodInvoker<UnityEngine::Rect, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "get_textureRect");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF26A0
		Array<UnityEngine::Vector2>* get_vertices()
		{
			static NaMethodInvoker<Array<UnityEngine::Vector2>*, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Vector2[]", "get_vertices");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2620
		Array<uint16_t>* get_triangles()
		{
			static NaMethodInvoker<Array<uint16_t>*, Sprite*> invoker = METHOD_ADDRESS("System.UInt16[]", "get_triangles");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2660
		Array<UnityEngine::Vector2>* get_uv()
		{
			static NaMethodInvoker<Array<UnityEngine::Vector2>*, Sprite*> invoker = METHOD_ADDRESS("UnityEngine.Vector2[]", "get_uv");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FFA42DF20C0
		void GetTextureRect_Injected(UnityEngine::Rect& ret)
		{
			static NaMethodInvoker<void, Sprite*, UnityEngine::Rect&> invoker = METHOD_ADDRESS("System.Void", "GetTextureRect_Injected", "UnityEngine.Rect&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FFA42DF22A0
		void get_bounds_Injected(UnityEngine::Bounds& ret)
		{
			static NaMethodInvoker<void, Sprite*, UnityEngine::Bounds&> invoker = METHOD_ADDRESS("System.Void", "get_bounds_Injected", "UnityEngine.Bounds&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2470
		void get_rect_Injected(UnityEngine::Rect& ret)
		{
			static NaMethodInvoker<void, Sprite*, UnityEngine::Rect&> invoker = METHOD_ADDRESS("System.Void", "get_rect_Injected", "UnityEngine.Rect&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FFA42DF2390
		void get_pivot_Injected(UnityEngine::Vector2& ret)
		{
			static NaMethodInvoker<void, Sprite*, UnityEngine::Vector2&> invoker = METHOD_ADDRESS("System.Void", "get_pivot_Injected", "UnityEngine.Vector2&");
			invoker(this, ret);
		}
	};
}
