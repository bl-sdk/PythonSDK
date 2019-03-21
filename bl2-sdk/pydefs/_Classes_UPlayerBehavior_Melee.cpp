#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_Melee(py::object m)
{
    py::class_< UPlayerBehavior_Melee,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_Melee")
        .def("StaticClass", &UPlayerBehavior_Melee::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_Melee::ApplyBehaviorToContext)
          ;
}