#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URegionDefinition()
{
    class_< URegionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("URegionDefinition", no_init)
        .def("StaticClass", &URegionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDefaultRegionGameStage", &URegionDefinition::GetDefaultRegionGameStage)
        .def("TestRegionGameStage", &URegionDefinition::TestRegionGameStage)
        .def("GetRegionGameStage", &URegionDefinition::GetRegionGameStage)
        .staticmethod("StaticClass")
  ;
}