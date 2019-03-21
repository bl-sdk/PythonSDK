#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryEntry()
{
    py::class_< FGestaltAccessoryEntry >("FGestaltAccessoryEntry")
        .def_readwrite("TransformIndex", &FGestaltAccessoryEntry::TransformIndex)
        .def_readwrite("OriginalBoneIndex", &FGestaltAccessoryEntry::OriginalBoneIndex)
        .def_readwrite("GPUBoneIndex", &FGestaltAccessoryEntry::GPUBoneIndex)
  ;
}