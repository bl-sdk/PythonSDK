#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWindPointSourceComponent()
{
    class_< UWindPointSourceComponent, bases< UWindDirectionalSourceComponent >  , boost::noncopyable>("UWindPointSourceComponent", no_init)
        .def_readwrite("PreviewRadiusComponent", &UWindPointSourceComponent::PreviewRadiusComponent)
        .def_readwrite("Radius", &UWindPointSourceComponent::Radius)
        .def("StaticClass", &UWindPointSourceComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}