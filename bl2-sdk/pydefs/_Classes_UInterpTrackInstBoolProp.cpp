#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstBoolProp(py::module &m)
{
    py::class_< UInterpTrackInstBoolProp,  UInterpTrackInstProperty   >(m, "UInterpTrackInstBoolProp")
        .def_readwrite("BoolProp", &UInterpTrackInstBoolProp::BoolProp)
        .def_readwrite("BitMask", &UInterpTrackInstBoolProp::BitMask)
          ;
}