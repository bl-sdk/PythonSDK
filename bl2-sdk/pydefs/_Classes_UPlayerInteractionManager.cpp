#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerInteractionManager(py::module &m)
{
    py::class_< UPlayerInteractionManager,  UObject   >(m, "UPlayerInteractionManager")
        .def_readwrite("Interactions", &UPlayerInteractionManager::Interactions)
        .def_readwrite("TickDelay", &UPlayerInteractionManager::TickDelay)
        .def_readwrite("TimeToTick", &UPlayerInteractionManager::TimeToTick)
        .def("GetInteractionPlayers", &UPlayerInteractionManager::GetInteractionPlayers)
        .def("IsInInteraction", &UPlayerInteractionManager::IsInInteraction)
        .def("GetServerForPlayer", &UPlayerInteractionManager::GetServerForPlayer, py::return_value_policy::reference)
        .def("GetInstigator", &UPlayerInteractionManager::GetInstigator, py::return_value_policy::reference)
        .def("RelayMessage", &UPlayerInteractionManager::RelayMessage)
        .def("StartInteraction", &UPlayerInteractionManager::StartInteraction)
          ;
}