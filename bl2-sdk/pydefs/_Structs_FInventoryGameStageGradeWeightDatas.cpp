#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventoryGameStageGradeWeightData()
{
    class_< FInventoryGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FInventoryGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FInventoryGameStageGradeWeightData::GradeModifiers)
  ;
}