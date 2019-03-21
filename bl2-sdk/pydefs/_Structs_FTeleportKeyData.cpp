#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTeleportKeyData()
{
    class_< FTeleportKeyData >("FTeleportKeyData", no_init)
        .def_readwrite("KeyTime", &FTeleportKeyData::KeyTime)
        .def_readwrite("LocationKey", &FTeleportKeyData::LocationKey)
        .def_readwrite("RotationKey", &FTeleportKeyData::RotationKey)
  ;
}