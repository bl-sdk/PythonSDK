#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInteractiveObjectLootListDefinition()
{
    class_< UInteractiveObjectLootListDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInteractiveObjectLootListDefinition", no_init)
        .def_readwrite("LootData", &UInteractiveObjectLootListDefinition::LootData)
        .def("StaticClass", &UInteractiveObjectLootListDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}