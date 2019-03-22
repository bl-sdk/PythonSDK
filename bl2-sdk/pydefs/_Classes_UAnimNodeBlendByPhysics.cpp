#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeBlendByPhysics(py::module &m)
{
    py::class_< UAnimNodeBlendByPhysics,  UAnimNodeBlendList   >(m, "UAnimNodeBlendByPhysics")
        .def_readwrite("DelayBeforeStartingBlend", &UAnimNodeBlendByPhysics::DelayBeforeStartingBlend)
        .def_readwrite("WaitingToDoBlend", &UAnimNodeBlendByPhysics::WaitingToDoBlend)
        .def("StaticClass", &UAnimNodeBlendByPhysics::StaticClass, py::return_value_policy::reference)
          ;
}