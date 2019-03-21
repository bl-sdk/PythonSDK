#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorSpawnable()
{
    class_< ASkeletalMeshActorSpawnable, bases< ASkeletalMeshActor >  , boost::noncopyable>("ASkeletalMeshActorSpawnable", no_init)
        .def("StaticClass", &ASkeletalMeshActorSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}