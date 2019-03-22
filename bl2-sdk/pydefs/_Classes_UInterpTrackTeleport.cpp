#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackTeleport(py::module &m)
{
    py::class_< UInterpTrackTeleport,  UInterpTrack   >(m, "UInterpTrackTeleport")
        .def_readwrite("TeleportKeys", &UInterpTrackTeleport::TeleportKeys)
          ;
}