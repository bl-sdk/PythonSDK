#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltPart()
{
    class_< FGestaltPart >("FGestaltPart", no_init)
        .def_readwrite("SkeletalMeshFragment", &FGestaltPart::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPart::SkeletalMeshFragmentName)
        .def_readwrite("MaterialIndex", &FGestaltPart::MaterialIndex)
        .def_readwrite("FirstIndex", &FGestaltPart::FirstIndex)
        .def_readwrite("NumPrimitives", &FGestaltPart::NumPrimitives)
  ;
}