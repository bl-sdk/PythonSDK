#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackLinearColorBase()
{
    py::class_< UInterpTrackLinearColorBase,  UInterpTrack   >("UInterpTrackLinearColorBase")
        .def_readwrite("LinearColorTrack", &UInterpTrackLinearColorBase::LinearColorTrack)
        .def_readwrite("CurveTension", &UInterpTrackLinearColorBase::CurveTension)
        .def("StaticClass", &UInterpTrackLinearColorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}