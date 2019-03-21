#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIRBCollisionListener()
{
    py::class_< UIRBCollisionListener,  UInterface   >("UIRBCollisionListener")
        .def("StaticClass", &UIRBCollisionListener::StaticClass, py::return_value_policy::reference)
        .def("NotifyRigidBodyCollision", &UIRBCollisionListener::NotifyRigidBodyCollision)
        .staticmethod("StaticClass")
  ;
}