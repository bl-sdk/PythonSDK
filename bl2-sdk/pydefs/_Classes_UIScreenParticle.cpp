#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIScreenParticle(py::object m)
{
    py::class_< UIScreenParticle,  UInterface   >(m, "UIScreenParticle")
        .def("StaticClass", &UIScreenParticle::StaticClass, py::return_value_policy::reference)
        .def("UpdateVisibilityOfAllActiveScreenParticles", &UIScreenParticle::UpdateVisibilityOfAllActiveScreenParticles)
        .def("ScreenParticlesShouldBeVisible", &UIScreenParticle::ScreenParticlesShouldBeVisible)
        .def("SetUpVoGScreenParticle", &UIScreenParticle::SetUpVoGScreenParticle)
        .def("HideScreenParticle", &UIScreenParticle::HideScreenParticle)
        .def("ShowScreenParticle", &UIScreenParticle::ShowScreenParticle)
          ;
}