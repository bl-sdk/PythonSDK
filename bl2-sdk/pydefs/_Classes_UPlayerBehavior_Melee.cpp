#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_Melee(py::module &m)
{
    py::class_< UPlayerBehavior_Melee,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_Melee")
        .def("ApplyBehaviorToContext", &UPlayerBehavior_Melee::ApplyBehaviorToContext)
          ;
}