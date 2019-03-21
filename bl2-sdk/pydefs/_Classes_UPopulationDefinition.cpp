#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationDefinition()
{
    class_< UPopulationDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPopulationDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UPopulationDefinition::VfTable_IIConstructObject)
        .def_readwrite("ActorArchetypeList", &UPopulationDefinition::ActorArchetypeList)
        .def_readwrite("RespawnStyle", &UPopulationDefinition::RespawnStyle)
        .def("StaticClass", &UPopulationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsAllSpawnTypesDebugEnabled", &UPopulationDefinition::IsAllSpawnTypesDebugEnabled)
        .def("ToggleAllSpawnTypesDebug", &UPopulationDefinition::ToggleAllSpawnTypesDebug)
        .def("GetRandomFactory", &UPopulationDefinition::GetRandomFactory, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}