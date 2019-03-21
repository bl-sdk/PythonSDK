#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIParticleSystemBehavior()
{
    class_< UIParticleSystemBehavior, bases< UInterface >  , boost::noncopyable>("UIParticleSystemBehavior", no_init)
        .def("StaticClass", &UIParticleSystemBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeParticleSystemActiveState", &UIParticleSystemBehavior::Behavior_ChangeParticleSystemActiveState)
        .staticmethod("StaticClass")
  ;
}