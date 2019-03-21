#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackMove(py::object m)
{
    py::class_< UInterpTrackMove,  UInterpTrack   >(m, "UInterpTrackMove")
        .def_readwrite("PosTrack", &UInterpTrackMove::PosTrack)
        .def_readwrite("EulerTrack", &UInterpTrackMove::EulerTrack)
        .def_readwrite("LookupTrack", &UInterpTrackMove::LookupTrack)
        .def_readwrite("LookAtGroupName", &UInterpTrackMove::LookAtGroupName)
        .def_readwrite("LinCurveTension", &UInterpTrackMove::LinCurveTension)
        .def_readwrite("AngCurveTension", &UInterpTrackMove::AngCurveTension)
        .def_readwrite("MoveFrame", &UInterpTrackMove::MoveFrame)
        .def_readwrite("RotMode", &UInterpTrackMove::RotMode)
        .def("StaticClass", &UInterpTrackMove::StaticClass, py::return_value_policy::reference)
          ;
}