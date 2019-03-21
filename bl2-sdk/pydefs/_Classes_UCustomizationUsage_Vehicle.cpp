#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Vehicle()
{
    class_< UCustomizationUsage_Vehicle, bases< UCustomizationUsage >  , boost::noncopyable>("UCustomizationUsage_Vehicle", no_init)
        .def("StaticClass", &UCustomizationUsage_Vehicle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}