#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackLinearColorProp(py::module &m)
{
    py::class_< UInterpTrackLinearColorProp,  UInterpTrack   >(m, "UInterpTrackLinearColorProp")
		.def_static("StaticClass", &UInterpTrackLinearColorProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyName", &UInterpTrackLinearColorProp::PropertyName)
        .def_readwrite("LinearColorTrack", &UInterpTrackLinearColorBase::LinearColorTrack)
        .def_readwrite("CurveTension", &UInterpTrackLinearColorBase::CurveTension)
          ;
}