#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstLinearColorProp(py::module &m)
{
    py::class_< UInterpTrackInstLinearColorProp,  UInterpTrackInstProperty   >(m, "UInterpTrackInstLinearColorProp")
		.def_static("StaticClass", &UInterpTrackInstLinearColorProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ColorProp", &UInterpTrackInstLinearColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstLinearColorProp::ResetColor)
          ;
}