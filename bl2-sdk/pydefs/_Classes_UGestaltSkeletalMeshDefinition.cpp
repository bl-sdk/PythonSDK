#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGestaltSkeletalMeshDefinition(py::module &m)
{
    py::class_< UGestaltSkeletalMeshDefinition,  UGBXDefinition   >(m, "UGestaltSkeletalMeshDefinition")
		.def_static("StaticClass", &UGestaltSkeletalMeshDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GestaltSkeletalMesh", &UGestaltSkeletalMeshDefinition::GestaltSkeletalMesh)
        .def_readwrite("GestaltInfos", &UGestaltSkeletalMeshDefinition::GestaltInfos)
        .def_readwrite("GestaltAccessoryNames", &UGestaltSkeletalMeshDefinition::GestaltAccessoryNames)
        .def_readwrite("GestaltSocketMappings", &UGestaltSkeletalMeshDefinition::GestaltSocketMappings)
        .def_readwrite("GestaltPartBounds", &UGestaltSkeletalMeshDefinition::GestaltPartBounds)
        .def("InitGestaltAccessoryMeshDataFromParts", &UGestaltSkeletalMeshDefinition::InitGestaltAccessoryMeshDataFromParts)
        .def("InitGestaltMeshDataFromParts", &UGestaltSkeletalMeshDefinition::InitGestaltMeshDataFromParts)
          ;
}