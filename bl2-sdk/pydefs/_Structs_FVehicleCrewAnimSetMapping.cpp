#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleCrewAnimSetMapping()
{
    class_< FVehicleCrewAnimSetMapping >("FVehicleCrewAnimSetMapping", no_init)
        .def_readwrite("CharacterName", &FVehicleCrewAnimSetMapping::CharacterName)
        .def_readwrite("TheAnimSet", &FVehicleCrewAnimSetMapping::TheAnimSet)
  ;
}