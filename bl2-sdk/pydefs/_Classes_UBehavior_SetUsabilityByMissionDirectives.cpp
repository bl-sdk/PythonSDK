#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsabilityByMissionDirectives()
{
    py::class_< UBehavior_SetUsabilityByMissionDirectives,  UBehaviorBase   >("UBehavior_SetUsabilityByMissionDirectives")
        .def_readwrite("ChangeUsability", &UBehavior_SetUsabilityByMissionDirectives::ChangeUsability)
        .def("StaticClass", &UBehavior_SetUsabilityByMissionDirectives::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetUsabilityByMissionDirectives::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}