#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAmmoResourcePool()
{
    class_< UAmmoResourcePool, bases< UResourcePool >  , boost::noncopyable>("UAmmoResourcePool", no_init)
        .def("StaticClass", &UAmmoResourcePool::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDebugText", &UAmmoResourcePool::GetDebugText)
        .def("GetExtraAmmoRegen", &UAmmoResourcePool::GetExtraAmmoRegen)
        .staticmethod("StaticClass")
  ;
}