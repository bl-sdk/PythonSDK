#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ScreenParticle()
{
    py::class_< UBehavior_ScreenParticle,  UBehaviorBase   >("UBehavior_ScreenParticle")
        .def_readwrite("Parameters", &UBehavior_ScreenParticle::Parameters)
        .def_readwrite("Action", &UBehavior_ScreenParticle::Action)
        .def_readwrite("ScreenParticleModifiers", &UBehavior_ScreenParticle::ScreenParticleModifiers)
        .def_readwrite("MaterialInterface", &UBehavior_ScreenParticle::MaterialInterface)
        .def_readwrite("MatParamName", &UBehavior_ScreenParticle::MatParamName)
        .def_readwrite("ParticleSystem", &UBehavior_ScreenParticle::ParticleSystem)
        .def("StaticClass", &UBehavior_ScreenParticle::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ScreenParticle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}