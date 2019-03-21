#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABlackMarketUpgradeManager()
{
    class_< ABlackMarketUpgradeManager, bases< AActor >  , boost::noncopyable>("ABlackMarketUpgradeManager", no_init)
        .def_readwrite("VfTable_IIBehaviorConsumer", &ABlackMarketUpgradeManager::VfTable_IIBehaviorConsumer)
        .def_readwrite("BehaviorConsumerHandle", &ABlackMarketUpgradeManager::BehaviorConsumerHandle)
        .def("StaticClass", &ABlackMarketUpgradeManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitAllBlackMarketUpgrades", &ABlackMarketUpgradeManager::InitAllBlackMarketUpgrades)
        .def("GetBehaviorConsumerHandle", &ABlackMarketUpgradeManager::GetBehaviorConsumerHandle)
        .staticmethod("StaticClass")
  ;
}