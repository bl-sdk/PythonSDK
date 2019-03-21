#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DetachActor()
{
    py::class_< UBehavior_DetachActor,  UBehaviorBase   >("UBehavior_DetachActor")
        .def_readwrite("DetachDirection", &UBehavior_DetachActor::DetachDirection)
        .def_readwrite("DetachSpeed", &UBehavior_DetachActor::DetachSpeed)
        .def("StaticClass", &UBehavior_DetachActor::StaticClass, py::return_value_policy::reference)
        .def("ApplyDetachVelocity", &UBehavior_DetachActor::ApplyDetachVelocity)
        .def("CalculateDetachVelocity", &UBehavior_DetachActor::CalculateDetachVelocity)
        .def("DetachActor", &UBehavior_DetachActor::DetachActor)
        .def("ApplyBehaviorToContext", &UBehavior_DetachActor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}