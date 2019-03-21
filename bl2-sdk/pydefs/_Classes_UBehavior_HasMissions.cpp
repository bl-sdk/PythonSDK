#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_HasMissions()
{
    py::class_< UBehavior_HasMissions,  UBehaviorBase   >("UBehavior_HasMissions")
        .def("StaticClass", &UBehavior_HasMissions::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_HasMissions::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}