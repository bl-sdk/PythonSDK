#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryNameEntry()
{
    py::class_< FGestaltAccessoryNameEntry >("FGestaltAccessoryNameEntry")
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltAccessoryNameEntry::SkeletalMeshFragmentName)
  ;
}