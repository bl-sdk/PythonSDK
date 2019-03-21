#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryEntry()
{
    class_< FGestaltAccessoryEntry >("FGestaltAccessoryEntry", no_init)
        .def_readwrite("TransformIndex", &FGestaltAccessoryEntry::TransformIndex)
        .def_readwrite("OriginalBoneIndex", &FGestaltAccessoryEntry::OriginalBoneIndex)
        .def_readwrite("GPUBoneIndex", &FGestaltAccessoryEntry::GPUBoneIndex)
  ;
}