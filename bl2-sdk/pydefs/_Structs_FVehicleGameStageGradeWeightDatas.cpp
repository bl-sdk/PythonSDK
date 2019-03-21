#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleGameStageGradeWeightData()
{
    class_< FVehicleGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FVehicleGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FVehicleGameStageGradeWeightData::GradeModifiers)
  ;
}