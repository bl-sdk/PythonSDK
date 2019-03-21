#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemPartGradeWeightData()
{
    class_< FItemPartGradeWeightData >("FItemPartGradeWeightData", no_init)
        .def_readwrite("Part", &FItemPartGradeWeightData::Part)
        .def_readwrite("Manufacturers", &FItemPartGradeWeightData::Manufacturers)
        .def_readwrite("MinGameStageIndex", &FItemPartGradeWeightData::MinGameStageIndex)
        .def_readwrite("MaxGameStageIndex", &FItemPartGradeWeightData::MaxGameStageIndex)
        .def_readwrite("DefaultWeightIndex", &FItemPartGradeWeightData::DefaultWeightIndex)
  ;
}