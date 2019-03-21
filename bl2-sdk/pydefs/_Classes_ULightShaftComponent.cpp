#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULightShaftComponent()
{
    class_< ULightShaftComponent, bases< ULightComponent >  , boost::noncopyable>("ULightShaftComponent", no_init)
        .def_readwrite("TraceDistance", &ULightShaftComponent::TraceDistance)
        .def_readwrite("LightShaftType", &ULightShaftComponent::LightShaftType)
        .def_readwrite("Radius", &ULightShaftComponent::Radius)
        .def("StaticClass", &ULightShaftComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}