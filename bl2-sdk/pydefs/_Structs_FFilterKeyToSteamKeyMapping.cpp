#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFilterKeyToSteamKeyMapping()
{
    class_< FFilterKeyToSteamKeyMapping >("FFilterKeyToSteamKeyMapping", no_init)
        .def_readwrite("KeyId", &FFilterKeyToSteamKeyMapping::KeyId)
        .def_readwrite("KeyType", &FFilterKeyToSteamKeyMapping::KeyType)
        .def_readwrite("RawKey", &FFilterKeyToSteamKeyMapping::RawKey)
        .def_readwrite("SteamKey", &FFilterKeyToSteamKeyMapping::SteamKey)
        .def_readwrite("IgnoreValue", &FFilterKeyToSteamKeyMapping::IgnoreValue)
  ;
}