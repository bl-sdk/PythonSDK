#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIndependentSelectionData()
{
    py::class_< FIndependentSelectionData >("FIndependentSelectionData")
        .def_readwrite("Probability", &FIndependentSelectionData::Probability)
        .def_readwrite("Behaviors", &FIndependentSelectionData::Behaviors)
  ;
}