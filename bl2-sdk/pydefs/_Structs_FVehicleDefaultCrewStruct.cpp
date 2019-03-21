#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleDefaultCrewStruct()
{
    py::class_< FVehicleDefaultCrewStruct >("FVehicleDefaultCrewStruct")
        .def_readwrite("PopulationDefForRole", &FVehicleDefaultCrewStruct::PopulationDefForRole)
        .def_readwrite("Role", &FVehicleDefaultCrewStruct::Role)
        .def_readwrite("ProbabilityOfSpawn", &FVehicleDefaultCrewStruct::ProbabilityOfSpawn)
        .def_readwrite("PreferredSeat", &FVehicleDefaultCrewStruct::PreferredSeat)
  ;
}