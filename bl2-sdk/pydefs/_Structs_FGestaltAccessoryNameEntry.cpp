#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltAccessoryNameEntry()
{
    class_< FGestaltAccessoryNameEntry >("FGestaltAccessoryNameEntry", no_init)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltAccessoryNameEntry::SkeletalMeshFragmentName)
  ;
}