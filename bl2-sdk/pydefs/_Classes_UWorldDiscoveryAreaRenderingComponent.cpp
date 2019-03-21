#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWorldDiscoveryAreaRenderingComponent()
{
    class_< UWorldDiscoveryAreaRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWorldDiscoveryAreaRenderingComponent", no_init)
        .def("StaticClass", &UWorldDiscoveryAreaRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}