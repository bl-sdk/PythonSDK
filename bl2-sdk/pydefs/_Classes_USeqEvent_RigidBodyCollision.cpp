#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_RigidBodyCollision()
{
    py::class_< USeqEvent_RigidBodyCollision,  USequenceEvent   >("USeqEvent_RigidBodyCollision")
        .def_readwrite("MinCollisionVelocity", &USeqEvent_RigidBodyCollision::MinCollisionVelocity)
        .def("StaticClass", &USeqEvent_RigidBodyCollision::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}