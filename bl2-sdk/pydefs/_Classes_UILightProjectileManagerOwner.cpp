#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UILightProjectileManagerOwner()
{
    class_< UILightProjectileManagerOwner, bases< UInterface >  , boost::noncopyable>("UILightProjectileManagerOwner", no_init)
        .def("StaticClass", &UILightProjectileManagerOwner::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetLightProjMgrFor", &UILightProjectileManagerOwner::GetLightProjMgrFor, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}