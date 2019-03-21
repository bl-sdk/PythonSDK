#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationPointRenderingComponent()
{
    class_< UPopulationPointRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPopulationPointRenderingComponent", no_init)
        .def("StaticClass", &UPopulationPointRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}