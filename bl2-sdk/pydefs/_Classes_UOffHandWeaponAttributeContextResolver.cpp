#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOffHandWeaponAttributeContextResolver()
{
    class_< UOffHandWeaponAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UOffHandWeaponAttributeContextResolver", no_init)
        .def("StaticClass", &UOffHandWeaponAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}