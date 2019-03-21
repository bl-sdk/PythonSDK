#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMaterialFadeBehavior()
{
    class_< UIMaterialFadeBehavior, bases< UInterface >  , boost::noncopyable>("UIMaterialFadeBehavior", no_init)
        .def("StaticClass", &UIMaterialFadeBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_UseMaterialScalarFadeForGoreDeath", &UIMaterialFadeBehavior::Behavior_UseMaterialScalarFadeForGoreDeath)
        .def("Behavior_MaterialScalarFade", &UIMaterialFadeBehavior::Behavior_MaterialScalarFade)
        .staticmethod("StaticClass")
  ;
}