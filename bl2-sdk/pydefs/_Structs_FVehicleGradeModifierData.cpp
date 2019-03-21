#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleGradeModifierData()
{
    class_< FVehicleGradeModifierData >("FVehicleGradeModifierData", no_init)
        .def_readwrite("CustomVehicle", &FVehicleGradeModifierData::CustomVehicle)
        .def_readwrite("DisplayName", &FVehicleGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FVehicleGradeModifierData::ExpLevel)
        .def_readwrite("OnSpawnCustomizations", &FVehicleGradeModifierData::OnSpawnCustomizations)
  ;
}