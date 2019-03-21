#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleCrewAnimSetMapping(py::object m)
{
    py::class_< FVehicleCrewAnimSetMapping >(m, "FVehicleCrewAnimSetMapping")
        .def_readwrite("CharacterName", &FVehicleCrewAnimSetMapping::CharacterName)
        .def_readwrite("TheAnimSet", &FVehicleCrewAnimSetMapping::TheAnimSet)
  ;
}