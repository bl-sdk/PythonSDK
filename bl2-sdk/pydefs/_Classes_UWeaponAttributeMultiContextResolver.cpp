#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponAttributeMultiContextResolver()
{
    class_< UWeaponAttributeMultiContextResolver, bases< UAttributeMultiContextResolver >  , boost::noncopyable>("UWeaponAttributeMultiContextResolver", no_init)
        .def("StaticClass", &UWeaponAttributeMultiContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}