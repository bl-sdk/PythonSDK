#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UManufacturerAttributeValueResolver()
{
    class_< UManufacturerAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UManufacturerAttributeValueResolver", no_init)
        .def_readwrite("ValueIfNotMatched", &UManufacturerAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("Manufacturers", &UManufacturerAttributeValueResolver::Manufacturers)
        .def("StaticClass", &UManufacturerAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}