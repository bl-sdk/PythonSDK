#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetTimeOfDay()
{
    py::class_< UBehavior_SetTimeOfDay,  UBehaviorBase   >("UBehavior_SetTimeOfDay")
        .def_readwrite("TimeOfDay", &UBehavior_SetTimeOfDay::TimeOfDay)
        .def("StaticClass", &UBehavior_SetTimeOfDay::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetTimeOfDay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}