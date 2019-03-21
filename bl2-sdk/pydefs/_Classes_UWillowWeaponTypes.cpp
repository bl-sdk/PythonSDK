#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowWeaponTypes()
{
    class_< UWillowWeaponTypes, bases< UInterface >  , boost::noncopyable>("UWillowWeaponTypes", no_init)
        .def("StaticClass", &UWillowWeaponTypes::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}