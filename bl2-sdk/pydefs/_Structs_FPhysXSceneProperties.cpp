#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysXSceneProperties()
{
    class_< FPhysXSceneProperties >("FPhysXSceneProperties", no_init)
        .def_readwrite("PrimaryScene", &FPhysXSceneProperties::PrimaryScene)
        .def_readwrite("CompartmentRigidBody", &FPhysXSceneProperties::CompartmentRigidBody)
        .def_readwrite("CompartmentFluid", &FPhysXSceneProperties::CompartmentFluid)
        .def_readwrite("CompartmentCloth", &FPhysXSceneProperties::CompartmentCloth)
        .def_readwrite("CompartmentSoftBody", &FPhysXSceneProperties::CompartmentSoftBody)
  ;
}