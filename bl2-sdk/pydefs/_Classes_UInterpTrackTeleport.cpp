#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackTeleport(py::module &m)
{
    py::class_< UInterpTrackTeleport,  UInterpTrack   >(m, "UInterpTrackTeleport")
		.def_static("StaticClass", &UInterpTrackTeleport::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TeleportKeys", &UInterpTrackTeleport::TeleportKeys)
          ;
}