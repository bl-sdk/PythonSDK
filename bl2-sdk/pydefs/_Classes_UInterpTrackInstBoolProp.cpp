#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstBoolProp(py::module &m)
{
    py::class_< UInterpTrackInstBoolProp,  UInterpTrackInstProperty   >(m, "UInterpTrackInstBoolProp")
		.def_static("StaticClass", &UInterpTrackInstBoolProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoolProp", &UInterpTrackInstBoolProp::BoolProp)
        .def_readwrite("BitMask", &UInterpTrackInstBoolProp::BitMask)
          ;
}