#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerG()
{
    class_< UCustomizationUsage_ExtraPlayerG, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerG", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerG::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}