#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPartGradeWeightData(py::module &m)
{
    py::class_< FPartGradeWeightData >(m, "FPartGradeWeightData")
        .def_readwrite("Part", &FPartGradeWeightData::Part)
        .def_readwrite("Manufacturers", &FPartGradeWeightData::Manufacturers)
        .def_readwrite("MinGameStageIndex", &FPartGradeWeightData::MinGameStageIndex)
        .def_readwrite("MaxGameStageIndex", &FPartGradeWeightData::MaxGameStageIndex)
        .def_readwrite("DefaultWeightIndex", &FPartGradeWeightData::DefaultWeightIndex)
  ;
}