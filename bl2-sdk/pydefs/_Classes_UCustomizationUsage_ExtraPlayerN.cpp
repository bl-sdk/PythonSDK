#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerN()
{
    class_< UCustomizationUsage_ExtraPlayerN, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerN", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerN::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}