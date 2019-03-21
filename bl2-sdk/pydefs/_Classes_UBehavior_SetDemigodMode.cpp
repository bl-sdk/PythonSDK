#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDemigodMode()
{
    py::class_< UBehavior_SetDemigodMode,  UBehaviorBase   >("UBehavior_SetDemigodMode")
        .def_readwrite("Status", &UBehavior_SetDemigodMode::Status)
        .def("StaticClass", &UBehavior_SetDemigodMode::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetDemigodMode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}