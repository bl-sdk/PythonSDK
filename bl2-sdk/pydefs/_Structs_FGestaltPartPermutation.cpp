#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltPartPermutation()
{
    class_< FGestaltPartPermutation >("FGestaltPartPermutation", no_init)
        .def_readwrite("MeshName", &FGestaltPartPermutation::MeshName)
        .def_readwrite("GroupName", &FGestaltPartPermutation::GroupName)
        .def_readwrite("PartName", &FGestaltPartPermutation::PartName)
  ;
}