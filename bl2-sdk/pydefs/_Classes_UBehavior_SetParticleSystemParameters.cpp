#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetParticleSystemParameters(py::module &m)
{
    py::class_< UBehavior_SetParticleSystemParameters,  UBehaviorBase   >(m, "UBehavior_SetParticleSystemParameters")
        .def_readwrite("AttributeContext", &UBehavior_SetParticleSystemParameters::AttributeContext)
        .def_readwrite("ScalarParameterValues", &UBehavior_SetParticleSystemParameters::ScalarParameterValues)
        .def_readwrite("VectorParameterValues", &UBehavior_SetParticleSystemParameters::VectorParameterValues)
        .def_readwrite("ColorParameterValues", &UBehavior_SetParticleSystemParameters::ColorParameterValues)
        .def_readwrite("MaterialParameterValues", &UBehavior_SetParticleSystemParameters::MaterialParameterValues)
        .def_readwrite("ActorParameterValues", &UBehavior_SetParticleSystemParameters::ActorParameterValues)
        .def("ApplyBehaviorToContext", &UBehavior_SetParticleSystemParameters::ApplyBehaviorToContext)
          ;
}