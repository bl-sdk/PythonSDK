#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPartGradeWeightData()
{
    class_< FPartGradeWeightData >("FPartGradeWeightData", no_init)
        .def_readwrite("Part", &FPartGradeWeightData::Part)
        .def_readwrite("Manufacturers", &FPartGradeWeightData::Manufacturers)
        .def_readwrite("MinGameStageIndex", &FPartGradeWeightData::MinGameStageIndex)
        .def_readwrite("MaxGameStageIndex", &FPartGradeWeightData::MaxGameStageIndex)
        .def_readwrite("DefaultWeightIndex", &FPartGradeWeightData::DefaultWeightIndex)
  ;
}