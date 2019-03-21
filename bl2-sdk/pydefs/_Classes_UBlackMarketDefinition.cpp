#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBlackMarketDefinition()
{
    class_< UBlackMarketDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBlackMarketDefinition", no_init)
        .def_readwrite("BlackMarketName", &UBlackMarketDefinition::BlackMarketName)
        .def_readwrite("ItemOfTheDay", &UBlackMarketDefinition::ItemOfTheDay)
        .def_readwrite("GeneralStock", &UBlackMarketDefinition::GeneralStock)
        .def_readwrite("MaxUpgradeLevel", &UBlackMarketDefinition::MaxUpgradeLevel)
        .def_readwrite("MaxUpgradeLevelOverrides", &UBlackMarketDefinition::MaxUpgradeLevelOverrides)
        .def("StaticClass", &UBlackMarketDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("CurrentLevelIsBelowMaxForPlayer", &UBlackMarketDefinition::CurrentLevelIsBelowMaxForPlayer)
        .def("CurrentLevelIsBelowMaxLevel", &UBlackMarketDefinition::CurrentLevelIsBelowMaxLevel)
        .staticmethod("StaticClass")
  ;
}