#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATestSplittingVolume()
{
    py::class_< ATestSplittingVolume,  AVolume   >("ATestSplittingVolume")
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &ATestSplittingVolume::VfTable_IInterface_NavMeshPathObject)
        .def("StaticClass", &ATestSplittingVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}