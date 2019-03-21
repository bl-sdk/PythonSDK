#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshCinematic()
{
    class_< UActorFactorySkeletalMeshCinematic, bases< UActorFactorySkeletalMesh >  , boost::noncopyable>("UActorFactorySkeletalMeshCinematic", no_init)
        .def("StaticClass", &UActorFactorySkeletalMeshCinematic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}