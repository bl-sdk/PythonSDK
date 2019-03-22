#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemPartGradeWeightData(py::module &m)
{
    py::class_< FItemPartGradeWeightData >(m, "FItemPartGradeWeightData")
        .def_readwrite("Part", &FItemPartGradeWeightData::Part)
        .def_readwrite("Manufacturers", &FItemPartGradeWeightData::Manufacturers)
        .def_readwrite("MinGameStageIndex", &FItemPartGradeWeightData::MinGameStageIndex)
        .def_readwrite("MaxGameStageIndex", &FItemPartGradeWeightData::MaxGameStageIndex)
        .def_readwrite("DefaultWeightIndex", &FItemPartGradeWeightData::DefaultWeightIndex)
  ;
}