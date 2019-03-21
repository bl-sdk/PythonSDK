#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleWeaponTypeDefinition()
{
    class_< UVehicleWeaponTypeDefinition, bases< UWeaponTypeDefinition >  , boost::noncopyable>("UVehicleWeaponTypeDefinition", no_init)
        .def_readwrite("WeaponMeshInstanceDataName", &UVehicleWeaponTypeDefinition::WeaponMeshInstanceDataName)
        .def("StaticClass", &UVehicleWeaponTypeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}