#pragma once

namespace UnityEngine
{
	// Name: UnityEngine::RigidbodyConstraints
	// Flags: Private | Assembly | Famorassem
	enum class RigidbodyConstraints
	{
		None = 0,
		FreezePositionX = 2,
		FreezePositionY = 4,
		FreezePositionZ = 8,
		FreezeRotationX = 16,
		FreezeRotationY = 32,
		FreezeRotationZ = 64,
		FreezePosition = 14,
		FreezeRotation = 112,
		FreezeAll = 126,
	};

	// Name: UnityEngine::QueryTriggerInteraction
	// Flags: Private | Assembly | Famorassem
	enum class QueryTriggerInteraction
	{
		UseGlobal = 0,
		Ignore = 1,
		Collide = 2,
	};

	// Name: UnityEngine::CollisionDetectionMode
	// Flags: Private | Assembly | Famorassem
	enum class CollisionDetectionMode
	{
		Discrete = 0,
		Continuous = 1,
		ContinuousDynamic = 2,
		ContinuousSpeculative = 3,
	};

	// Name: UnityEngine::RigidbodyInterpolation
	// Flags: Private | Assembly | Famorassem
	enum class RigidbodyInterpolation
	{
		None = 0,
		Interpolate = 1,
		Extrapolate = 2,
	};

	// Name: UnityEngine::ForceMode
	// Flags: Private | Assembly | Famorassem
	enum class ForceMode
	{
		Force = 0,
		Acceleration = 5,
		Impulse = 1,
		VelocityChange = 2,
	};

	// Name: UnityEngine::Rigidbody
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Rigidbody -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Rigidbody : public UnityEngine::Component
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "Rigidbody");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172AD0
		UnityEngine::Vector3 get_velocity()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_velocity");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31731C0
		void set_velocity(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_velocity", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31725B0
		UnityEngine::Vector3 get_angularVelocity()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_angularVelocity");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172C60
		void set_angularVelocity(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_angularVelocity", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172720
		float get_drag()
		{
			static NaMethodInvoker<float, Rigidbody*> invoker = METHOD_ADDRESS("System.Single", "get_drag");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172DD0
		void set_drag(float value)
		{
			static NaMethodInvoker<void, Rigidbody*, float> invoker = METHOD_ADDRESS("System.Void", "set_drag", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172520
		float get_angularDrag()
		{
			static NaMethodInvoker<float, Rigidbody*> invoker = METHOD_ADDRESS("System.Single", "get_angularDrag");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172BC0
		void set_angularDrag(float value)
		{
			static NaMethodInvoker<void, Rigidbody*, float> invoker = METHOD_ADDRESS("System.Void", "set_angularDrag", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172880
		float get_mass()
		{
			static NaMethodInvoker<float, Rigidbody*> invoker = METHOD_ADDRESS("System.Single", "get_mass");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172F50
		void set_mass(float value)
		{
			static NaMethodInvoker<void, Rigidbody*, float> invoker = METHOD_ADDRESS("System.Void", "set_mass", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172A40
		bool get_useGravity()
		{
			static NaMethodInvoker<bool, Rigidbody*> invoker = METHOD_ADDRESS("System.Boolean", "get_useGravity");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3173120
		void set_useGravity(bool value)
		{
			static NaMethodInvoker<void, Rigidbody*, bool> invoker = METHOD_ADDRESS("System.Void", "set_useGravity", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172840
		bool get_isKinematic()
		{
			static NaMethodInvoker<bool, Rigidbody*> invoker = METHOD_ADDRESS("System.Boolean", "get_isKinematic");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172F00
		void set_isKinematic(bool value)
		{
			static NaMethodInvoker<void, Rigidbody*, bool> invoker = METHOD_ADDRESS("System.Void", "set_isKinematic", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31726E0
		UnityEngine::RigidbodyConstraints get_constraints()
		{
			static NaMethodInvoker<UnityEngine::RigidbodyConstraints, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.RigidbodyConstraints", "get_constraints");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172D90
		void set_constraints(UnityEngine::RigidbodyConstraints value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::RigidbodyConstraints> invoker = METHOD_ADDRESS("System.Void", "set_constraints", "UnityEngine.RigidbodyConstraints");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31726A0
		UnityEngine::CollisionDetectionMode get_collisionDetectionMode()
		{
			static NaMethodInvoker<UnityEngine::CollisionDetectionMode, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.CollisionDetectionMode", "get_collisionDetectionMode");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172D50
		void set_collisionDetectionMode(UnityEngine::CollisionDetectionMode value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::CollisionDetectionMode> invoker = METHOD_ADDRESS("System.Void", "set_collisionDetectionMode", "UnityEngine.CollisionDetectionMode");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172650
		UnityEngine::Vector3 get_centerOfMass()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_centerOfMass");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172D00
		void set_centerOfMass(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_centerOfMass", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172B70
		UnityEngine::Vector3 get_worldCenterOfMass()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_worldCenterOfMass");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31727B0
		UnityEngine::Vector3 get_inertiaTensor()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_inertiaTensor");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172E70
		void set_inertiaTensor(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_inertiaTensor", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172950
		UnityEngine::Vector3 get_position()
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_position");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172FF0
		void set_position(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_position", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31729F0
		UnityEngine::Quaternion get_rotation()
		{
			static NaMethodInvoker<UnityEngine::Quaternion, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.Quaternion", "get_rotation");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3173090
		void set_rotation(UnityEngine::Quaternion value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Void", "set_rotation", "UnityEngine.Quaternion");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172800
		UnityEngine::RigidbodyInterpolation get_interpolation()
		{
			static NaMethodInvoker<UnityEngine::RigidbodyInterpolation, Rigidbody*> invoker = METHOD_ADDRESS("UnityEngine.RigidbodyInterpolation", "get_interpolation");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3172EC0
		void set_interpolation(UnityEngine::RigidbodyInterpolation value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::RigidbodyInterpolation> invoker = METHOD_ADDRESS("System.Void", "set_interpolation", "UnityEngine.RigidbodyInterpolation");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31730E0
		void set_solverIterations(int32_t value)
		{
			static NaMethodInvoker<void, Rigidbody*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_solverIterations", "System.Int32");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31728C0
		float get_maxAngularVelocity()
		{
			static NaMethodInvoker<float, Rigidbody*> invoker = METHOD_ADDRESS("System.Single", "get_maxAngularVelocity");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31723B0
		void MovePosition(UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "MovePosition", "UnityEngine.Vector3");
			invoker(this, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3172450
		void MoveRotation(UnityEngine::Quaternion rot)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Quaternion> invoker = METHOD_ADDRESS("System.Void", "MoveRotation", "UnityEngine.Quaternion");
			invoker(this, rot);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3172320
		bool IsSleeping()
		{
			static NaMethodInvoker<bool, Rigidbody*> invoker = METHOD_ADDRESS("System.Boolean", "IsSleeping");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31724E0
		void WakeUp()
		{
			static NaMethodInvoker<void, Rigidbody*> invoker = METHOD_ADDRESS("System.Void", "WakeUp");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31724A0
		void ResetInertiaTensor()
		{
			static NaMethodInvoker<void, Rigidbody*> invoker = METHOD_ADDRESS("System.Void", "ResetInertiaTensor");
			invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31722C0
		UnityEngine::Vector3 GetPointVelocity(UnityEngine::Vector3 worldPoint)
		{
			static NaMethodInvoker<UnityEngine::Vector3, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "GetPointVelocity", "UnityEngine.Vector3");
			return invoker(this, worldPoint);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3171FE0
		void AddForce(UnityEngine::Vector3 force, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddForce", "UnityEngine.Vector3", "UnityEngine.ForceMode");
			invoker(this, force, mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3171F90
		void AddForce(UnityEngine::Vector3 force)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "AddForce", "UnityEngine.Vector3");
			invoker(this, force);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31720F0
		void AddRelativeForce(UnityEngine::Vector3 force, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddRelativeForce", "UnityEngine.Vector3", "UnityEngine.ForceMode");
			invoker(this, force, mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31720A0
		void AddRelativeForce(UnityEngine::Vector3 force)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "AddRelativeForce", "UnityEngine.Vector3");
			invoker(this, force);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3172200
		void AddTorque(UnityEngine::Vector3 torque, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddTorque", "UnityEngine.Vector3", "UnityEngine.ForceMode");
			invoker(this, torque, mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B31721B0
		void AddTorque(UnityEngine::Vector3 torque)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "AddTorque", "UnityEngine.Vector3");
			invoker(this, torque);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3171E50
		void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddForceAtPosition", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.ForceMode");
			invoker(this, force, position, mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3171EC0
		void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "AddForceAtPosition", "UnityEngine.Vector3", "UnityEngine.Vector3");
			invoker(this, force, position);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3171D60
		void AddExplosionForce(float explosionForce, UnityEngine::Vector3 explosionPosition, float explosionRadius, float upwardsModifier, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, float, UnityEngine::Vector3, float, float, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddExplosionForce", "System.Single", "UnityEngine.Vector3", "System.Single", "System.Single", "UnityEngine.ForceMode");
			invoker(this, explosionForce, explosionPosition, explosionRadius, upwardsModifier, mode);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3171CE0
		void AddExplosionForce(float explosionForce, UnityEngine::Vector3 explosionPosition, float explosionRadius)
		{
			static NaMethodInvoker<void, Rigidbody*, float, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("System.Void", "AddExplosionForce", "System.Single", "UnityEngine.Vector3", "System.Single");
			invoker(this, explosionForce, explosionPosition, explosionRadius);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172A80
		void get_velocity_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_velocity_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3173170
		void set_velocity_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_velocity_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172560
		void get_angularVelocity_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_angularVelocity_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172C10
		void set_angularVelocity_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_angularVelocity_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172600
		void get_centerOfMass_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_centerOfMass_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172CB0
		void set_centerOfMass_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_centerOfMass_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172B20
		void get_worldCenterOfMass_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_worldCenterOfMass_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172760
		void get_inertiaTensor_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_inertiaTensor_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172E20
		void set_inertiaTensor_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_inertiaTensor_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172900
		void get_position_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_position_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3172FA0
		void set_position_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_position_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B31729A0
		void get_rotation_Injected(UnityEngine::Quaternion& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "get_rotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3173040
		void set_rotation_Injected(UnityEngine::Quaternion& value)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "set_rotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3172360
		void MovePosition_Injected(UnityEngine::Vector3& position)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "MovePosition_Injected", "UnityEngine.Vector3&");
			invoker(this, position);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3172400
		void MoveRotation_Injected(UnityEngine::Quaternion& rot)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Quaternion&> invoker = METHOD_ADDRESS("System.Void", "MoveRotation_Injected", "UnityEngine.Quaternion&");
			invoker(this, rot);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3172260
		void GetPointVelocity_Injected(UnityEngine::Vector3& worldPoint, UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "GetPointVelocity_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&");
			invoker(this, worldPoint, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3171F30
		void AddForce_Injected(UnityEngine::Vector3& force, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddForce_Injected", "UnityEngine.Vector3&", "UnityEngine.ForceMode");
			invoker(this, force, mode);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3172040
		void AddRelativeForce_Injected(UnityEngine::Vector3& force, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddRelativeForce_Injected", "UnityEngine.Vector3&", "UnityEngine.ForceMode");
			invoker(this, force, mode);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3172150
		void AddTorque_Injected(UnityEngine::Vector3& torque, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddTorque_Injected", "UnityEngine.Vector3&", "UnityEngine.ForceMode");
			invoker(this, torque, mode);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3171DE0
		void AddForceAtPosition_Injected(UnityEngine::Vector3& force, UnityEngine::Vector3& position, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, UnityEngine::Vector3&, UnityEngine::Vector3&, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddForceAtPosition_Injected", "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.ForceMode");
			invoker(this, force, position, mode);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3171C70
		void AddExplosionForce_Injected(float explosionForce, UnityEngine::Vector3& explosionPosition, float explosionRadius, float upwardsModifier, UnityEngine::ForceMode mode)
		{
			static NaMethodInvoker<void, Rigidbody*, float, UnityEngine::Vector3&, float, float, UnityEngine::ForceMode> invoker = METHOD_ADDRESS("System.Void", "AddExplosionForce_Injected", "System.Single", "UnityEngine.Vector3&", "System.Single", "System.Single", "UnityEngine.ForceMode");
			invoker(this, explosionForce, explosionPosition, explosionRadius, upwardsModifier, mode);
		}
	};

	// Name: UnityEngine::PhysicMaterial
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::PhysicMaterial -> UnityEngine::Object -> System::Object
	class PhysicMaterial : public UnityEngine::Object
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "PhysicMaterial");

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig
		// Addresss: 00007FF9B316B680
		static void Internal_CreateDynamicsMaterial(UnityEngine::PhysicMaterial* mat, const std::string& name)
		{
			static NaMethodInvoker<void, UnityEngine::PhysicMaterial*, void*> invoker = METHOD_ADDRESS("System.Void", "Internal_CreateDynamicsMaterial", "UnityEngine.PhysicMaterial", "System.String");
			invoker(mat, VmGeneralType::String(name));
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B316B7A0
		void set_bounciness(float value)
		{
			static NaMethodInvoker<void, PhysicMaterial*, float> invoker = METHOD_ADDRESS("System.Void", "set_bounciness", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B316B7F0
		void set_dynamicFriction(float value)
		{
			static NaMethodInvoker<void, PhysicMaterial*, float> invoker = METHOD_ADDRESS("System.Void", "set_dynamicFriction", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B316B880
		void set_staticFriction(float value)
		{
			static NaMethodInvoker<void, PhysicMaterial*, float> invoker = METHOD_ADDRESS("System.Void", "set_staticFriction", "System.Single");
			invoker(this, value);
		}
	};

	// Name: UnityEngine::Collider
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Collider -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class Collider : public UnityEngine::Component
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "Collider");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3169440
		bool get_enabled()
		{
			static NaMethodInvoker<bool, Collider*> invoker = METHOD_ADDRESS("System.Boolean", "get_enabled");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3169500
		void set_enabled(bool value)
		{
			static NaMethodInvoker<void, Collider*, bool> invoker = METHOD_ADDRESS("System.Void", "set_enabled", "System.Boolean");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3169350
		UnityEngine::Rigidbody* get_attachedRigidbody()
		{
			static NaMethodInvoker<UnityEngine::Rigidbody*, Collider*> invoker = METHOD_ADDRESS("UnityEngine.Rigidbody", "get_attachedRigidbody");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3169480
		bool get_isTrigger()
		{
			static NaMethodInvoker<bool, Collider*> invoker = METHOD_ADDRESS("System.Boolean", "get_isTrigger");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31693E0
		UnityEngine::Bounds get_bounds()
		{
			static NaMethodInvoker<UnityEngine::Bounds, Collider*> invoker = METHOD_ADDRESS("UnityEngine.Bounds", "get_bounds");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31694C0
		UnityEngine::PhysicMaterial* get_sharedMaterial()
		{
			static NaMethodInvoker<UnityEngine::PhysicMaterial*, Collider*> invoker = METHOD_ADDRESS("UnityEngine.PhysicMaterial", "get_sharedMaterial");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31695A0
		void set_sharedMaterial(UnityEngine::PhysicMaterial* value)
		{
			static NaMethodInvoker<void, Collider*, UnityEngine::PhysicMaterial*> invoker = METHOD_ADDRESS("System.Void", "set_sharedMaterial", "UnityEngine.PhysicMaterial");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3169550
		void set_material(UnityEngine::PhysicMaterial* value)
		{
			static NaMethodInvoker<void, Collider*, UnityEngine::PhysicMaterial*> invoker = METHOD_ADDRESS("System.Void", "set_material", "UnityEngine.PhysicMaterial");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3169390
		void get_bounds_Injected(UnityEngine::Bounds& ret)
		{
			static NaMethodInvoker<void, Collider*, UnityEngine::Bounds&> invoker = METHOD_ADDRESS("System.Void", "get_bounds_Injected", "UnityEngine.Bounds&");
			invoker(this, ret);
		}
	};

	// Name: UnityEngine::CharacterController
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::CharacterController -> UnityEngine::Collider -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class CharacterController : public UnityEngine::Collider
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "CharacterController");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig
		// Addresss: 00007FF9B3168870
		bool SimpleMove(UnityEngine::Vector3 speed)
		{
			static NaMethodInvoker<bool, CharacterController*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Boolean", "SimpleMove", "UnityEngine.Vector3");
			return invoker(this, speed);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168A70
		UnityEngine::Vector3 get_velocity()
		{
			static NaMethodInvoker<UnityEngine::Vector3, CharacterController*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_velocity");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31689A0
		float get_radius()
		{
			static NaMethodInvoker<float, CharacterController*> invoker = METHOD_ADDRESS("System.Single", "get_radius");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168960
		float get_height()
		{
			static NaMethodInvoker<float, CharacterController*> invoker = METHOD_ADDRESS("System.Single", "get_height");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168AC0
		void set_height(float value)
		{
			static NaMethodInvoker<void, CharacterController*, float> invoker = METHOD_ADDRESS("System.Void", "set_height", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168910
		UnityEngine::Vector3 get_center()
		{
			static NaMethodInvoker<UnityEngine::Vector3, CharacterController*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_center");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31689E0
		float get_skinWidth()
		{
			static NaMethodInvoker<float, CharacterController*> invoker = METHOD_ADDRESS("System.Single", "get_skinWidth");
			return invoker(this);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig
		// Addresss: 00007FF9B3168820
		bool SimpleMove_Injected(UnityEngine::Vector3& speed)
		{
			static NaMethodInvoker<bool, CharacterController*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Boolean", "SimpleMove_Injected", "UnityEngine.Vector3&");
			return invoker(this, speed);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3168A20
		void get_velocity_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, CharacterController*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_velocity_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B31688C0
		void get_center_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, CharacterController*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_center_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}
	};

	// Name: UnityEngine::RaycastHit
// ClassType: ValueType | Normal
// Flags: Private | Assembly | Famorassem
// Inheritance: UnityEngine::RaycastHit -> System::ValueType -> System::Object
	class RaycastHit
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "RaycastHit");

		UnityEngine::Vector3 m_Point;
		UnityEngine::Vector3 m_Normal;
		uint32_t m_FaceID;
		float m_Distance;
		UnityEngine::Vector2 m_UV;
		int32_t m_Collider;


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3171B10
		UnityEngine::Collider* get_collider()
		{
			static NaMethodInvoker<UnityEngine::Collider*, RaycastHit*> invoker = METHOD_ADDRESS("UnityEngine.Collider", "get_collider");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30D6320
		UnityEngine::Vector3 get_point()
		{
			static NaMethodInvoker<UnityEngine::Vector3, RaycastHit*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_point");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B2FCC190
		void set_point(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, RaycastHit*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_point", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30F1B90
		UnityEngine::Vector3 get_normal()
		{
			static NaMethodInvoker<UnityEngine::Vector3, RaycastHit*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_normal");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B30F1BB0
		void set_normal(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, RaycastHit*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_normal", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3163260
		float get_distance()
		{
			static NaMethodInvoker<float, RaycastHit*> invoker = METHOD_ADDRESS("System.Single", "get_distance");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B1D3F9E0
		void set_distance(float value)
		{
			static NaMethodInvoker<void, RaycastHit*, float> invoker = METHOD_ADDRESS("System.Void", "set_distance", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3171BC0
		UnityEngine::Rigidbody* get_rigidbody()
		{
			static NaMethodInvoker<UnityEngine::Rigidbody*, RaycastHit*> invoker = METHOD_ADDRESS("UnityEngine.Rigidbody", "get_rigidbody");
			return invoker(this);
		}
	};

	// Name: UnityEngine::Physics
	// ClassType: Normal
	// Flags: Private | Assembly | Famorassem
	// Inheritance: UnityEngine::Physics -> System::Object
	class Physics
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "Physics");

		STATIC_FIELD(void*, ContactModifyEvent);
		STATIC_FIELD(void*, ContactModifyEventCCD);


		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B3171A10
		static UnityEngine::Vector3 get_gravity()
		{
			static NaMethodInvoker<UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_gravity");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B3171A80
		static bool get_invokeCollisionCallbacks()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_invokeCollisionCallbacks");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D310
		static void IgnoreCollision(UnityEngine::Collider* collider1, UnityEngine::Collider* collider2, bool ignore)
		{
			static NaMethodInvoker<void, UnityEngine::Collider*, UnityEngine::Collider*, bool> invoker = METHOD_ADDRESS("System.Void", "IgnoreCollision", "UnityEngine.Collider", "UnityEngine.Collider", "System.Boolean");
			invoker(collider1, collider2, ignore);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D370
		static void IgnoreCollision(UnityEngine::Collider* collider1, UnityEngine::Collider* collider2)
		{
			static NaMethodInvoker<void, UnityEngine::Collider*, UnityEngine::Collider*> invoker = METHOD_ADDRESS("System.Void", "IgnoreCollision", "UnityEngine.Collider", "UnityEngine.Collider");
			invoker(collider1, collider2);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D470
		static void IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore)
		{
			static NaMethodInvoker<void, int32_t, int32_t, bool> invoker = METHOD_ADDRESS("System.Void", "IgnoreLayerCollision", "System.Int32", "System.Int32", "System.Boolean");
			invoker(layer1, layer2, ignore);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D3F0
		static void IgnoreLayerCollision(int32_t layer1, int32_t layer2)
		{
			static NaMethodInvoker<void, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Void", "IgnoreLayerCollision", "System.Int32", "System.Int32");
			invoker(layer1, layer2);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D2D0
		static bool GetIgnoreLayerCollision(int32_t layer1, int32_t layer2)
		{
			static NaMethodInvoker<bool, int32_t, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "GetIgnoreLayerCollision", "System.Int32", "System.Int32");
			return invoker(layer1, layer2);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316FE20
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(origin, direction, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316FAB0
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32");
			return invoker(origin, direction, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3170880
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single");
			return invoker(origin, direction, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3170550
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(origin, direction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3170470
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316FEF0
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32");
			return invoker(origin, direction, hitInfo, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F9E0
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&, float> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single");
			return invoker(origin, direction, hitInfo, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316FC50
		static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&");
			return invoker(origin, direction, hitInfo);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B31703A0
		static bool Raycast(UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(ray, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316FFC0
		static bool Raycast(UnityEngine::Ray ray, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "System.Single", "System.Int32");
			return invoker(ray, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3170150
		static bool Raycast(UnityEngine::Ray ray, float maxDistance)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, float> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "System.Single");
			return invoker(ray, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3170A10
		static bool Raycast(UnityEngine::Ray ray)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray");
			return invoker(ray);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B31707A0
		static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, UnityEngine::RaycastHit&, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(ray, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316FD20
		static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, UnityEngine::RaycastHit&, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "UnityEngine.RaycastHit&", "System.Single", "System.Int32");
			return invoker(ray, hitInfo, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B31702E0
		static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, UnityEngine::RaycastHit&, float> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "UnityEngine.RaycastHit&", "System.Single");
			return invoker(ray, hitInfo, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B31706E0
		static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, UnityEngine::RaycastHit&> invoker = METHOD_ADDRESS("System.Boolean", "Raycast", "UnityEngine.Ray", "UnityEngine.RaycastHit&");
			return invoker(ray, hitInfo);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D700
		static bool Linecast(UnityEngine::Vector3 start, UnityEngine::Vector3 end, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "Linecast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(start, end, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D820
		static bool Linecast(UnityEngine::Vector3 start, UnityEngine::Vector3 end, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Linecast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Int32");
			return invoker(start, end, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D5D0
		static bool Linecast(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "Linecast", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(start, end, hitInfo, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D960
		static bool Linecast(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::RaycastHit& hitInfo, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "Linecast", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Int32");
			return invoker(start, end, hitInfo, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316CB70
		static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "CapsuleCast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316C9A0
		static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "CapsuleCast", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32");
			return invoker(point1, point2, radius, direction, hitInfo, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3171500
		static bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "SphereCast", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3171430
		static bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "SphereCast", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "UnityEngine.RaycastHit&", "System.Single", "System.Int32");
			return invoker(origin, radius, direction, hitInfo, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3171670
		static bool SphereCast(UnityEngine::Ray ray, float radius, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, float, UnityEngine::RaycastHit&, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "SphereCast", "UnityEngine.Ray", "System.Single", "UnityEngine.RaycastHit&", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(ray, radius, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3171740
		static bool SphereCast(UnityEngine::Ray ray, float radius, UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Ray, float, UnityEngine::RaycastHit&, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "SphereCast", "UnityEngine.Ray", "System.Single", "UnityEngine.RaycastHit&", "System.Single", "System.Int32");
			return invoker(ray, radius, hitInfo, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E910
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Vector3, UnityEngine::Vector3, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(origin, direction, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E860
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Vector3, UnityEngine::Vector3, float, int32_t> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "System.Int32");
			return invoker(origin, direction, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316EB80
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Vector3, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single");
			return invoker(origin, direction, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316EC20
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Vector3, UnityEngine::Vector3> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Vector3", "UnityEngine.Vector3");
			return invoker(origin, direction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316EAD0
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Ray, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Ray", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(ray, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E7C0
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Ray, float, int32_t> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Ray", "System.Single", "System.Int32");
			return invoker(ray, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E720
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Ray, float> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Ray", "System.Single");
			return invoker(ray, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316ECC0
		static Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Ray> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "RaycastAll", "UnityEngine.Ray");
			return invoker(ray);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F520
		static int32_t RaycastNonAlloc(UnityEngine::Ray ray, Array<UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Ray, Array<UnityEngine::RaycastHit>*, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(ray, results, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F060
		static int32_t RaycastNonAlloc(UnityEngine::Ray ray, Array<UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Ray, Array<UnityEngine::RaycastHit>*, float, int32_t> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32");
			return invoker(ray, results, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316ED50
		static int32_t RaycastNonAlloc(UnityEngine::Ray ray, Array<UnityEngine::RaycastHit>* results, float maxDistance)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Ray, Array<UnityEngine::RaycastHit>*, float> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Ray", "UnityEngine.RaycastHit[]", "System.Single");
			return invoker(ray, results, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316EEE0
		static int32_t RaycastNonAlloc(UnityEngine::Ray ray, Array<UnityEngine::RaycastHit>* results)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Ray, Array<UnityEngine::RaycastHit>*> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Ray", "UnityEngine.RaycastHit[]");
			return invoker(ray, results);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F6B0
		static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, Array<UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Vector3, UnityEngine::Vector3, Array<UnityEngine::RaycastHit>*, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(origin, direction, results, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F380
		static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, Array<UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Vector3, UnityEngine::Vector3, Array<UnityEngine::RaycastHit>*, float, int32_t> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single", "System.Int32");
			return invoker(origin, direction, results, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F1F0
		static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, Array<UnityEngine::RaycastHit>* results, float maxDistance)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Vector3, UnityEngine::Vector3, Array<UnityEngine::RaycastHit>*, float> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]", "System.Single");
			return invoker(origin, direction, results, maxDistance);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316F850
		static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, Array<UnityEngine::RaycastHit>* results)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Vector3, UnityEngine::Vector3, Array<UnityEngine::RaycastHit>*> invoker = METHOD_ADDRESS("System.Int32", "RaycastNonAlloc", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.RaycastHit[]");
			return invoker(origin, direction, results);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3171280
		static Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Vector3, float, UnityEngine::Vector3, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "SphereCastAll", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(origin, radius, direction, maxDistance, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B3171080
		static Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask)
		{
			static NaMethodInvoker<Array<UnityEngine::RaycastHit>*, UnityEngine::Vector3, float, UnityEngine::Vector3, float, int32_t> invoker = METHOD_ADDRESS("UnityEngine.RaycastHit[]", "SphereCastAll", "UnityEngine.Vector3", "System.Single", "UnityEngine.Vector3", "System.Single", "System.Int32");
			return invoker(origin, radius, direction, maxDistance, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E480
		static Array<UnityEngine::Collider*>* OverlapSphere(UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<Array<UnityEngine::Collider*>*, UnityEngine::Vector3, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("UnityEngine.Collider[]", "OverlapSphere", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(position, radius, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E3F0
		static Array<UnityEngine::Collider*>* OverlapSphere(UnityEngine::Vector3 position, float radius, int32_t layerMask)
		{
			static NaMethodInvoker<Array<UnityEngine::Collider*>*, UnityEngine::Vector3, float, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Collider[]", "OverlapSphere", "UnityEngine.Vector3", "System.Single", "System.Int32");
			return invoker(position, radius, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E570
		static Array<UnityEngine::Collider*>* OverlapSphere(UnityEngine::Vector3 position, float radius)
		{
			static NaMethodInvoker<Array<UnityEngine::Collider*>*, UnityEngine::Vector3, float> invoker = METHOD_ADDRESS("UnityEngine.Collider[]", "OverlapSphere", "UnityEngine.Vector3", "System.Single");
			return invoker(position, radius);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B3171AB0
		static bool get_reuseCollisionCallbacks()
		{
			static NaMethodInvoker<bool> invoker = METHOD_ADDRESS("System.Boolean", "get_reuseCollisionCallbacks");
			return invoker();
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316CE20
		static bool CheckSphere(UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, float, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Boolean", "CheckSphere", "UnityEngine.Vector3", "System.Single", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(position, radius, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316CF10
		static bool CheckSphere(UnityEngine::Vector3 position, float radius, int32_t layerMask)
		{
			static NaMethodInvoker<bool, UnityEngine::Vector3, float, int32_t> invoker = METHOD_ADDRESS("System.Boolean", "CheckSphere", "UnityEngine.Vector3", "System.Single", "System.Int32");
			return invoker(position, radius, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316DE60
		static Array<UnityEngine::Collider*>* OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, UnityEngine::Quaternion orientation, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<Array<UnityEngine::Collider*>*, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("UnityEngine.Collider[]", "OverlapBox", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Quaternion", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(center, halfExtents, orientation, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316DF80
		static Array<UnityEngine::Collider*>* OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, UnityEngine::Quaternion orientation, int32_t layerMask)
		{
			static NaMethodInvoker<Array<UnityEngine::Collider*>*, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Collider[]", "OverlapBox", "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.Quaternion", "System.Int32");
			return invoker(center, halfExtents, orientation, layerMask);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E1F0
		static int32_t OverlapCapsuleNonAlloc(UnityEngine::Vector3 point0, UnityEngine::Vector3 point1, float radius, Array<UnityEngine::Collider*>* results, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Vector3, UnityEngine::Vector3, float, Array<UnityEngine::Collider*>*, int32_t, UnityEngine::QueryTriggerInteraction> invoker = METHOD_ADDRESS("System.Int32", "OverlapCapsuleNonAlloc", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Collider[]", "System.Int32", "UnityEngine.QueryTriggerInteraction");
			return invoker(point0, point1, radius, results, layerMask, queryTriggerInteraction);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316E0D0
		static int32_t OverlapCapsuleNonAlloc(UnityEngine::Vector3 point0, UnityEngine::Vector3 point1, float radius, Array<UnityEngine::Collider*>* results, int32_t layerMask)
		{
			static NaMethodInvoker<int32_t, UnityEngine::Vector3, UnityEngine::Vector3, float, Array<UnityEngine::Collider*>*, int32_t> invoker = METHOD_ADDRESS("System.Int32", "OverlapCapsuleNonAlloc", "UnityEngine.Vector3", "UnityEngine.Vector3", "System.Single", "UnityEngine.Collider[]", "System.Int32");
			return invoker(point0, point1, radius, results, layerMask);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D060
		static UnityEngine::Collider* GetColliderByInstanceID(int32_t instanceID)
		{
			static NaMethodInvoker<UnityEngine::Collider*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Collider", "GetColliderByInstanceID", "System.Int32");
			return invoker(instanceID);
		}

		// Flags: Private | Famandassem | Assembly | Famorassem | Public | Static | Hidebysig
		// Addresss: 00007FF9B316D020
		static UnityEngine::Component* GetBodyByInstanceID(int32_t instanceID)
		{
			static NaMethodInvoker<UnityEngine::Component*, int32_t> invoker = METHOD_ADDRESS("UnityEngine.Component", "GetBodyByInstanceID", "System.Int32");
			return invoker(instanceID);
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B3171860
		static void StaticConstructor()
		{
			static NaMethodInvoker<void> invoker = METHOD_ADDRESS("System.Void", "StaticConstructor");
			invoker();
		}

		// Flags: Private | Assembly | Famorassem | Static | Hidebysig | Specialname
		// Addresss: 00007FF9B31719D0
		static void get_gravity_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_gravity_Injected", "UnityEngine.Vector3&");
			invoker(ret);
		}
	};

	// Name: UnityEngine::BoxCollider
// ClassType: Normal
// Flags: Private | Assembly | Famorassem
// Inheritance: UnityEngine::BoxCollider -> UnityEngine::Collider -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class BoxCollider : public UnityEngine::Collider
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "BoxCollider");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168270
		UnityEngine::Vector3 get_center()
		{
			static NaMethodInvoker<UnityEngine::Vector3, BoxCollider*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_center");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31683B0
		void set_center(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, BoxCollider*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_center", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168310
		UnityEngine::Vector3 get_size()
		{
			static NaMethodInvoker<UnityEngine::Vector3, BoxCollider*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_size");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168450
		void set_size(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, BoxCollider*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_size", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3168220
		void get_center_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, BoxCollider*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_center_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3168360
		void set_center_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, BoxCollider*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_center_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B31682C0
		void get_size_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, BoxCollider*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_size_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3168400
		void set_size_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, BoxCollider*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_size_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}
	};

	// Name: UnityEngine::CapsuleCollider
// ClassType: Normal
// Flags: Private | Assembly | Famorassem
// Inheritance: UnityEngine::CapsuleCollider -> UnityEngine::Collider -> UnityEngine::Component -> UnityEngine::Object -> System::Object
	class CapsuleCollider : public UnityEngine::Collider
	{
	public:
		CLASS("UnityEngine.PhysicsModule", "UnityEngine", "CapsuleCollider");

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31684F0
		UnityEngine::Vector3 get_center()
		{
			static NaMethodInvoker<UnityEngine::Vector3, CapsuleCollider*> invoker = METHOD_ADDRESS("UnityEngine.Vector3", "get_center");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168650
		void set_center(UnityEngine::Vector3 value)
		{
			static NaMethodInvoker<void, CapsuleCollider*, UnityEngine::Vector3> invoker = METHOD_ADDRESS("System.Void", "set_center", "UnityEngine.Vector3");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31685C0
		float get_radius()
		{
			static NaMethodInvoker<float, CapsuleCollider*> invoker = METHOD_ADDRESS("System.Single", "get_radius");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168730
		void set_radius(float value)
		{
			static NaMethodInvoker<void, CapsuleCollider*, float> invoker = METHOD_ADDRESS("System.Void", "set_radius", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168580
		float get_height()
		{
			static NaMethodInvoker<float, CapsuleCollider*> invoker = METHOD_ADDRESS("System.Single", "get_height");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31686E0
		void set_height(float value)
		{
			static NaMethodInvoker<void, CapsuleCollider*, float> invoker = METHOD_ADDRESS("System.Void", "set_height", "System.Single");
			invoker(this, value);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B3168540
		int32_t get_direction()
		{
			static NaMethodInvoker<int32_t, CapsuleCollider*> invoker = METHOD_ADDRESS("System.Int32", "get_direction");
			return invoker(this);
		}

		// Flags: Famandassem | Assembly | Family | Famorassem | Public | Hidebysig | Specialname
		// Addresss: 00007FF9B31686A0
		void set_direction(int32_t value)
		{
			static NaMethodInvoker<void, CapsuleCollider*, int32_t> invoker = METHOD_ADDRESS("System.Void", "set_direction", "System.Int32");
			invoker(this, value);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B31684A0
		void get_center_Injected(UnityEngine::Vector3& ret)
		{
			static NaMethodInvoker<void, CapsuleCollider*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "get_center_Injected", "UnityEngine.Vector3&");
			invoker(this, ret);
		}

		// Flags: Private | Assembly | Famorassem | Hidebysig | Specialname
		// Addresss: 00007FF9B3168600
		void set_center_Injected(UnityEngine::Vector3& value)
		{
			static NaMethodInvoker<void, CapsuleCollider*, UnityEngine::Vector3&> invoker = METHOD_ADDRESS("System.Void", "set_center_Injected", "UnityEngine.Vector3&");
			invoker(this, value);
		}
	};
}