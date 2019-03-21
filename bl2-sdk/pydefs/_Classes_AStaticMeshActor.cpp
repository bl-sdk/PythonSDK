#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStaticMeshActor()
{
    class_< AStaticMeshActor, bases< AActor >  , boost::noncopyable>("AStaticMeshActor", no_init)
        .def_readwrite("StaticMeshComponent", &AStaticMeshActor::StaticMeshComponent)
        .def("StaticClass", &AStaticMeshActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}