#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerJ()
{
    class_< UCustomizationUsage_ExtraPlayerJ, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerJ", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerJ::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}