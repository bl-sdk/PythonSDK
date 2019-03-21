#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstLinearColorProp()
{
    py::class_< UInterpTrackInstLinearColorProp,  UInterpTrackInstProperty   >("UInterpTrackInstLinearColorProp")
        .def_readwrite("ColorProp", &UInterpTrackInstLinearColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstLinearColorProp::ResetColor)
        .def("StaticClass", &UInterpTrackInstLinearColorProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}