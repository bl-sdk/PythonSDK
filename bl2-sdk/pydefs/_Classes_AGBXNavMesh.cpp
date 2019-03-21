#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGBXNavMesh()
{
    class_< AGBXNavMesh, bases< AActor >  , boost::noncopyable>("AGBXNavMesh", no_init)
        .def_readwrite("BuildVersion", &AGBXNavMesh::BuildVersion)
        .def_readwrite("BuildGUID", &AGBXNavMesh::BuildGUID)
        .def_readwrite("MeshID", &AGBXNavMesh::MeshID)
        .def_readwrite("ConnectedMeshes", &AGBXNavMesh::ConnectedMeshes)
        .def_readwrite("Vertices", &AGBXNavMesh::Vertices)
        .def_readwrite("Polys", &AGBXNavMesh::Polys)
        .def_readwrite("PolyData", &AGBXNavMesh::PolyData)
        .def_readwrite("PathSizes", &AGBXNavMesh::PathSizes)
        .def_readwrite("Obstacles", &AGBXNavMesh::Obstacles)
        .def_readwrite("SpecialMovers", &AGBXNavMesh::SpecialMovers)
        .def_readwrite("MeshBase", &AGBXNavMesh::MeshBase)
        .def_readwrite("PolyLookup", &AGBXNavMesh::PolyLookup)
        .def_readwrite("CachedLocalToWorld", &AGBXNavMesh::CachedLocalToWorld)
        .def_readwrite("CachedWorldToLocal", &AGBXNavMesh::CachedWorldToLocal)
        .def_readwrite("CachedBaseLocation", &AGBXNavMesh::CachedBaseLocation)
        .def_readwrite("CachedBaseRotation", &AGBXNavMesh::CachedBaseRotation)
        .def_readwrite("NextNavMesh", &AGBXNavMesh::NextNavMesh)
        .def_readwrite("BuildData", &AGBXNavMesh::BuildData)
        .def_readwrite("RenderComponent", &AGBXNavMesh::RenderComponent)
        .def("StaticClass", &AGBXNavMesh::StaticClass, return_value_policy< reference_existing_object >())
        .def("PolyContainsPoint", &AGBXNavMesh::PolyContainsPoint)
        .def("OnPotentiallyConnectedMeshRemoved", &AGBXNavMesh::OnPotentiallyConnectedMeshRemoved)
        .def("OnPotentiallyConnectedMeshAdded", &AGBXNavMesh::OnPotentiallyConnectedMeshAdded)
        .def("FixupOldVersions", &AGBXNavMesh::FixupOldVersions)
        .def("eventDestroyed", &AGBXNavMesh::eventDestroyed)
        .def("eventPostBeginPlay", &AGBXNavMesh::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}