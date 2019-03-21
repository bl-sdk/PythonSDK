#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTeleportKeyData()
{
    py::class_< FTeleportKeyData >("FTeleportKeyData")
        .def_readwrite("KeyTime", &FTeleportKeyData::KeyTime)
        .def_readwrite("LocationKey", &FTeleportKeyData::LocationKey)
        .def_readwrite("RotationKey", &FTeleportKeyData::RotationKey)
  ;
}