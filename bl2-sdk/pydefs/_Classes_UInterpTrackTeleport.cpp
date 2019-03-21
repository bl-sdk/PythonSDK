#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackTeleport(py::object m)
{
    py::class_< UInterpTrackTeleport,  UInterpTrack   >(m, "UInterpTrackTeleport")
        .def_readwrite("TeleportKeys", &UInterpTrackTeleport::TeleportKeys)
        .def("StaticClass", &UInterpTrackTeleport::StaticClass, py::return_value_policy::reference)
          ;
}