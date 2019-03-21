#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIndependentSelectionData(py::object m)
{
    py::class_< FIndependentSelectionData >(m, "FIndependentSelectionData")
        .def_readwrite("Probability", &FIndependentSelectionData::Probability)
        .def_readwrite("Behaviors", &FIndependentSelectionData::Behaviors)
  ;
}