#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ResetHitRegionHealth()
{
    class_< UBehavior_ResetHitRegionHealth, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ResetHitRegionHealth", no_init)
        .def_readwrite("HitRegion", &UBehavior_ResetHitRegionHealth::HitRegion)
        .def("StaticClass", &UBehavior_ResetHitRegionHealth::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ResetHitRegionHealth::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}