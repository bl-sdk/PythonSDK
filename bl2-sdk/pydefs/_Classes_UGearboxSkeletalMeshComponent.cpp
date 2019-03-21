#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSkeletalMeshComponent()
{
    class_< UGearboxSkeletalMeshComponent, bases< USkeletalMeshComponent >  , boost::noncopyable>("UGearboxSkeletalMeshComponent", no_init)
        .def_readwrite("FOV", &UGearboxSkeletalMeshComponent::FOV)
        .def("StaticClass", &UGearboxSkeletalMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetFOV", &UGearboxSkeletalMeshComponent::SetFOV)
        .staticmethod("StaticClass")
  ;
}