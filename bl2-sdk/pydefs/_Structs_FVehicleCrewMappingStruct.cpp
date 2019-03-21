#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleCrewMappingStruct()
{
    class_< FVehicleCrewMappingStruct >("FVehicleCrewMappingStruct", no_init)
        .def_readwrite("VehicleArchetypeName", &FVehicleCrewMappingStruct::VehicleArchetypeName)
        .def_readwrite("AnimSet", &FVehicleCrewMappingStruct::AnimSet)
  ;
}