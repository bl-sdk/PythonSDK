#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearboxViewShakeInfo()
{
    class_< FGearboxViewShakeInfo >("FGearboxViewShakeInfo", no_init)
        .def_readwrite("OffsetMag", &FGearboxViewShakeInfo::OffsetMag)
        .def_readwrite("OffsetRate", &FGearboxViewShakeInfo::OffsetRate)
        .def_readwrite("OffsetTime", &FGearboxViewShakeInfo::OffsetTime)
        .def_readwrite("RotMag", &FGearboxViewShakeInfo::RotMag)
        .def_readwrite("RotRate", &FGearboxViewShakeInfo::RotRate)
        .def_readwrite("RotTime", &FGearboxViewShakeInfo::RotTime)
        .def_readwrite("FOVMag", &FGearboxViewShakeInfo::FOVMag)
        .def_readwrite("FOVRate", &FGearboxViewShakeInfo::FOVRate)
        .def_readwrite("FOVTime", &FGearboxViewShakeInfo::FOVTime)
  ;
}