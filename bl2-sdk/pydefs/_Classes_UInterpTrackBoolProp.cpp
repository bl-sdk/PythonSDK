#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackBoolProp(py::module &m)
{
    py::class_< UInterpTrackBoolProp,  UInterpTrack   >(m, "UInterpTrackBoolProp")
		.def_static("StaticClass", &UInterpTrackBoolProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoolTrack", &UInterpTrackBoolProp::BoolTrack)
        .def_readwrite("PropertyName", &UInterpTrackBoolProp::PropertyName)
          ;
}