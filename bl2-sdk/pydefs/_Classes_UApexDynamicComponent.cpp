#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexDynamicComponent()
{
    class_< UApexDynamicComponent, bases< UApexComponentBase >  , boost::noncopyable>("UApexDynamicComponent", no_init)
        .def_readwrite("ComponentDynamicResources", &UApexDynamicComponent::ComponentDynamicResources)
        .def("StaticClass", &UApexDynamicComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}