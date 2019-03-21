#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBlockingMeshComponent()
{
    class_< UBlockingMeshComponent, bases< UStaticMeshComponent >  , boost::noncopyable>("UBlockingMeshComponent", no_init)
        .def("StaticClass", &UBlockingMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBlockingMeshComponentCollision", &UBlockingMeshComponent::SetBlockingMeshComponentCollision)
        .staticmethod("StaticClass")
  ;
}