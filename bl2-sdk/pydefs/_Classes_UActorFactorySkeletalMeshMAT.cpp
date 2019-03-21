#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMeshMAT()
{
    class_< UActorFactorySkeletalMeshMAT, bases< UActorFactorySkeletalMesh >  , boost::noncopyable>("UActorFactorySkeletalMeshMAT", no_init)
        .def("StaticClass", &UActorFactorySkeletalMeshMAT::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}