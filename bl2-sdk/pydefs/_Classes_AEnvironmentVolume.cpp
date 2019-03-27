#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEnvironmentVolume(py::module &m)
{
    py::class_< AEnvironmentVolume,  AVolume   >(m, "AEnvironmentVolume")
		.def_static("StaticClass", &AEnvironmentVolume::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IInterface_NavMeshPathObstacle", &AEnvironmentVolume::VfTable_IInterface_NavMeshPathObstacle)
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &AEnvironmentVolume::VfTable_IInterface_NavMeshPathObject)
        .def("SetSplitNavMesh", &AEnvironmentVolume::SetSplitNavMesh)
          ;
}