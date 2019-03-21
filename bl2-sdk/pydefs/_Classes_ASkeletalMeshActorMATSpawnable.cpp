#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorMATSpawnable()
{
    class_< ASkeletalMeshActorMATSpawnable, bases< ASkeletalMeshActorMAT >  , boost::noncopyable>("ASkeletalMeshActorMATSpawnable", no_init)
        .def("StaticClass", &ASkeletalMeshActorMATSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}