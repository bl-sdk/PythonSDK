#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CheckMapChangeConditions(py::module &m)
{
    py::class_< UBehavior_CheckMapChangeConditions,  UBehaviorBase   >(m, "UBehavior_CheckMapChangeConditions")
		.def_static("StaticClass", &UBehavior_CheckMapChangeConditions::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MapChangeCustomEvent", &UBehavior_CheckMapChangeConditions::MapChangeCustomEvent)
        .def_readwrite("PlayerBusyCustomEvent", &UBehavior_CheckMapChangeConditions::PlayerBusyCustomEvent)
        .def("PlayerBusyEvent", &UBehavior_CheckMapChangeConditions::PlayerBusyEvent)
        .def("MapChangeEvent", &UBehavior_CheckMapChangeConditions::MapChangeEvent)
        .def("GetDestinationStationDefinition", &UBehavior_CheckMapChangeConditions::GetDestinationStationDefinition, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CheckMapChangeConditions::ApplyBehaviorToContext)
          ;
}