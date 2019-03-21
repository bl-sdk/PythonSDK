#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_FanBoat()
{
    class_< UCustomizationUsage_FanBoat, bases< UCustomizationUsage >  , boost::noncopyable>("UCustomizationUsage_FanBoat", no_init)
        .def("StaticClass", &UCustomizationUsage_FanBoat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}