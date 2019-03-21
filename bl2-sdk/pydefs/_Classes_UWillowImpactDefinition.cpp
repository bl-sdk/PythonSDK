#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowImpactDefinition()
{
    class_< UWillowImpactDefinition, bases< UImpactDefinition >  , boost::noncopyable>("UWillowImpactDefinition", no_init)
        .def_readwrite("FallbackEffect", &UWillowImpactDefinition::FallbackEffect)
        .def_readwrite("Usage", &UWillowImpactDefinition::Usage)
        .def_readwrite("Parent", &UWillowImpactDefinition::Parent)
        .def_readwrite("AlternateImpactDefinition", &UWillowImpactDefinition::AlternateImpactDefinition)
        .def_readwrite("UnconditionalResponse", &UWillowImpactDefinition::UnconditionalResponse)
        .def_readwrite("ImpactAkEvent", &UWillowImpactDefinition::ImpactAkEvent)
        .def("StaticClass", &UWillowImpactDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleRigidBodyImpact", &UWillowImpactDefinition::HandleRigidBodyImpact)
        .staticmethod("StaticClass")
  ;
}