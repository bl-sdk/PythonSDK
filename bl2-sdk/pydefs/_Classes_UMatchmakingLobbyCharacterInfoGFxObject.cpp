#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyCharacterInfoGFxObject(py::module &m)
{
    py::class_< UMatchmakingLobbyCharacterInfoGFxObject,  UGFxObject   >(m, "UMatchmakingLobbyCharacterInfoGFxObject")
        .def("SetInfo", &UMatchmakingLobbyCharacterInfoGFxObject::SetInfo)
          ;
}