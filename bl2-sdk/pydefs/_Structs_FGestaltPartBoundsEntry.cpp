#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltPartBoundsEntry()
{
    py::class_< FGestaltPartBoundsEntry >("FGestaltPartBoundsEntry")
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPartBoundsEntry::SkeletalMeshFragmentName)
        .def_readwrite("ReferencePoseBounds", &FGestaltPartBoundsEntry::ReferencePoseBounds)
  ;
}