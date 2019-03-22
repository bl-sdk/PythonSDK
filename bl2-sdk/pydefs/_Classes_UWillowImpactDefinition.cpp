#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowImpactDefinition(py::module &m)
{
    py::class_< UWillowImpactDefinition,  UImpactDefinition   >(m, "UWillowImpactDefinition")
        .def_readwrite("FallbackEffect", &UWillowImpactDefinition::FallbackEffect)
        .def_readwrite("Usage", &UWillowImpactDefinition::Usage)
        .def_readwrite("Parent", &UWillowImpactDefinition::Parent)
        .def_readwrite("AlternateImpactDefinition", &UWillowImpactDefinition::AlternateImpactDefinition)
        .def_readwrite("UnconditionalResponse", &UWillowImpactDefinition::UnconditionalResponse)
        .def_readwrite("ImpactAkEvent", &UWillowImpactDefinition::ImpactAkEvent)
        .def("StaticClass", &UWillowImpactDefinition::StaticClass, py::return_value_policy::reference)
        .def("HandleRigidBodyImpact", &UWillowImpactDefinition::HandleRigidBodyImpact)
          ;
}