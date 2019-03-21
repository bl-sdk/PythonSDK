#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URouteRenderingComponent()
{
    class_< URouteRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("URouteRenderingComponent", no_init)
        .def("StaticClass", &URouteRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}