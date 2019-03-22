#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackMoveAxis(py::module &m)
{
    py::class_< UInterpTrackMoveAxis,  UInterpTrackFloatBase   >(m, "UInterpTrackMoveAxis")
        .def_readwrite("MoveAxis", &UInterpTrackMoveAxis::MoveAxis)
        .def_readwrite("LookupTrack", &UInterpTrackMoveAxis::LookupTrack)
          ;
}