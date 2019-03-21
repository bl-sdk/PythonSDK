#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedStandInGear()
{
    py::class_< FReplicatedStandInGear >("FReplicatedStandInGear")
        .def_readwrite("Weapon1Data", &FReplicatedStandInGear::Weapon1Data)
        .def_readwrite("Weapon2Data", &FReplicatedStandInGear::Weapon2Data)
        .def_readwrite("ShieldData", &FReplicatedStandInGear::ShieldData)
        .def_readwrite("GrenadeModData", &FReplicatedStandInGear::GrenadeModData)
        .def_readwrite("ClassModData", &FReplicatedStandInGear::ClassModData)
  ;
}