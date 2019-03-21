#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlackMarketUpgradeManager(py::object m)
{
    py::class_< ABlackMarketUpgradeManager,  AActor   >(m, "ABlackMarketUpgradeManager")
        .def_readwrite("VfTable_IIBehaviorConsumer", &ABlackMarketUpgradeManager::VfTable_IIBehaviorConsumer)
        .def_readwrite("BehaviorConsumerHandle", &ABlackMarketUpgradeManager::BehaviorConsumerHandle)
        .def("StaticClass", &ABlackMarketUpgradeManager::StaticClass, py::return_value_policy::reference)
        .def("InitAllBlackMarketUpgrades", &ABlackMarketUpgradeManager::InitAllBlackMarketUpgrades)
        .def("GetBehaviorConsumerHandle", &ABlackMarketUpgradeManager::GetBehaviorConsumerHandle)
          ;
}