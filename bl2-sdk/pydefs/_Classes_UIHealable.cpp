#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIHealable()
{
    class_< UIHealable, bases< UInterface >  , boost::noncopyable>("UIHealable", no_init)
        .def("StaticClass", &UIHealable::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveAllStatusEffects", &UIHealable::RemoveAllStatusEffects)
        .def("FullyReplenishShields", &UIHealable::FullyReplenishShields)
        .def("FullyReplenishLife", &UIHealable::FullyReplenishLife)
        .staticmethod("StaticClass")
  ;
}