#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSteamPlayerClanData()
{
    class_< FSteamPlayerClanData >("FSteamPlayerClanData", no_init)
        .def_readwrite("ClanName", &FSteamPlayerClanData::ClanName)
        .def_readwrite("ClanTag", &FSteamPlayerClanData::ClanTag)
  ;
}