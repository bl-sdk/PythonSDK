#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHybridNavigationAreaDebugRenderingComponent()
{
    class_< UHybridNavigationAreaDebugRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UHybridNavigationAreaDebugRenderingComponent", no_init)
        .def_readwrite("DebugSphereRadius", &UHybridNavigationAreaDebugRenderingComponent::DebugSphereRadius)
        .def("StaticClass", &UHybridNavigationAreaDebugRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}