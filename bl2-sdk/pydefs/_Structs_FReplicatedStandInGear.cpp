#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedStandInGear()
{
    class_< FReplicatedStandInGear >("FReplicatedStandInGear", no_init)
        .def_readwrite("Weapon1Data", &FReplicatedStandInGear::Weapon1Data)
        .def_readwrite("Weapon2Data", &FReplicatedStandInGear::Weapon2Data)
        .def_readwrite("ShieldData", &FReplicatedStandInGear::ShieldData)
        .def_readwrite("GrenadeModData", &FReplicatedStandInGear::GrenadeModData)
        .def_readwrite("ClassModData", &FReplicatedStandInGear::ClassModData)
  ;
}