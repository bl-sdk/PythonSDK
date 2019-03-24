#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APylonSeed(py::module &m)
{
    py::class_< APylonSeed,  AActor   >(m, "APylonSeed")
		.def_static("StaticClass", &APylonSeed::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &APylonSeed::VfTable_IInterface_NavMeshPathObject)
        .def_readwrite("VfTable_IIGBXNavMeshSeed", &APylonSeed::VfTable_IIGBXNavMeshSeed)
          ;
}