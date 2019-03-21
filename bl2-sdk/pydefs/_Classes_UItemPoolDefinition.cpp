#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UItemPoolDefinition()
{
    class_< UItemPoolDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UItemPoolDefinition", no_init)
        .def_readwrite("CheatSpawnLevel", &UItemPoolDefinition::CheatSpawnLevel)
        .def_readwrite("BalancedItems", &UItemPoolDefinition::BalancedItems)
        .def_readwrite("Quantity", &UItemPoolDefinition::Quantity)
        .def_readwrite("MinGameStageRequirement", &UItemPoolDefinition::MinGameStageRequirement)
        .def_readwrite("MaxGameStageRequirement", &UItemPoolDefinition::MaxGameStageRequirement)
        .def("StaticClass", &UItemPoolDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}