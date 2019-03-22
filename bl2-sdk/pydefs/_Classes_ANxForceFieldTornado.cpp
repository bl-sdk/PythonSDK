#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxForceFieldTornado(py::module &m)
{
    py::class_< ANxForceFieldTornado,  ANxForceField   >(m, "ANxForceFieldTornado")
        .def_readwrite("Shape", &ANxForceFieldTornado::Shape)
        .def_readwrite("DrawComponent", &ANxForceFieldTornado::DrawComponent)
        .def_readwrite("RadialStrength", &ANxForceFieldTornado::RadialStrength)
        .def_readwrite("RotationalStrength", &ANxForceFieldTornado::RotationalStrength)
        .def_readwrite("LiftStrength", &ANxForceFieldTornado::LiftStrength)
        .def_readwrite("ForceRadius", &ANxForceFieldTornado::ForceRadius)
        .def_readwrite("ForceTopRadius", &ANxForceFieldTornado::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &ANxForceFieldTornado::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ANxForceFieldTornado::EscapeVelocity)
        .def_readwrite("ForceHeight", &ANxForceFieldTornado::ForceHeight)
        .def_readwrite("HeightOffset", &ANxForceFieldTornado::HeightOffset)
        .def_readwrite("SelfRotationStrength", &ANxForceFieldTornado::SelfRotationStrength)
        .def_readwrite("Kernel", &ANxForceFieldTornado::Kernel)
        .def("StaticClass", &ANxForceFieldTornado::StaticClass, py::return_value_policy::reference)
        .def("DoInitRBPhys", &ANxForceFieldTornado::DoInitRBPhys)
          ;
}