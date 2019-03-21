#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFade()
{
    py::class_< UInterpTrackFade,  UInterpTrackFloatBase   >("UInterpTrackFade")
        .def_readwrite("FadeColor", &UInterpTrackFade::FadeColor)
        .def("StaticClass", &UInterpTrackFade::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}