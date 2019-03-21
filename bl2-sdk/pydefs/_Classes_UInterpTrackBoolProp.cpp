#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackBoolProp(py::object m)
{
    py::class_< UInterpTrackBoolProp,  UInterpTrack   >(m, "UInterpTrackBoolProp")
        .def_readwrite("BoolTrack", &UInterpTrackBoolProp::BoolTrack)
        .def_readwrite("PropertyName", &UInterpTrackBoolProp::PropertyName)
        .def("StaticClass", &UInterpTrackBoolProp::StaticClass, py::return_value_policy::reference)
          ;
}