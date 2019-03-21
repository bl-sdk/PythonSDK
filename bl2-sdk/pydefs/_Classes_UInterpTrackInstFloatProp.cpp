#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatProp()
{
    py::class_< UInterpTrackInstFloatProp,  UInterpTrackInstProperty   >("UInterpTrackInstFloatProp")
        .def_readwrite("FloatProp", &UInterpTrackInstFloatProp::FloatProp)
        .def_readwrite("ResetFloat", &UInterpTrackInstFloatProp::ResetFloat)
        .def("StaticClass", &UInterpTrackInstFloatProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}