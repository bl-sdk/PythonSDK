#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerD()
{
    class_< UCustomizationUsage_ExtraPlayerD, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerD", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerD::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}