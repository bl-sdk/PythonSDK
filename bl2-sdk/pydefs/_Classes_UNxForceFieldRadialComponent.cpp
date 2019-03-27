#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxForceFieldRadialComponent(py::module &m)
{
    py::class_< UNxForceFieldRadialComponent,  UNxForceFieldComponent   >(m, "UNxForceFieldRadialComponent")
		.def_static("StaticClass", &UNxForceFieldRadialComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ForceStrength", &UNxForceFieldRadialComponent::ForceStrength)
        .def_readwrite("ForceRadius", &UNxForceFieldRadialComponent::ForceRadius)
        .def_readwrite("SelfRotationStrength", &UNxForceFieldRadialComponent::SelfRotationStrength)
        .def_readwrite("ForceFalloff", &UNxForceFieldRadialComponent::ForceFalloff)
        .def_readwrite("Kernel", &UNxForceFieldRadialComponent::Kernel)
          ;
}