#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryNameEntry(py::object m)
{
    py::class_< FGestaltAccessoryNameEntry >(m, "FGestaltAccessoryNameEntry")
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltAccessoryNameEntry::SkeletalMeshFragmentName)
  ;
}