#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysXSceneProperties(py::module &m)
{
    py::class_< FPhysXSceneProperties >(m, "FPhysXSceneProperties")
        .def_readwrite("PrimaryScene", &FPhysXSceneProperties::PrimaryScene)
        .def_readwrite("CompartmentRigidBody", &FPhysXSceneProperties::CompartmentRigidBody)
        .def_readwrite("CompartmentFluid", &FPhysXSceneProperties::CompartmentFluid)
        .def_readwrite("CompartmentCloth", &FPhysXSceneProperties::CompartmentCloth)
        .def_readwrite("CompartmentSoftBody", &FPhysXSceneProperties::CompartmentSoftBody)
  ;
}