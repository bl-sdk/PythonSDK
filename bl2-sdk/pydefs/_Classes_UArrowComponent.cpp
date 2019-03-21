#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UArrowComponent()
{
    class_< UArrowComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UArrowComponent", no_init)
        .def_readwrite("ArrowColor", &UArrowComponent::ArrowColor)
        .def_readwrite("ArrowSize", &UArrowComponent::ArrowSize)
        .def("StaticClass", &UArrowComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}