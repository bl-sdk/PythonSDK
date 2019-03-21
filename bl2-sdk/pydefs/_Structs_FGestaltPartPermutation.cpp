#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltPartPermutation(py::object m)
{
    py::class_< FGestaltPartPermutation >(m, "FGestaltPartPermutation")
        .def_readwrite("MeshName", &FGestaltPartPermutation::MeshName)
        .def_readwrite("GroupName", &FGestaltPartPermutation::GroupName)
        .def_readwrite("PartName", &FGestaltPartPermutation::PartName)
  ;
}