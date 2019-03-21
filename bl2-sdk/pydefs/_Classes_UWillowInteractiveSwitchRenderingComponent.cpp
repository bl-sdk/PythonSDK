#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowInteractiveSwitchRenderingComponent()
{
    class_< UWillowInteractiveSwitchRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowInteractiveSwitchRenderingComponent", no_init)
        .def("StaticClass", &UWillowInteractiveSwitchRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}