#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshCinematicActor()
{
    class_< ASkeletalMeshCinematicActor, bases< ASkeletalMeshActor >  , boost::noncopyable>("ASkeletalMeshCinematicActor", no_init)
        .def("StaticClass", &ASkeletalMeshCinematicActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}