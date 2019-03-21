#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInteractiveObjectGameStageGradeWeightData()
{
    class_< FInteractiveObjectGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FInteractiveObjectGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FInteractiveObjectGameStageGradeWeightData::GradeModifiers)
  ;
}