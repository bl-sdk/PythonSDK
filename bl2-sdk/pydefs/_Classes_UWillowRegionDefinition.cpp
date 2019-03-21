#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowRegionDefinition()
{
    class_< UWillowRegionDefinition, bases< URegionDefinition >  , boost::noncopyable>("UWillowRegionDefinition", no_init)
        .def_readwrite("DlcExpansion", &UWillowRegionDefinition::DlcExpansion)
        .def("StaticClass", &UWillowRegionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetAwesomeLevelOverride", &UWillowRegionDefinition::SetAwesomeLevelOverride)
        .def("SetGameStageOverride", &UWillowRegionDefinition::SetGameStageOverride)
        .def("GetDefaultRegionGameStage", &UWillowRegionDefinition::GetDefaultRegionGameStage)
        .def("TestRegionGameStage", &UWillowRegionDefinition::TestRegionGameStage)
        .def("GetRegionGameStage", &UWillowRegionDefinition::GetRegionGameStage)
        .staticmethod("StaticClass")
  ;
}