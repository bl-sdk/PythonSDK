#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerE()
{
    class_< UCustomizationUsage_ExtraPlayerE, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerE", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerE::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}