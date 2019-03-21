#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowElevatorRenderingComponent()
{
    class_< UWillowElevatorRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowElevatorRenderingComponent", no_init)
        .def("StaticClass", &UWillowElevatorRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}