#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowObstacleRenderComponent()
{
    class_< UWillowObstacleRenderComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowObstacleRenderComponent", no_init)
        .def("StaticClass", &UWillowObstacleRenderComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}