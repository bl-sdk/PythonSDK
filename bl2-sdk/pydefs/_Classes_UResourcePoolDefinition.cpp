#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourcePoolDefinition(py::module &m)
{
    py::class_< UResourcePoolDefinition,  UGBXDefinition   >(m, "UResourcePoolDefinition")
        .def_readwrite("Resource", &UResourcePoolDefinition::Resource)
        .def_readwrite("NetRelevancy", &UResourcePoolDefinition::NetRelevancy)
        .def_readwrite("RegenerationResource", &UResourcePoolDefinition::RegenerationResource)
        .def_readwrite("BaseMinValue", &UResourcePoolDefinition::BaseMinValue)
        .def_readwrite("BaseMaxValue", &UResourcePoolDefinition::BaseMaxValue)
        .def_readwrite("StartingValue", &UResourcePoolDefinition::StartingValue)
        .def_readwrite("BaseConsumptionRate", &UResourcePoolDefinition::BaseConsumptionRate)
        .def_readwrite("BaseActiveRegenerationRate", &UResourcePoolDefinition::BaseActiveRegenerationRate)
        .def_readwrite("BasePassiveRegenerationRate", &UResourcePoolDefinition::BasePassiveRegenerationRate)
        .def_readwrite("BaseOnIdleRegenerationRate", &UResourcePoolDefinition::BaseOnIdleRegenerationRate)
        .def_readwrite("BaseOnIdleRegenerationDelay", &UResourcePoolDefinition::BaseOnIdleRegenerationDelay)
        .def_readwrite("RecentImpulseTimer", &UResourcePoolDefinition::RecentImpulseTimer)
        .def_readwrite("PercBarPulseSpeed", &UResourcePoolDefinition::PercBarPulseSpeed)
        .def_readwrite("PercPulseResourceLow", &UResourcePoolDefinition::PercPulseResourceLow)
        .def_readwrite("OnResourceDepleted", &UResourcePoolDefinition::OnResourceDepleted)
        .def_readwrite("OnResourceNotDepleted", &UResourcePoolDefinition::OnResourceNotDepleted)
        .def_readwrite("OnResourceRegenerated", &UResourcePoolDefinition::OnResourceRegenerated)
        .def_readwrite("OnResourceNotRegenerated", &UResourcePoolDefinition::OnResourceNotRegenerated)
        .def_readwrite("UpgradeLevelAttribute", &UResourcePoolDefinition::UpgradeLevelAttribute)
        .def_readwrite("TotalUpgradeCount", &UResourcePoolDefinition::TotalUpgradeCount)
        .def_readwrite("MaxValueUpgrade", &UResourcePoolDefinition::MaxValueUpgrade)
          ;
}