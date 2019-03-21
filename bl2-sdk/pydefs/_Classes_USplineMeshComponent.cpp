#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USplineMeshComponent()
{
    class_< USplineMeshComponent, bases< UStaticMeshComponent >  , boost::noncopyable>("USplineMeshComponent", no_init)
        .def_readwrite("SplineParams", &USplineMeshComponent::SplineParams)
        .def_readwrite("SplineXDir", &USplineMeshComponent::SplineXDir)
        .def("StaticClass", &USplineMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}