#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetInfoBarVisibility()
{
    py::class_< UBehavior_SetInfoBarVisibility,  UBehaviorBase   >("UBehavior_SetInfoBarVisibility")
        .def("StaticClass", &UBehavior_SetInfoBarVisibility::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetInfoBarVisibility::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}