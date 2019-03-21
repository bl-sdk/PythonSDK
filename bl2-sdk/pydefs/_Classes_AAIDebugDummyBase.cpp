#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AAIDebugDummyBase()
{
    class_< AAIDebugDummyBase, bases< ASkeletalMeshActor >  , boost::noncopyable>("AAIDebugDummyBase", no_init)
        .def_readwrite("MyMesh", &AAIDebugDummyBase::MyMesh)
        .def_readwrite("MatInstBody", &AAIDebugDummyBase::MatInstBody)
        .def_readwrite("MatInstHead", &AAIDebugDummyBase::MatInstHead)
        .def_readwrite("MatInstHelmet", &AAIDebugDummyBase::MatInstHelmet)
        .def_readwrite("DummyColor", &AAIDebugDummyBase::DummyColor)
        .def("StaticClass", &AAIDebugDummyBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSetSkeletalMesh", &AAIDebugDummyBase::eventSetSkeletalMesh)
        .def("PostBeginPlay", &AAIDebugDummyBase::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}