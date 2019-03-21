#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackTeleport()
{
    py::class_< UInterpTrackTeleport,  UInterpTrack   >("UInterpTrackTeleport")
        .def_readwrite("TeleportKeys", &UInterpTrackTeleport::TeleportKeys)
        .def("StaticClass", &UInterpTrackTeleport::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}