#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBoundaryTurretRenderingComponent()
{
    class_< UBoundaryTurretRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UBoundaryTurretRenderingComponent", no_init)
        .def("StaticClass", &UBoundaryTurretRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}