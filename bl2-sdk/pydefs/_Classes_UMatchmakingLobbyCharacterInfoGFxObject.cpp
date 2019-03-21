#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyCharacterInfoGFxObject(py::object m)
{
    py::class_< UMatchmakingLobbyCharacterInfoGFxObject,  UGFxObject   >(m, "UMatchmakingLobbyCharacterInfoGFxObject")
        .def("StaticClass", &UMatchmakingLobbyCharacterInfoGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetInfo", &UMatchmakingLobbyCharacterInfoGFxObject::SetInfo)
          ;
}