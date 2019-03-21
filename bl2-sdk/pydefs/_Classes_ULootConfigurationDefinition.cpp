#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULootConfigurationDefinition()
{
    class_< ULootConfigurationDefinition, bases< UGBXDefinition >  , boost::noncopyable>("ULootConfigurationDefinition", no_init)
        .def_readwrite("Loot", &ULootConfigurationDefinition::Loot)
        .def_readwrite("Probability", &ULootConfigurationDefinition::Probability)
        .def("StaticClass", &ULootConfigurationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}