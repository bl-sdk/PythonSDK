#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAIDebugDummyBase(py::object m)
{
    py::class_< AAIDebugDummyBase,  ASkeletalMeshActor   >(m, "AAIDebugDummyBase")
        .def_readwrite("MyMesh", &AAIDebugDummyBase::MyMesh)
        .def_readwrite("MatInstBody", &AAIDebugDummyBase::MatInstBody)
        .def_readwrite("MatInstHead", &AAIDebugDummyBase::MatInstHead)
        .def_readwrite("MatInstHelmet", &AAIDebugDummyBase::MatInstHelmet)
        .def_readwrite("DummyColor", &AAIDebugDummyBase::DummyColor)
        .def("StaticClass", &AAIDebugDummyBase::StaticClass, py::return_value_policy::reference)
        .def("eventSetSkeletalMesh", &AAIDebugDummyBase::eventSetSkeletalMesh)
        .def("PostBeginPlay", &AAIDebugDummyBase::PostBeginPlay)
          ;
}