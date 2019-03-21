#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UComponent()
{
    class_< UComponent, bases< UObject >  , boost::noncopyable>("UComponent", no_init)
        .def_readwrite("TemplateOwnerClass", &UComponent::TemplateOwnerClass)
        .def_readwrite("TemplateName", &UComponent::TemplateName)
        .def("StaticClass", &UComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}