#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIScreenParticle(py::module &m)
{
    py::class_< UIScreenParticle,  UInterface   >(m, "UIScreenParticle")
        .def("UpdateVisibilityOfAllActiveScreenParticles", &UIScreenParticle::UpdateVisibilityOfAllActiveScreenParticles)
        .def("ScreenParticlesShouldBeVisible", &UIScreenParticle::ScreenParticlesShouldBeVisible)
        .def("SetUpVoGScreenParticle", &UIScreenParticle::SetUpVoGScreenParticle)
        .def("HideScreenParticle", &UIScreenParticle::HideScreenParticle)
        .def("ShowScreenParticle", &UIScreenParticle::ShowScreenParticle)
          ;
}