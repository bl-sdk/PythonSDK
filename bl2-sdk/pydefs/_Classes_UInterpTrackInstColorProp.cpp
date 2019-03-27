#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorProp(py::module &m)
{
    py::class_< UInterpTrackInstColorProp,  UInterpTrackInst   >(m, "UInterpTrackInstColorProp")
		.def_static("StaticClass", &UInterpTrackInstColorProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ColorProp", &UInterpTrackInstColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstColorProp::ResetColor)
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
          ;
}