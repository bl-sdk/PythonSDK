#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrainingData()
{
    py::class_< FTrainingData >("FTrainingData")
        .def_readwrite("PCOwner", &FTrainingData::PCOwner)
        .def_readwrite("TrainingDefinition", &FTrainingData::TrainingDefinition)
  ;
}