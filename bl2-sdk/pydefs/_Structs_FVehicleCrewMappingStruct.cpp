#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleCrewMappingStruct(py::object m)
{
    py::class_< FVehicleCrewMappingStruct >(m, "FVehicleCrewMappingStruct")
        .def_readwrite("VehicleArchetypeName", &FVehicleCrewMappingStruct::VehicleArchetypeName)
        .def_readwrite("AnimSet", &FVehicleCrewMappingStruct::AnimSet)
  ;
}