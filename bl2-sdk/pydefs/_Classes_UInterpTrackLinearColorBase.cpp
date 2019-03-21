#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackLinearColorBase(py::object m)
{
    py::class_< UInterpTrackLinearColorBase,  UInterpTrack   >(m, "UInterpTrackLinearColorBase")
        .def_readwrite("LinearColorTrack", &UInterpTrackLinearColorBase::LinearColorTrack)
        .def_readwrite("CurveTension", &UInterpTrackLinearColorBase::CurveTension)
        .def("StaticClass", &UInterpTrackLinearColorBase::StaticClass, py::return_value_policy::reference)
          ;
}