#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIManager()
{
    class_< UUIManager, bases< UObject >  , boost::noncopyable>("UUIManager", no_init)
        .def("StaticClass", &UUIManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyPlayerRemoved", &UUIManager::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UUIManager::NotifyPlayerAdded)
        .def("eventPauseGame", &UUIManager::eventPauseGame)
        .def("CanUnpauseInternalUI", &UUIManager::CanUnpauseInternalUI)
        .def("GetUIManager", &UUIManager::GetUIManager, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}