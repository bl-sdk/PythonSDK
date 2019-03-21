#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackLinearColorProp()
{
    py::class_< UInterpTrackLinearColorProp,  UInterpTrack   >("UInterpTrackLinearColorProp")
        .def_readwrite("PropertyName", &UInterpTrackLinearColorProp::PropertyName)
        .def_readwrite("LinearColorTrack", &UInterpTrackLinearColorBase::LinearColorTrack)
        .def_readwrite("CurveTension", &UInterpTrackLinearColorBase::CurveTension)
        .def("StaticClass", &UInterpTrackLinearColorProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}