#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxViewShakeInfo(py::object m)
{
    py::class_< FGearboxViewShakeInfo >(m, "FGearboxViewShakeInfo")
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