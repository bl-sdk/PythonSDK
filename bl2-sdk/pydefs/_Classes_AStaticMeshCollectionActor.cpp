#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStaticMeshCollectionActor()
{
    class_< AStaticMeshCollectionActor, bases< AStaticMeshActorBase >  , boost::noncopyable>("AStaticMeshCollectionActor", no_init)
        .def_readwrite("StaticMeshComponents", &AStaticMeshCollectionActor::StaticMeshComponents)
        .def_readwrite("MaxStaticMeshComponents", &AStaticMeshCollectionActor::MaxStaticMeshComponents)
        .def("StaticClass", &AStaticMeshCollectionActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}