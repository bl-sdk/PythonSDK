#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Runner()
{
    class_< UCustomizationUsage_Runner, bases< UCustomizationUsage_Vehicle >  , boost::noncopyable>("UCustomizationUsage_Runner", no_init)
        .def("StaticClass", &UCustomizationUsage_Runner::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}