#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMesh()
{
    class_< UActorFactorySkeletalMesh, bases< UActorFactory >  , boost::noncopyable>("UActorFactorySkeletalMesh", no_init)
        .def_readwrite("SkeletalMesh", &UActorFactorySkeletalMesh::SkeletalMesh)
        .def_readwrite("AnimSet", &UActorFactorySkeletalMesh::AnimSet)
        .def_readwrite("AnimSequenceName", &UActorFactorySkeletalMesh::AnimSequenceName)
        .def("StaticClass", &UActorFactorySkeletalMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}