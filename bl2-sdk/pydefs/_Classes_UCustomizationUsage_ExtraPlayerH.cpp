#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerH()
{
    class_< UCustomizationUsage_ExtraPlayerH, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerH", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerH::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}