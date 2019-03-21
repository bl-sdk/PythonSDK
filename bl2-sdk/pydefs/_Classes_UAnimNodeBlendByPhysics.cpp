#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByPhysics()
{
    py::class_< UAnimNodeBlendByPhysics,  UAnimNodeBlendList   >("UAnimNodeBlendByPhysics")
        .def_readwrite("DelayBeforeStartingBlend", &UAnimNodeBlendByPhysics::DelayBeforeStartingBlend)
        .def_readwrite("WaitingToDoBlend", &UAnimNodeBlendByPhysics::WaitingToDoBlend)
        .def("StaticClass", &UAnimNodeBlendByPhysics::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}