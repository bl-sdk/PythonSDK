#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABlockingMeshCollectionActor()
{
    class_< ABlockingMeshCollectionActor, bases< AStaticMeshActorBase >  , boost::noncopyable>("ABlockingMeshCollectionActor", no_init)
        .def_readwrite("BlockingMeshComponents", &ABlockingMeshCollectionActor::BlockingMeshComponents)
        .def_readwrite("MaxBlockingMeshComponents", &ABlockingMeshCollectionActor::MaxBlockingMeshComponents)
        .def("StaticClass", &ABlockingMeshCollectionActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}