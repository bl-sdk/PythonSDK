#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorsSelectionData(py::object m)
{
    py::class_< FBehaviorsSelectionData >(m, "FBehaviorsSelectionData")
        .def_readwrite("Weight", &FBehaviorsSelectionData::Weight)
        .def_readwrite("Behaviors", &FBehaviorsSelectionData::Behaviors)
  ;
}