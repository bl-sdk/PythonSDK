#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowCoverStanceDefinition()
{
    class_< UWillowCoverStanceDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowCoverStanceDefinition", no_init)
        .def_readwrite("AimProfile", &UWillowCoverStanceDefinition::AimProfile)
        .def_readwrite("Enter", &UWillowCoverStanceDefinition::Enter)
        .def_readwrite("Exit", &UWillowCoverStanceDefinition::Exit)
        .def_readwrite("Idle", &UWillowCoverStanceDefinition::Idle)
        .def_readwrite("FireEnter", &UWillowCoverStanceDefinition::FireEnter)
        .def_readwrite("FireExit", &UWillowCoverStanceDefinition::FireExit)
        .def_readwrite("FireIdle", &UWillowCoverStanceDefinition::FireIdle)
        .def("StaticClass", &UWillowCoverStanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}