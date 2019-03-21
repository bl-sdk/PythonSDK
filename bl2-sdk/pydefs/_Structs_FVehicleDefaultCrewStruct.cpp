#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleDefaultCrewStruct()
{
    class_< FVehicleDefaultCrewStruct >("FVehicleDefaultCrewStruct", no_init)
        .def_readwrite("PopulationDefForRole", &FVehicleDefaultCrewStruct::PopulationDefForRole)
        .def_readwrite("Role", &FVehicleDefaultCrewStruct::Role)
        .def_readwrite("ProbabilityOfSpawn", &FVehicleDefaultCrewStruct::ProbabilityOfSpawn)
        .def_readwrite("PreferredSeat", &FVehicleDefaultCrewStruct::PreferredSeat)
  ;
}