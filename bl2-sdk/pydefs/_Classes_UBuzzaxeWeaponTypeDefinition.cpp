#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBuzzaxeWeaponTypeDefinition()
{
    class_< UBuzzaxeWeaponTypeDefinition, bases< UWeaponTypeDefinition >  , boost::noncopyable>("UBuzzaxeWeaponTypeDefinition", no_init)
        .def("StaticClass", &UBuzzaxeWeaponTypeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}