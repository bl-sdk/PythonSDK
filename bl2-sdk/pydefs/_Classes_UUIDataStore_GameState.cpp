#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_GameState()
{
    py::class_< UUIDataStore_GameState,  UUIDataStore   >("UUIDataStore_GameState")
        .def("StaticClass", &UUIDataStore_GameState::StaticClass, py::return_value_policy::reference)
        .def("NotifyGameSessionEnded", &UUIDataStore_GameState::NotifyGameSessionEnded)
        .def("OnRefreshDataFieldValue", &UUIDataStore_GameState::OnRefreshDataFieldValue)
        .staticmethod("StaticClass")
  ;
}