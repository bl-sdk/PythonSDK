#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ScreenParticle(py::module &m)
{
    py::class_< UBehavior_ScreenParticle,  UBehaviorBase   >(m, "UBehavior_ScreenParticle")
		.def_static("StaticClass", &UBehavior_ScreenParticle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Parameters", &UBehavior_ScreenParticle::Parameters)
        .def_readwrite("Action", &UBehavior_ScreenParticle::Action)
        .def_readwrite("ScreenParticleModifiers", &UBehavior_ScreenParticle::ScreenParticleModifiers)
        .def_readwrite("MaterialInterface", &UBehavior_ScreenParticle::MaterialInterface)
        .def_readwrite("MatParamName", &UBehavior_ScreenParticle::MatParamName)
        .def_readwrite("ParticleSystem", &UBehavior_ScreenParticle::ParticleSystem)
        .def("ApplyBehaviorToContext", &UBehavior_ScreenParticle::ApplyBehaviorToContext)
          ;
}