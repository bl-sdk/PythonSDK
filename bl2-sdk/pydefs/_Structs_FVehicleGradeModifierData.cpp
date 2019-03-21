#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleGradeModifierData()
{
    py::class_< FVehicleGradeModifierData >("FVehicleGradeModifierData")
        .def_readwrite("CustomVehicle", &FVehicleGradeModifierData::CustomVehicle)
        .def_readwrite("DisplayName", &FVehicleGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FVehicleGradeModifierData::ExpLevel)
        .def_readwrite("OnSpawnCustomizations", &FVehicleGradeModifierData::OnSpawnCustomizations)
  ;
}