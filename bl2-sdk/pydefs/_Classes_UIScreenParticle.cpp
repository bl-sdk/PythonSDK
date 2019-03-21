#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIScreenParticle()
{
    class_< UIScreenParticle, bases< UInterface >  , boost::noncopyable>("UIScreenParticle", no_init)
        .def("StaticClass", &UIScreenParticle::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateVisibilityOfAllActiveScreenParticles", &UIScreenParticle::UpdateVisibilityOfAllActiveScreenParticles)
        .def("ScreenParticlesShouldBeVisible", &UIScreenParticle::ScreenParticlesShouldBeVisible)
        .def("SetUpVoGScreenParticle", &UIScreenParticle::SetUpVoGScreenParticle)
        .def("HideScreenParticle", &UIScreenParticle::HideScreenParticle)
        .def("ShowScreenParticle", &UIScreenParticle::ShowScreenParticle)
        .staticmethod("StaticClass")
  ;
}