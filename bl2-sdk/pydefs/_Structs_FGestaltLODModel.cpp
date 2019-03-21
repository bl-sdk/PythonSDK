#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltLODModel()
{
    py::class_< FGestaltLODModel >("FGestaltLODModel")
        .def_readwrite("GestaltFragments", &FGestaltLODModel::GestaltFragments)
  ;
}