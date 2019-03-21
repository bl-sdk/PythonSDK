#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ScreenParticle()
{
    class_< UBehavior_ScreenParticle, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ScreenParticle", no_init)
        .def_readwrite("Parameters", &UBehavior_ScreenParticle::Parameters)
        .def_readwrite("Action", &UBehavior_ScreenParticle::Action)
        .def_readwrite("ScreenParticleModifiers", &UBehavior_ScreenParticle::ScreenParticleModifiers)
        .def_readwrite("MaterialInterface", &UBehavior_ScreenParticle::MaterialInterface)
        .def_readwrite("MatParamName", &UBehavior_ScreenParticle::MatParamName)
        .def_readwrite("ParticleSystem", &UBehavior_ScreenParticle::ParticleSystem)
        .def("StaticClass", &UBehavior_ScreenParticle::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ScreenParticle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}