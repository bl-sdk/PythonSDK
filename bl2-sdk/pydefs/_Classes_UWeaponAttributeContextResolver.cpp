#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponAttributeContextResolver()
{
    class_< UWeaponAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UWeaponAttributeContextResolver", no_init)
        .def("StaticClass", &UWeaponAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}