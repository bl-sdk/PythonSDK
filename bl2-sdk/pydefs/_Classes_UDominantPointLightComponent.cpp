#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDominantPointLightComponent()
{
    class_< UDominantPointLightComponent, bases< UPointLightComponent >  , boost::noncopyable>("UDominantPointLightComponent", no_init)
        .def("StaticClass", &UDominantPointLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}