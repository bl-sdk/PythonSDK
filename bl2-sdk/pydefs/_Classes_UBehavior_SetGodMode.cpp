#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetGodMode(py::module &m)
{
    py::class_< UBehavior_SetGodMode,  UBehaviorBase   >(m, "UBehavior_SetGodMode")
        .def("StaticClass", &UBehavior_SetGodMode::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetGodMode::ApplyBehaviorToContext)
          ;
}