#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetStance(py::module &m)
{
    py::class_< UBehavior_SetStance,  UBehaviorBase   >(m, "UBehavior_SetStance")
        .def_readwrite("SetType", &UBehavior_SetStance::SetType)
        .def_readwrite("StanceType", &UBehavior_SetStance::StanceType)
        .def("StaticClass", &UBehavior_SetStance::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetStance::ApplyBehaviorToContext)
          ;
}