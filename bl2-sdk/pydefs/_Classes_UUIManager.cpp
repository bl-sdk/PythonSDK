#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIManager(py::module &m)
{
    py::class_< UUIManager,  UObject   >(m, "UUIManager")
        .def("StaticClass", &UUIManager::StaticClass, py::return_value_policy::reference)
        .def("NotifyPlayerRemoved", &UUIManager::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UUIManager::NotifyPlayerAdded)
        .def("eventPauseGame", &UUIManager::eventPauseGame)
        .def("CanUnpauseInternalUI", &UUIManager::CanUnpauseInternalUI)
        .def("GetUIManager", &UUIManager::GetUIManager, py::return_value_policy::reference)
          ;
}