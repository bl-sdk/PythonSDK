#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTurretWeaponTypeDefinition()
{
    class_< UTurretWeaponTypeDefinition, bases< UWeaponTypeDefinition >  , boost::noncopyable>("UTurretWeaponTypeDefinition", no_init)
        .def("StaticClass", &UTurretWeaponTypeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}