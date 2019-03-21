#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltPart()
{
    py::class_< FGestaltPart >("FGestaltPart")
        .def_readwrite("SkeletalMeshFragment", &FGestaltPart::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPart::SkeletalMeshFragmentName)
        .def_readwrite("MaterialIndex", &FGestaltPart::MaterialIndex)
        .def_readwrite("FirstIndex", &FGestaltPart::FirstIndex)
        .def_readwrite("NumPrimitives", &FGestaltPart::NumPrimitives)
  ;
}