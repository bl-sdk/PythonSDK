#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetParticleSystemParameters()
{
    class_< UBehavior_SetParticleSystemParameters, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetParticleSystemParameters", no_init)
        .def_readwrite("AttributeContext", &UBehavior_SetParticleSystemParameters::AttributeContext)
        .def_readwrite("ScalarParameterValues", &UBehavior_SetParticleSystemParameters::ScalarParameterValues)
        .def_readwrite("VectorParameterValues", &UBehavior_SetParticleSystemParameters::VectorParameterValues)
        .def_readwrite("ColorParameterValues", &UBehavior_SetParticleSystemParameters::ColorParameterValues)
        .def_readwrite("MaterialParameterValues", &UBehavior_SetParticleSystemParameters::MaterialParameterValues)
        .def_readwrite("ActorParameterValues", &UBehavior_SetParticleSystemParameters::ActorParameterValues)
        .def("StaticClass", &UBehavior_SetParticleSystemParameters::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetParticleSystemParameters::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}