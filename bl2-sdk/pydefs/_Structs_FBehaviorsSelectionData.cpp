#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorsSelectionData()
{
    py::class_< FBehaviorsSelectionData >("FBehaviorsSelectionData")
        .def_readwrite("Weight", &FBehaviorsSelectionData::Weight)
        .def_readwrite("Behaviors", &FBehaviorsSelectionData::Behaviors)
  ;
}