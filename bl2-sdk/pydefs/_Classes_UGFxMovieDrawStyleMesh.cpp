#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleMesh(py::object m)
{
    py::class_< UGFxMovieDrawStyleMesh,  UGFxMovieDrawStyleComponent   >(m, "UGFxMovieDrawStyleMesh")
        .def_readwrite("MeshComponentArchetype", &UGFxMovieDrawStyleMesh::MeshComponentArchetype)
        .def_readwrite("UseStaticMesh", &UGFxMovieDrawStyleMesh::UseStaticMesh)
        .def_readwrite("UseSkeletalMesh", &UGFxMovieDrawStyleMesh::UseSkeletalMesh)
        .def_readwrite("UseMeshInstanceName", &UGFxMovieDrawStyleMesh::UseMeshInstanceName)
        .def_readwrite("MaterialIndex", &UGFxMovieDrawStyleMesh::MaterialIndex)
        .def_readwrite("OverrideMaterial", &UGFxMovieDrawStyleMesh::OverrideMaterial)
        .def_readwrite("TextureParameterName", &UGFxMovieDrawStyleMesh::TextureParameterName)
        .def_readwrite("Component", &UGFxMovieDrawStyleMesh::Component)
        .def_readwrite("Mati", &UGFxMovieDrawStyleMesh::Mati)
        .def_readwrite("OriginalMaterial", &UGFxMovieDrawStyleMesh::OriginalMaterial)
        .def("StaticClass", &UGFxMovieDrawStyleMesh::StaticClass, py::return_value_policy::reference)
        .def("GetStyleDebugString", &UGFxMovieDrawStyleMesh::GetStyleDebugString)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleMesh::eventRequiresClientInstance)
          ;
}