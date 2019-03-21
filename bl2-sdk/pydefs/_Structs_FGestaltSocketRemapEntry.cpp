#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltSocketRemapEntry()
{
    py::class_< FGestaltSocketRemapEntry >("FGestaltSocketRemapEntry")
        .def_readwrite("SkeletalMeshFragment", &FGestaltSocketRemapEntry::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltSocketRemapEntry::SkeletalMeshFragmentName)
        .def_readwrite("OriginalSocketName", &FGestaltSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FGestaltSocketRemapEntry::MangledSocketName)
  ;
}