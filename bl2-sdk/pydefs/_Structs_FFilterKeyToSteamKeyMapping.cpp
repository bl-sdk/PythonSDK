#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFilterKeyToSteamKeyMapping(py::module &m)
{
    py::class_< FFilterKeyToSteamKeyMapping >(m, "FFilterKeyToSteamKeyMapping")
        .def_readwrite("KeyId", &FFilterKeyToSteamKeyMapping::KeyId)
        .def_readwrite("KeyType", &FFilterKeyToSteamKeyMapping::KeyType)
        .def_readwrite("RawKey", &FFilterKeyToSteamKeyMapping::RawKey)
        .def_readwrite("SteamKey", &FFilterKeyToSteamKeyMapping::SteamKey)
        .def_readwrite("IgnoreValue", &FFilterKeyToSteamKeyMapping::IgnoreValue)
  ;
}