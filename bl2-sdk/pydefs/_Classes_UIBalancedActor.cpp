#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBalancedActor(py::module &m)
{
    py::class_< UIBalancedActor,  UInterface   >(m, "UIBalancedActor")
		.def_static("StaticClass", &UIBalancedActor::StaticClass, py::return_value_policy::reference)
        .def("GetBalancedActorTypeIdentifier", &UIBalancedActor::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &UIBalancedActor::SetExpLevel)
        .def("SetAwesomeLevel", &UIBalancedActor::SetAwesomeLevel)
        .def("SetGameStage", &UIBalancedActor::SetGameStage)
        .def("GetExpLevelForEquip", &UIBalancedActor::GetExpLevelForEquip)
        .def("GetExpLevel", &UIBalancedActor::GetExpLevel)
        .def("GetAwesomeLevel", &UIBalancedActor::GetAwesomeLevel)
        .def("GetGameStage", &UIBalancedActor::GetGameStage)
          ;
}