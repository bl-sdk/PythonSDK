#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEnvironmentVolume(py::object m)
{
    py::class_< AEnvironmentVolume,  AVolume   >(m, "AEnvironmentVolume")
        .def_readwrite("VfTable_IInterface_NavMeshPathObstacle", &AEnvironmentVolume::VfTable_IInterface_NavMeshPathObstacle)
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &AEnvironmentVolume::VfTable_IInterface_NavMeshPathObject)
        .def("StaticClass", &AEnvironmentVolume::StaticClass, py::return_value_policy::reference)
        .def("SetSplitNavMesh", &AEnvironmentVolume::SetSplitNavMesh)
          ;
}