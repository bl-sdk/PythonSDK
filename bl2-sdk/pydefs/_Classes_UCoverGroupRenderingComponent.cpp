#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCoverGroupRenderingComponent()
{
    class_< UCoverGroupRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UCoverGroupRenderingComponent", no_init)
        .def("StaticClass", &UCoverGroupRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}