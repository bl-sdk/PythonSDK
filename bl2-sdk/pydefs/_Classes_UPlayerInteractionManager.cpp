#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerInteractionManager()
{
    class_< UPlayerInteractionManager, bases< UObject >  , boost::noncopyable>("UPlayerInteractionManager", no_init)
        .def_readwrite("Interactions", &UPlayerInteractionManager::Interactions)
        .def_readwrite("TickDelay", &UPlayerInteractionManager::TickDelay)
        .def_readwrite("TimeToTick", &UPlayerInteractionManager::TimeToTick)
        .def("StaticClass", &UPlayerInteractionManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetInteractionPlayers", &UPlayerInteractionManager::GetInteractionPlayers)
        .def("IsInInteraction", &UPlayerInteractionManager::IsInInteraction)
        .def("GetServerForPlayer", &UPlayerInteractionManager::GetServerForPlayer, return_value_policy< reference_existing_object >())
        .def("GetInstigator", &UPlayerInteractionManager::GetInstigator, return_value_policy< reference_existing_object >())
        .def("RelayMessage", &UPlayerInteractionManager::RelayMessage)
        .def("StartInteraction", &UPlayerInteractionManager::StartInteraction)
        .staticmethod("StaticClass")
  ;
}