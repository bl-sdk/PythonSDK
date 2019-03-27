#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSteamPlayerClanData(py::module &m)
{
    py::class_< FSteamPlayerClanData >(m, "FSteamPlayerClanData")
        .def_readwrite("ClanName", &FSteamPlayerClanData::ClanName)
        .def_readwrite("ClanTag", &FSteamPlayerClanData::ClanTag)
  ;
}