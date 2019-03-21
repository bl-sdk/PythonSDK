#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAIPawnGameStageGradeWeightData()
{
    class_< FAIPawnGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FAIPawnGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FAIPawnGameStageGradeWeightData::GradeModifiers)
  ;
}