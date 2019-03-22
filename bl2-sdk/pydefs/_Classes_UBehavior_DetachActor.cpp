#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DetachActor(py::module &m)
{
    py::class_< UBehavior_DetachActor,  UBehaviorBase   >(m, "UBehavior_DetachActor")
        .def_readwrite("DetachDirection", &UBehavior_DetachActor::DetachDirection)
        .def_readwrite("DetachSpeed", &UBehavior_DetachActor::DetachSpeed)
        .def("ApplyDetachVelocity", &UBehavior_DetachActor::ApplyDetachVelocity)
        .def("CalculateDetachVelocity", &UBehavior_DetachActor::CalculateDetachVelocity)
        .def("DetachActor", &UBehavior_DetachActor::DetachActor)
        .def("ApplyBehaviorToContext", &UBehavior_DetachActor::ApplyBehaviorToContext)
          ;
}