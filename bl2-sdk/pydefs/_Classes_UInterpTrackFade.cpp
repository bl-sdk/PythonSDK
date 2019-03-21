#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFade(py::object m)
{
    py::class_< UInterpTrackFade,  UInterpTrackFloatBase   >(m, "UInterpTrackFade")
        .def_readwrite("FadeColor", &UInterpTrackFade::FadeColor)
        .def("StaticClass", &UInterpTrackFade::StaticClass, py::return_value_policy::reference)
          ;
}