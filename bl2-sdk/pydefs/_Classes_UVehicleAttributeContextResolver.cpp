#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleAttributeContextResolver()
{
    class_< UVehicleAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UVehicleAttributeContextResolver", no_init)
        .def("StaticClass", &UVehicleAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UVehicleAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}