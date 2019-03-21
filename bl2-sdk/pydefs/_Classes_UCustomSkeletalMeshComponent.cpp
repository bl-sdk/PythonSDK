#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomSkeletalMeshComponent()
{
    class_< UCustomSkeletalMeshComponent, bases< USkeletalMeshComponent >  , boost::noncopyable>("UCustomSkeletalMeshComponent", no_init)
        .def_readwrite("DefaultSkeletalMesh", &UCustomSkeletalMeshComponent::DefaultSkeletalMesh)
        .def("StaticClass", &UCustomSkeletalMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}