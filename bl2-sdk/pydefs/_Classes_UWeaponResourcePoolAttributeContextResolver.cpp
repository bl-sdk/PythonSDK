#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponResourcePoolAttributeContextResolver()
{
    class_< UWeaponResourcePoolAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UWeaponResourcePoolAttributeContextResolver", no_init)
        .def_readwrite("PrimaryHandResource", &UWeaponResourcePoolAttributeContextResolver::PrimaryHandResource)
        .def_readwrite("OffHandResource", &UWeaponResourcePoolAttributeContextResolver::OffHandResource)
        .def("StaticClass", &UWeaponResourcePoolAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}