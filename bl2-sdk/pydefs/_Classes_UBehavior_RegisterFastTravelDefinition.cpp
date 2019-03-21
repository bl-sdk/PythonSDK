#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RegisterFastTravelDefinition()
{
    py::class_< UBehavior_RegisterFastTravelDefinition,  UBehaviorBase   >("UBehavior_RegisterFastTravelDefinition")
        .def_readwrite("StationToRegister", &UBehavior_RegisterFastTravelDefinition::StationToRegister)
        .def("StaticClass", &UBehavior_RegisterFastTravelDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RegisterFastTravelDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}