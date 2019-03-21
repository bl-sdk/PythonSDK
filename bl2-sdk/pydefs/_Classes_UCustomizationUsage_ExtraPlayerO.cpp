#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerO()
{
    class_< UCustomizationUsage_ExtraPlayerO, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerO", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerO::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}