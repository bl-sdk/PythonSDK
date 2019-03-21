#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPhysicsBehavior()
{
    py::class_< UIPhysicsBehavior,  UInterface   >("UIPhysicsBehavior")
        .def("StaticClass", &UIPhysicsBehavior::StaticClass, py::return_value_policy::reference)
        .def("GetDamageVector", &UIPhysicsBehavior::GetDamageVector)
        .def("GetRigidBodyMesh", &UIPhysicsBehavior::GetRigidBodyMesh, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}