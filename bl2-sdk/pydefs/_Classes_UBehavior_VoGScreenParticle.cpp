#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_VoGScreenParticle(py::module &m)
{
    py::class_< UBehavior_VoGScreenParticle,  UBehavior_ScreenParticle   >(m, "UBehavior_VoGScreenParticle")
        .def_readwrite("TextureMovieParamName", &UBehavior_VoGScreenParticle::TextureMovieParamName)
        .def("ApplyBehaviorToContext", &UBehavior_VoGScreenParticle::ApplyBehaviorToContext)
          ;
}