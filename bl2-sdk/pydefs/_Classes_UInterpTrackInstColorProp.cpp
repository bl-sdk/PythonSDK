#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorProp()
{
    py::class_< UInterpTrackInstColorProp,  UInterpTrackInst   >("UInterpTrackInstColorProp")
        .def_readwrite("ColorProp", &UInterpTrackInstColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstColorProp::ResetColor)
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
        .def("StaticClass", &UInterpTrackInstColorProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}