#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackMoveAxis()
{
    py::class_< UInterpTrackMoveAxis,  UInterpTrackFloatBase   >("UInterpTrackMoveAxis")
        .def_readwrite("MoveAxis", &UInterpTrackMoveAxis::MoveAxis)
        .def_readwrite("LookupTrack", &UInterpTrackMoveAxis::LookupTrack)
        .def("StaticClass", &UInterpTrackMoveAxis::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}