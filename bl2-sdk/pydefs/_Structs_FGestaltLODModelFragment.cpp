#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltLODModelFragment()
{
    py::class_< FGestaltLODModelFragment >("FGestaltLODModelFragment")
        .def_readwrite("MaterialIndex", &FGestaltLODModelFragment::MaterialIndex)
        .def_readwrite("FirstIndex", &FGestaltLODModelFragment::FirstIndex)
        .def_readwrite("NumPrimitives", &FGestaltLODModelFragment::NumPrimitives)
  ;
}