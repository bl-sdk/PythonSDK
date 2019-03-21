#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIPropertyDataProvider()
{
    class_< UUIPropertyDataProvider, bases< UUIDataProvider >  , boost::noncopyable>("UUIPropertyDataProvider", no_init)
        .def_readwrite("ComplexPropertyTypes", &UUIPropertyDataProvider::ComplexPropertyTypes)
        .def("StaticClass", &UUIPropertyDataProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetCustomPropertyValue", &UUIPropertyDataProvider::eventGetCustomPropertyValue)
        .def("CanSupportComplexPropertyType", &UUIPropertyDataProvider::CanSupportComplexPropertyType)
        .staticmethod("StaticClass")
  ;
}