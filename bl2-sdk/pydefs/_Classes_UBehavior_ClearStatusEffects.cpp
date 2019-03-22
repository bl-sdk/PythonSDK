#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClearStatusEffects(py::module &m)
{
    py::class_< UBehavior_ClearStatusEffects,  UBehaviorBase   >(m, "UBehavior_ClearStatusEffects")
        .def("ApplyBehaviorToContext", &UBehavior_ClearStatusEffects::ApplyBehaviorToContext)
          ;
}