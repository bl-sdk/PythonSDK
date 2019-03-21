#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxForceFieldGenericComponent(py::object m)
{
    py::class_< UNxForceFieldGenericComponent,  UNxForceFieldComponent   >(m, "UNxForceFieldGenericComponent")
        .def_readwrite("RoughExtentX", &UNxForceFieldGenericComponent::RoughExtentX)
        .def_readwrite("RoughExtentY", &UNxForceFieldGenericComponent::RoughExtentY)
        .def_readwrite("RoughExtentZ", &UNxForceFieldGenericComponent::RoughExtentZ)
        .def_readwrite("Coordinates", &UNxForceFieldGenericComponent::Coordinates)
        .def_readwrite("Constant", &UNxForceFieldGenericComponent::Constant)
        .def_readwrite("PositionMultiplierX", &UNxForceFieldGenericComponent::PositionMultiplierX)
        .def_readwrite("PositionMultiplierY", &UNxForceFieldGenericComponent::PositionMultiplierY)
        .def_readwrite("PositionMultiplierZ", &UNxForceFieldGenericComponent::PositionMultiplierZ)
        .def_readwrite("PositionTarget", &UNxForceFieldGenericComponent::PositionTarget)
        .def_readwrite("VelocityMultiplierX", &UNxForceFieldGenericComponent::VelocityMultiplierX)
        .def_readwrite("VelocityMultiplierY", &UNxForceFieldGenericComponent::VelocityMultiplierY)
        .def_readwrite("VelocityMultiplierZ", &UNxForceFieldGenericComponent::VelocityMultiplierZ)
        .def_readwrite("VelocityTarget", &UNxForceFieldGenericComponent::VelocityTarget)
        .def_readwrite("Noise", &UNxForceFieldGenericComponent::Noise)
        .def_readwrite("FalloffLinear", &UNxForceFieldGenericComponent::FalloffLinear)
        .def_readwrite("FalloffQuadratic", &UNxForceFieldGenericComponent::FalloffQuadratic)
        .def_readwrite("TorusRadius", &UNxForceFieldGenericComponent::TorusRadius)
        .def_readwrite("Kernel", &UNxForceFieldGenericComponent::Kernel)
        .def("StaticClass", &UNxForceFieldGenericComponent::StaticClass, py::return_value_policy::reference)
          ;
}