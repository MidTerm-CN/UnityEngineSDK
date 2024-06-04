#pragma once

namespace UnityEngine
{
	namespace EventSystems
	{
		// Name: UnityEngine::EventSystems::UIBehaviour
		// ClassType: Normal
		// Flags: Private | Assembly | Famorassem | Notserialized
		// Inheritance: UnityEngine::EventSystems::UIBehaviour -> UnityEngine::MonoBehaviour -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
		class UIBehaviour : public UnityEngine::MonoBehaviour
		{
		public:
			CLASS("UnityEngine.UI", "UnityEngine.EventSystems", "UIBehaviour");

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void Awake()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "Awake");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnEnable()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnEnable");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void Start()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "Start");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnDisable()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnDisable");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnDestroy()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnDestroy");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C88FB0
			bool IsActive()
			{
				static NaMethodInvoker<bool, UIBehaviour*> invoker = METHOD_ADDRESS("System.Boolean", "IsActive");
				return invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnRectTransformDimensionsChange()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnRectTransformDimensionsChange");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnBeforeTransformParentChanged()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnBeforeTransformParentChanged");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnTransformParentChanged()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnTransformParentChanged");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnDidApplyAnimationProperties()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnDidApplyAnimationProperties");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnCanvasGroupChanged()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnCanvasGroupChanged");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void OnCanvasHierarchyChanged()
			{
				static NaMethodInvoker<void, UIBehaviour*> invoker = METHOD_ADDRESS("System.Void", "OnCanvasHierarchyChanged");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Final | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C88FC0
			bool IsDestroyed()
			{
				static NaMethodInvoker<bool, UIBehaviour*> invoker = METHOD_ADDRESS("System.Boolean", "IsDestroyed");
				return invoker(this);
			}
		};
	}
	namespace UI
	{
		// Name: UnityEngine::UI::Graphic
		// ClassType: Normal
		// Flags: Private | Assembly | Famorassem | Notserialized
		// Inheritance: UnityEngine::UI::Graphic -> UnityEngine::EventSystems::UIBehaviour -> UnityEngine::MonoBehaviour -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
		class Graphic : public UnityEngine::EventSystems::UIBehaviour
		{
		public:
			CLASS("UnityEngine.UI", "UnityEngine.UI", "Graphic");

			STATIC_FIELD(UnityEngine::Material*, s_DefaultUI);
			STATIC_FIELD(UnityEngine::Texture2D*, s_WhiteTexture);

			FIELD(UnityEngine::Material*, m_Material);
			FIELD(UnityEngine::Color, m_Color);
			FIELD(bool, m_SkipLayoutUpdate);
			FIELD(bool, m_SkipMaterialUpdate);
			FIELD(bool, m_RaycastTarget);
			FIELD(bool, m_RaycastTargetCache);
			FIELD(bool, m_VertsDirty);
			FIELD(bool, m_MaterialDirty);
			FIELD(Array<UnityEngine::Vector2>*, m_CachedUvs);
			BACKING_FIELD(bool, useLegacyMeshGeneration);


			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
			// Addresss: 00007FF9F3B1AEE0
			static UnityEngine::Material* get_defaultGraphicMaterial()
			{
				static NaMethodInvoker<UnityEngine::Material*> invoker = METHOD_ADDRESS("UnityEngine.Material", "get_defaultGraphicMaterial");
				return invoker();
			}

			// Flags: Private | Assembly | Famorassem | Static | Hidebysig
			// Addresss: 00007FF9F3B18150
			static UnityEngine::Color CreateColorFromAlpha(float alpha)
			{
				static NaMethodInvoker<UnityEngine::Color, float> invoker = METHOD_ADDRESS("UnityEngine.Color", "CreateColorFromAlpha", "System.Single");
				return invoker(alpha);
			}

			// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
			// Addresss: 00007FF9F3B1AC10
			static void StaticConstructor()
			{
				static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
				invoker();
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F380D630
			UnityEngine::Color get_color()
			{
				static NaMethodInvoker<UnityEngine::Color, Graphic*> invoker = METHOD_ADDRESS("UnityEngine.Color", "get_color");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1B550
			void set_color(UnityEngine::Color value)
			{
				static NaMethodInvoker<void, Graphic*, UnityEngine::Color> invoker = METHOD_ADDRESS("System.Void", "set_color", "UnityEngine.Color");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F36D9260
			bool get_raycastTarget()
			{
				static NaMethodInvoker<bool, Graphic*> invoker = METHOD_ADDRESS("System.Boolean", "get_raycastTarget");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1B640
			void set_raycastTarget(bool value)
			{
				static NaMethodInvoker<void, Graphic*, bool> invoker = METHOD_ADDRESS("System.Void", "set_raycastTarget", "System.Boolean");
				invoker(this, value);
			}

			// Flags: Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F2673BE0
			bool get_useLegacyMeshGeneration()
			{
				static NaMethodInvoker<bool, Graphic*> invoker = METHOD_ADDRESS("System.Boolean", "get_useLegacyMeshGeneration");
				return invoker(this);
			}

			// Flags: Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F2671960
			void set_useLegacyMeshGeneration(bool value)
			{
				static NaMethodInvoker<void, Graphic*, bool> invoker = METHOD_ADDRESS("System.Void", "set_useLegacyMeshGeneration", "System.Boolean");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B1A5F0
			void SetAllDirty()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "SetAllDirty");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B1A660
			void SetLayoutDirty()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "SetLayoutDirty");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B1A8B0
			void SetVerticesDirty()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "SetVerticesDirty");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B1A740
			void SetMaterialDirty()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "SetMaterialDirty");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
			// Addresss: 00007FF9F3B1A7D0
			void SetRaycastDirty()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "SetRaycastDirty");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B19C90
			void OnRectTransformDimensionsChange()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnRectTransformDimensionsChange");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B191E0
			void OnBeforeTransformParentChanged()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnBeforeTransformParentChanged");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B19D80
			void OnTransformParentChanged()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnTransformParentChanged");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F3B1B020
			int32_t get_depth()
			{
				static NaMethodInvoker<int32_t, Graphic*> invoker = METHOD_ADDRESS("System.Int32", "get_depth");
				return invoker(this);
			}

			// Flags: Private | Assembly | Famorassem | Hidebysig
			// Addresss: 00007FF9F3B17FD0
			void CacheCanvas()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "CacheCanvas");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1AFE0
			UnityEngine::Material* get_defaultMaterial()
			{
				static NaMethodInvoker<UnityEngine::Material*, Graphic*> invoker = METHOD_ADDRESS("UnityEngine.Material", "get_defaultMaterial");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1B2D0
			UnityEngine::Material* get_material()
			{
				static NaMethodInvoker<UnityEngine::Material*, Graphic*> invoker = METHOD_ADDRESS("UnityEngine.Material", "get_material");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1B5A0
			void set_material(UnityEngine::Material* value)
			{
				static NaMethodInvoker<void, Graphic*, UnityEngine::Material*> invoker = METHOD_ADDRESS("System.Void", "set_material", "UnityEngine.Material");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1B0A0
			UnityEngine::Material* get_materialForRendering()
			{
				static NaMethodInvoker<UnityEngine::Material*, Graphic*> invoker = METHOD_ADDRESS("UnityEngine.Material", "get_materialForRendering");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot | Specialname
			// Addresss: 00007FF9F3B1B050
			UnityEngine::Texture* get_mainTexture()
			{
				static NaMethodInvoker<UnityEngine::Texture*, Graphic*> invoker = METHOD_ADDRESS("UnityEngine.Texture", "get_mainTexture");
				return invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B19820
			void OnEnable()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnEnable");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B19660
			void OnDisable()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnDisable");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B194E0
			void OnDestroy()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnDestroy");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B19300
			void OnCanvasHierarchyChanged()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnCanvasHierarchyChanged");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B19460
			void OnCullingChanged()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnCullingChanged");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void LayoutComplete()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "LayoutComplete");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void GraphicUpdateComplete()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "GraphicUpdateComplete");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B1AB40
			void UpdateMaterial()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "UpdateMaterial");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B1AB20
			void UpdateGeometry()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "UpdateGeometry");
				invoker(this);
			}

			// Flags: Private | Assembly | Famorassem | Hidebysig
			// Addresss: 00007FF9F3B18A70
			void DoMeshGeneration()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "DoMeshGeneration");
				invoker(this);
			}

			// Flags: Private | Assembly | Famorassem | Hidebysig
			// Addresss: 00007FF9F3B18550
			void DoLegacyMeshGeneration()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "DoLegacyMeshGeneration");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B19640
			void OnDidApplyAnimationProperties()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "OnDidApplyAnimationProperties");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F1D4D1D0
			void SetNativeSize()
			{
				static NaMethodInvoker<void, Graphic*> invoker = METHOD_ADDRESS("System.Void", "SetNativeSize");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B19FD0
			bool Raycast(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera)
			{
				static NaMethodInvoker<bool, Graphic*, UnityEngine::Vector2, UnityEngine::Camera*> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector2", "UnityEngine.Camera");
				return invoker(this, sp, eventCamera);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
			// Addresss: 00007FF9F3B19E40
			UnityEngine::Vector2 PixelAdjustPoint(UnityEngine::Vector2 point)
			{
				static NaMethodInvoker<UnityEngine::Vector2, Graphic*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("UnityEngine.Vector2", "PixelAdjustPoint", "UnityEngine.Vector2");
				return invoker(this, point);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
			// Addresss: 00007FF9F3B18FF0
			UnityEngine::Rect GetPixelAdjustedRect()
			{
				static NaMethodInvoker<UnityEngine::Rect, Graphic*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "GetPixelAdjustedRect");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B18510
			void CrossFadeColor(UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
			{
				static NaMethodInvoker<void, Graphic*, UnityEngine::Color, float, bool, bool> invoker = METHOD_ADDRESS("System.Void", "CrossFadeColor", "UnityEngine.Color", "System.Single", "System.Boolean", "System.Boolean");
				invoker(this, targetColor, duration, ignoreTimeScale, useAlpha);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B18240
			void CrossFadeColor(UnityEngine::Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha, bool useRGB)
			{
				static NaMethodInvoker<void, Graphic*, UnityEngine::Color, float, bool, bool, bool> invoker = METHOD_ADDRESS("System.Void", "CrossFadeColor", "UnityEngine.Color", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean");
				invoker(this, targetColor, duration, ignoreTimeScale, useAlpha, useRGB);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3B18170
			void CrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
			{
				static NaMethodInvoker<void, Graphic*, float, float, bool> invoker = METHOD_ADDRESS("System.Void", "CrossFadeAlpha", "System.Single", "System.Single", "System.Boolean");
				invoker(this, alpha, duration, ignoreTimeScale);
			}
		};

		// Name: UnityEngine::UI::MaskableGraphic
		// ClassType: Normal
		// Flags: Private | Assembly | Famorassem | Notserialized
		// Inheritance: UnityEngine::UI::MaskableGraphic -> UnityEngine::UI::Graphic -> UnityEngine::EventSystems::UIBehaviour -> UnityEngine::MonoBehaviour -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
		class MaskableGraphic : public UnityEngine::UI::Graphic
		{
		public:
			CLASS("UnityEngine.UI", "UnityEngine.UI", "MaskableGraphic");

			FIELD(bool, m_ShouldRecalculateStencil);
			FIELD(UnityEngine::Material*, m_MaskMaterial);
			FIELD(bool, m_Maskable);
			FIELD(bool, m_IsMaskingGraphic);
			FIELD(bool, m_IncludeForMasking);
			FIELD(bool, m_ShouldRecalculate);
			FIELD(int32_t, m_StencilValue);
			FIELD(Array<UnityEngine::Vector3>*, m_Corners);

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F21B5510
			bool get_maskable()
			{
				static NaMethodInvoker<bool, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Boolean", "get_maskable");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5E910
			void set_maskable(bool value)
			{
				static NaMethodInvoker<void, MaskableGraphic*, bool> invoker = METHOD_ADDRESS("System.Void", "set_maskable", "System.Boolean");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F25A5B20
			bool get_isMaskingGraphic()
			{
				static NaMethodInvoker<bool, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Boolean", "get_isMaskingGraphic");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5E900
			void set_isMaskingGraphic(bool value)
			{
				static NaMethodInvoker<void, MaskableGraphic*, bool> invoker = METHOD_ADDRESS("System.Void", "set_isMaskingGraphic", "System.Boolean");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C5DD30
			UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial)
			{
				static NaMethodInvoker<UnityEngine::Material*, MaskableGraphic*, UnityEngine::Material*> invoker = METHOD_ADDRESS("UnityEngine.Material", "GetModifiedMaterial", "UnityEngine.Material");
				return invoker(this, baseMaterial);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C5DCD0
			void Cull(UnityEngine::Rect clipRect, bool validRect)
			{
				static NaMethodInvoker<void, MaskableGraphic*, UnityEngine::Rect, bool> invoker = METHOD_ADDRESS("System.Void", "Cull", "UnityEngine.Rect", "System.Boolean");
				invoker(this, clipRect, validRect);
			}

			// Flags: Private | Assembly | Famorassem | Hidebysig
			// Addresss: 00007FF9F3C5E400
			void UpdateCull(bool cull)
			{
				static NaMethodInvoker<void, MaskableGraphic*, bool> invoker = METHOD_ADDRESS("System.Void", "UpdateCull", "System.Boolean");
				invoker(this, cull);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C5E0F0
			void SetClipRect(UnityEngine::Rect clipRect, bool validRect)
			{
				static NaMethodInvoker<void, MaskableGraphic*, UnityEngine::Rect, bool> invoker = METHOD_ADDRESS("System.Void", "SetClipRect", "UnityEngine.Rect", "System.Boolean");
				invoker(this, clipRect, validRect);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C5E150
			void SetClipSoftness(UnityEngine::Vector2 clipSoftness)
			{
				static NaMethodInvoker<void, MaskableGraphic*, UnityEngine::Vector2> invoker = METHOD_ADDRESS("System.Void", "SetClipSoftness", "UnityEngine.Vector2");
				invoker(this, clipSoftness);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3C5DFA0
			void OnEnable()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "OnEnable");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3C5DEE0
			void OnDisable()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "OnDisable");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3C5E000
			void OnTransformParentChanged()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "OnTransformParentChanged");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3C5DE90
			void OnCanvasHierarchyChanged()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "OnCanvasHierarchyChanged");
				invoker(this);
			}

			// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5E5E0
			UnityEngine::Rect get_rootCanvasRect()
			{
				static NaMethodInvoker<UnityEngine::Rect, MaskableGraphic*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "get_rootCanvasRect");
				return invoker(this);
			}

			// Flags: Private | Assembly | Famorassem | Hidebysig
			// Addresss: 00007FF9F3C5E1A0
			void UpdateClipParent()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "UpdateClipParent");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C5E050
			void RecalculateClipping()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "RecalculateClipping");
				invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Newslot
			// Addresss: 00007FF9F3C5E060
			void RecalculateMasking()
			{
				static NaMethodInvoker<void, MaskableGraphic*> invoker = METHOD_ADDRESS("System.Void", "RecalculateMasking");
				invoker(this);
			}
		};

		// Name: UnityEngine::UI::RawImage
		// ClassType: Normal
		// Flags: Private | Assembly | Famorassem
		// Inheritance: UnityEngine::UI::RawImage -> UnityEngine::UI::MaskableGraphic -> UnityEngine::UI::Graphic -> UnityEngine::EventSystems::UIBehaviour -> UnityEngine::MonoBehaviour -> UnityEngine::Behaviour -> UnityEngine::Component -> UnityEngine::Object -> System::Object
		class RawImage : public UnityEngine::UI::MaskableGraphic
		{
		public:
			CLASS("UnityEngine.UI", "UnityEngine.UI", "RawImage");

			FIELD(UnityEngine::Texture*, m_Texture);
			FIELD(UnityEngine::Rect, m_UVRect);


			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5FA00
			UnityEngine::Texture* get_mainTexture()
			{
				static NaMethodInvoker<UnityEngine::Texture*, RawImage*> invoker = METHOD_ADDRESS("UnityEngine.Texture", "get_mainTexture");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F2371C50
			UnityEngine::Texture* get_texture()
			{
				static NaMethodInvoker<UnityEngine::Texture*, RawImage*> invoker = METHOD_ADDRESS("UnityEngine.Texture", "get_texture");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5FB90
			void set_texture(UnityEngine::Texture* value)
			{
				static NaMethodInvoker<void, RawImage*, UnityEngine::Texture*> invoker = METHOD_ADDRESS("System.Void", "set_texture", "UnityEngine.Texture");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5FB80
			UnityEngine::Rect get_uvRect()
			{
				static NaMethodInvoker<UnityEngine::Rect, RawImage*> invoker = METHOD_ADDRESS("UnityEngine.Rect", "get_uvRect");
				return invoker(this);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
			// Addresss: 00007FF9F3C5FC40
			void set_uvRect(UnityEngine::Rect value)
			{
				static NaMethodInvoker<void, RawImage*, UnityEngine::Rect> invoker = METHOD_ADDRESS("System.Void", "set_uvRect", "UnityEngine.Rect");
				invoker(this, value);
			}

			// Flags: Famandassem | Assembly | Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3C5F710
			void SetNativeSize()
			{
				static NaMethodInvoker<void, RawImage*> invoker = METHOD_ADDRESS("System.Void", "SetNativeSize");
				invoker(this);
			}

			// Flags: Family | Famorassem | Public | Virtual | Hidebysig
			// Addresss: 00007FF9F3B20AA0
			void OnDidApplyAnimationProperties()
			{
				static NaMethodInvoker<void, RawImage*> invoker = METHOD_ADDRESS("System.Void", "OnDidApplyAnimationProperties");
				invoker(this);
			}
		};
	}
}