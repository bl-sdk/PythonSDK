#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DamageSurfaceTypeSwitch()
{
    class_< UBehavior_DamageSurfaceTypeSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DamageSurfaceTypeSwitch", no_init)
        .def_readwrite("DamageSurfaceType", &UBehavior_DamageSurfaceTypeSwitch::DamageSurfaceType)
        .def("StaticClass", &UBehavior_DamageSurfaceTypeSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DamageSurfaceTypeSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}