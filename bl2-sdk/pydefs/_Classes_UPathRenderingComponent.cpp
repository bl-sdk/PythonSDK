#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPathRenderingComponent()
{
    class_< UPathRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPathRenderingComponent", no_init)
        .def("StaticClass", &UPathRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}