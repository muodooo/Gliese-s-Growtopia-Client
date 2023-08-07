//A unity build is a way to compile a lot of .cpp files in one - without this, the android .mak file freaks
//out when too many file are added (in windows, at least)
//Has nothing to do with Unity3D


#include "BulletCollision/Gimpact/gim_math.h"
#include "BulletCollision/Gimpact/btGImpactBvh.h"
#include "BulletCollision/Gimpact/gim_box_collision.h"

#include "BulletCollision/Gimpact/btContactProcessing.cpp"
#include "BulletCollision/Gimpact/btGenericPoolAllocator.cpp"
#include "BulletCollision/Gimpact/btGImpactBvh.cpp"
#include "BulletCollision/Gimpact/btGImpactCollisionAlgorithm.cpp"
#include "BulletCollision/Gimpact/btGImpactQuantizedBvh.cpp"
#include "BulletCollision/Gimpact/btGImpactShape.cpp"
#include "BulletCollision/Gimpact/btTriangleShapeEx.cpp"
#include "BulletCollision/Gimpact/gim_memory.cpp"
#include "BulletCollision/Gimpact/gim_tri_collision.cpp"
#include "BulletCollision/NarrowPhaseCollision/btContinuousConvexCollision.cpp"
#include "BulletCollision/NarrowPhaseCollision/btConvexCast.cpp"
#include "BulletCollision/NarrowPhaseCollision/btGjkConvexCast.cpp"
#include "BulletCollision/NarrowPhaseCollision/btGjkEpa2.cpp"
#include "BulletCollision/NarrowPhaseCollision/btGjkEpaPenetrationDepthSolver.cpp"
#include "BulletCollision/NarrowPhaseCollision/btGjkPairDetector.cpp"
#include "BulletCollision/NarrowPhaseCollision/btMinkowskiPenetrationDepthSolver.cpp"
#include "BulletCollision/NarrowPhaseCollision/btPersistentManifold.cpp"
#include "BulletCollision/NarrowPhaseCollision/btRaycastCallback.cpp"
#include "BulletCollision/NarrowPhaseCollision/btSubSimplexConvexCast.cpp"
#include "BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.cpp"
#include "BulletDynamics/Character/btKinematicCharacterController.cpp"
#include "BulletDynamics/ConstraintSolver/btConeTwistConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btContactConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btHinge2Constraint.cpp"
#include "BulletDynamics/ConstraintSolver/btHingeConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btPoint2PointConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.cpp"
#include "BulletDynamics/ConstraintSolver/btSliderConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btSolve2LinearConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btTypedConstraint.cpp"
#include "BulletDynamics/ConstraintSolver/btUniversalConstraint.cpp"
#include "BulletDynamics/Dynamics/btContinuousDynamicsWorld.cpp"
#include "BulletDynamics/Dynamics/btDiscreteDynamicsWorld.cpp"
#include "BulletDynamics/Dynamics/btRigidBody.cpp"
#include "BulletDynamics/Dynamics/btSimpleDynamicsWorld.cpp"
#include "BulletDynamics/Dynamics/Bullet-C-API.cpp"
#include "BulletDynamics/Vehicle/btRaycastVehicle.cpp"
#include "BulletDynamics/Vehicle/btWheelInfo.cpp"
#include "LinearMath/btAlignedAllocator.cpp"
#include "LinearMath/btConvexHull.cpp"
#include "LinearMath/btGeometryUtil.cpp"
#include "LinearMath/btQuickprof.cpp"
#include "LinearMath/btSerializer.cpp"
#include "BulletSoftBody/btDefaultSoftBodySolver.cpp"
#include "BulletSoftBody/btSoftBody.cpp"
#include "BulletSoftBody/btSoftBodyConcaveCollisionAlgorithm.cpp"
#include "BulletSoftBody/btSoftBodyHelpers.cpp"
#include "BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.cpp"
#include "BulletSoftBody/btSoftRigidCollisionAlgorithm.cpp"
#include "BulletSoftBody/btSoftRigidDynamicsWorld.cpp"
#include "BulletSoftBody/btSoftSoftCollisionAlgorithm.cpp"