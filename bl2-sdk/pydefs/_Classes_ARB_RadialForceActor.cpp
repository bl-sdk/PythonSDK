#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_RadialForceActor(py::module &m)
{
    py::class_< ARB_RadialForceActor,  AActor   >(m, "ARB_RadialForceActor")
        .def_readwrite("RenderComponent", &ARB_RadialForceActor::RenderComponent)
        .def_readwrite("ForceStrength", &ARB_RadialForceActor::ForceStrength)
        .def_readwrite("ForceRadius", &ARB_RadialForceActor::ForceRadius)
        .def_readwrite("SwirlStrength", &ARB_RadialForceActor::SwirlStrength)
        .def_readwrite("SpinTorque", &ARB_RadialForceActor::SpinTorque)
        .def_readwrite("ForceFalloff", &ARB_RadialForceActor::ForceFalloff)
        .def_readwrite("RadialForceMode", &ARB_RadialForceActor::RadialForceMode)
        .def_readwrite("CollideWithChannels", &ARB_RadialForceActor::CollideWithChannels)
        .def("StaticClass", &ARB_RadialForceActor::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ARB_RadialForceActor::OnToggle)
          ;
}