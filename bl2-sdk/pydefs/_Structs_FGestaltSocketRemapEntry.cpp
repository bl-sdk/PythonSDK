#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltSocketRemapEntry()
{
    class_< FGestaltSocketRemapEntry >("FGestaltSocketRemapEntry", no_init)
        .def_readwrite("SkeletalMeshFragment", &FGestaltSocketRemapEntry::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltSocketRemapEntry::SkeletalMeshFragmentName)
        .def_readwrite("OriginalSocketName", &FGestaltSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FGestaltSocketRemapEntry::MangledSocketName)
  ;
}