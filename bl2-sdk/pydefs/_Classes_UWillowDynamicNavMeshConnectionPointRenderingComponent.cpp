#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDynamicNavMeshConnectionPointRenderingComponent()
{
    class_< UWillowDynamicNavMeshConnectionPointRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowDynamicNavMeshConnectionPointRenderingComponent", no_init)
        .def_readwrite("ConnectionValidColor", &UWillowDynamicNavMeshConnectionPointRenderingComponent::ConnectionValidColor)
        .def_readwrite("ConnectionInvalidColor", &UWillowDynamicNavMeshConnectionPointRenderingComponent::ConnectionInvalidColor)
        .def("StaticClass", &UWillowDynamicNavMeshConnectionPointRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}