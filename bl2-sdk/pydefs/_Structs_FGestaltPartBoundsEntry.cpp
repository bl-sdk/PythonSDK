#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltPartBoundsEntry(py::object m)
{
    py::class_< FGestaltPartBoundsEntry >(m, "FGestaltPartBoundsEntry")
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPartBoundsEntry::SkeletalMeshFragmentName)
        .def_readwrite("ReferencePoseBounds", &FGestaltPartBoundsEntry::ReferencePoseBounds)
  ;
}