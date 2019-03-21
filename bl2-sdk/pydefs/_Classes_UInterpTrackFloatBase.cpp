#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatBase()
{
    py::class_< UInterpTrackFloatBase,  UInterpTrack   >("UInterpTrackFloatBase")
        .def_readwrite("FloatTrack", &UInterpTrackFloatBase::FloatTrack)
        .def_readwrite("CurveTension", &UInterpTrackFloatBase::CurveTension)
        .def("StaticClass", &UInterpTrackFloatBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}