#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerM()
{
    class_< UCustomizationUsage_ExtraPlayerM, bases< UCustomizationUsage_Player >  , boost::noncopyable>("UCustomizationUsage_ExtraPlayerM", no_init)
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerM::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}