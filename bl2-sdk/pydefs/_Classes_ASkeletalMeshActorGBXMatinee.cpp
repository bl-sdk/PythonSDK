#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorGBXMatinee()
{
    class_< ASkeletalMeshActorGBXMatinee, bases< ASkeletalMeshActor >  , boost::noncopyable>("ASkeletalMeshActorGBXMatinee", no_init)
        .def("StaticClass", &ASkeletalMeshActorGBXMatinee::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}