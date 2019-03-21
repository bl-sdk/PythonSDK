#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStableArray_Mirror()
{
    class_< FStableArray_Mirror >("FStableArray_Mirror", no_init)
        .def_readwrite("ArrayNumInUse", &FStableArray_Mirror::ArrayNumInUse)
        .def_readwrite("ArrayNumAllocated", &FStableArray_Mirror::ArrayNumAllocated)
        .def_readwrite("ArrayCapacity", &FStableArray_Mirror::ArrayCapacity)
        .def_readwrite("FreeListHeadIndex", &FStableArray_Mirror::FreeListHeadIndex)
        .def_readwrite("Chunks", &FStableArray_Mirror::Chunks)
  ;
}