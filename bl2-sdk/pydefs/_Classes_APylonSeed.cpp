#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APylonSeed()
{
    py::class_< APylonSeed,  AActor   >("APylonSeed")
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &APylonSeed::VfTable_IInterface_NavMeshPathObject)
        .def_readwrite("VfTable_IIGBXNavMeshSeed", &APylonSeed::VfTable_IIGBXNavMeshSeed)
        .def("StaticClass", &APylonSeed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}