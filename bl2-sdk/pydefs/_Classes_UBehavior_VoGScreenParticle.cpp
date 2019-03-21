#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_VoGScreenParticle()
{
    py::class_< UBehavior_VoGScreenParticle,  UBehavior_ScreenParticle   >("UBehavior_VoGScreenParticle")
        .def_readwrite("TextureMovieParamName", &UBehavior_VoGScreenParticle::TextureMovieParamName)
        .def("StaticClass", &UBehavior_VoGScreenParticle::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_VoGScreenParticle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}