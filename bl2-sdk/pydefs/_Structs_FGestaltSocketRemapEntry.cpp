#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltSocketRemapEntry(py::module &m)
{
    py::class_< FGestaltSocketRemapEntry >(m, "FGestaltSocketRemapEntry")
        .def_readwrite("SkeletalMeshFragment", &FGestaltSocketRemapEntry::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltSocketRemapEntry::SkeletalMeshFragmentName)
        .def_readwrite("OriginalSocketName", &FGestaltSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FGestaltSocketRemapEntry::MangledSocketName)
  ;
}