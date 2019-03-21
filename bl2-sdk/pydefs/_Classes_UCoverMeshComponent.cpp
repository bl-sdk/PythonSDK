#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCoverMeshComponent()
{
    class_< UCoverMeshComponent, bases< UStaticMeshComponent >  , boost::noncopyable>("UCoverMeshComponent", no_init)
        .def_readwrite("Meshes", &UCoverMeshComponent::Meshes)
        .def_readwrite("LocationOffset", &UCoverMeshComponent::LocationOffset)
        .def_readwrite("AutoAdjustOn", &UCoverMeshComponent::AutoAdjustOn)
        .def_readwrite("AutoAdjustOff", &UCoverMeshComponent::AutoAdjustOff)
        .def_readwrite("Disabled", &UCoverMeshComponent::Disabled)
        .def("StaticClass", &UCoverMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}