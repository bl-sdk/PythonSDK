#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerF()
{
    class_< UCustomizationUsage_ExtraPlayerF, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerF", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerF::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}