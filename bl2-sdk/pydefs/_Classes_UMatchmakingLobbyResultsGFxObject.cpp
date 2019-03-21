#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyResultsGFxObject()
{
    py::class_< UMatchmakingLobbyResultsGFxObject,  UGFxObject   >("UMatchmakingLobbyResultsGFxObject")
        .def("StaticClass", &UMatchmakingLobbyResultsGFxObject::StaticClass, py::return_value_policy::reference)
        .def("UpdateResult", &UMatchmakingLobbyResultsGFxObject::UpdateResult)
        .staticmethod("StaticClass")
  ;
}