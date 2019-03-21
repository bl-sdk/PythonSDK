#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMatchmakingLobbyResultsGFxObject(py::object m)
{
    py::class_< UMatchmakingLobbyResultsGFxObject,  UGFxObject   >(m, "UMatchmakingLobbyResultsGFxObject")
        .def("StaticClass", &UMatchmakingLobbyResultsGFxObject::StaticClass, py::return_value_policy::reference)
        .def("UpdateResult", &UMatchmakingLobbyResultsGFxObject::UpdateResult)
          ;
}