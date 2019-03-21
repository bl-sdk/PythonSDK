#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltPartBoundsEntry()
{
    class_< FGestaltPartBoundsEntry >("FGestaltPartBoundsEntry", no_init)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPartBoundsEntry::SkeletalMeshFragmentName)
        .def_readwrite("ReferencePoseBounds", &FGestaltPartBoundsEntry::ReferencePoseBounds)
  ;
}