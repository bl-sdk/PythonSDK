#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IsCensoredMode()
{
    py::class_< UBehavior_IsCensoredMode,  UBehaviorBase   >("UBehavior_IsCensoredMode")
        .def("StaticClass", &UBehavior_IsCensoredMode::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IsCensoredMode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}