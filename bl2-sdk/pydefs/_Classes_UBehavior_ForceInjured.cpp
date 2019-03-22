#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ForceInjured(py::module &m)
{
    py::class_< UBehavior_ForceInjured,  UBehaviorBase   >(m, "UBehavior_ForceInjured")
        .def("StaticClass", &UBehavior_ForceInjured::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ForceInjured::ApplyBehaviorToContext)
          ;
}