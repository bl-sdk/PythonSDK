#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltPartPermutation()
{
    py::class_< FGestaltPartPermutation >("FGestaltPartPermutation")
        .def_readwrite("MeshName", &FGestaltPartPermutation::MeshName)
        .def_readwrite("GroupName", &FGestaltPartPermutation::GroupName)
        .def_readwrite("PartName", &FGestaltPartPermutation::PartName)
  ;
}