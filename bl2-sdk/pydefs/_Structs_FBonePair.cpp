#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBonePair()
{
    py::class_< FBonePair >("FBonePair")
        .def_readonly("Bones", &FBonePair::Bones)
  ;
}