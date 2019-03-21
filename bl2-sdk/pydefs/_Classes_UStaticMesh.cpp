#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStaticMesh()
{
    class_< UStaticMesh, bases< UObject >  , boost::noncopyable>("UStaticMesh", no_init)
        .def_readonly("UnknownData00", &UStaticMesh::UnknownData00)
        .def_readwrite("LODInfo", &UStaticMesh::LODInfo)
        .def_readwrite("LODDistanceRatio", &UStaticMesh::LODDistanceRatio)
        .def_readwrite("LODMaxRange", &UStaticMesh::LODMaxRange)
        .def_readwrite("LightMapResolution", &UStaticMesh::LightMapResolution)
        .def_readwrite("LightMapCoordinateIndex", &UStaticMesh::LightMapCoordinateIndex)
        .def_readonly("UnknownData01", &UStaticMesh::UnknownData01)
        .def_readwrite("BodySetup", &UStaticMesh::BodySetup)
        .def_readonly("UnknownData02", &UStaticMesh::UnknownData02)
        .def_readwrite("DynamicShadowCastRelevance", &UStaticMesh::DynamicShadowCastRelevance)
        .def_readwrite("StreamingDistanceMultiplier", &UStaticMesh::StreamingDistanceMultiplier)
        .def_readonly("UnknownData03", &UStaticMesh::UnknownData03)
        .def("StaticClass", &UStaticMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}