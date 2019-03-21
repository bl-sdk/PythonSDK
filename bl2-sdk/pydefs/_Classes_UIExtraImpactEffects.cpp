#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIExtraImpactEffects()
{
    class_< UIExtraImpactEffects, bases< UInterface >  , boost::noncopyable>("UIExtraImpactEffects", no_init)
        .def("StaticClass", &UIExtraImpactEffects::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayExtraImpactEffects", &UIExtraImpactEffects::PlayExtraImpactEffects)
        .def("SetExtraImpactEffect", &UIExtraImpactEffects::SetExtraImpactEffect)
        .staticmethod("StaticClass")
  ;
}