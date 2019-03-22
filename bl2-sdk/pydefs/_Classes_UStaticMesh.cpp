#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStaticMesh(py::module &m)
{
    py::class_< UStaticMesh,  UObject   >(m, "UStaticMesh")
        .def_readwrite("LODInfo", &UStaticMesh::LODInfo)
        .def_readwrite("LODDistanceRatio", &UStaticMesh::LODDistanceRatio)
        .def_readwrite("LODMaxRange", &UStaticMesh::LODMaxRange)
        .def_readwrite("LightMapResolution", &UStaticMesh::LightMapResolution)
        .def_readwrite("LightMapCoordinateIndex", &UStaticMesh::LightMapCoordinateIndex)
        .def_readwrite("BodySetup", &UStaticMesh::BodySetup)
        .def_readwrite("DynamicShadowCastRelevance", &UStaticMesh::DynamicShadowCastRelevance)
        .def_readwrite("StreamingDistanceMultiplier", &UStaticMesh::StreamingDistanceMultiplier)
          ;
}