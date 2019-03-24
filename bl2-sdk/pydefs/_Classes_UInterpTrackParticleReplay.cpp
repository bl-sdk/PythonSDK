#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackParticleReplay(py::module &m)
{
    py::class_< UInterpTrackParticleReplay,  UInterpTrack   >(m, "UInterpTrackParticleReplay")
		.def_static("StaticClass", &UInterpTrackParticleReplay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TrackKeys", &UInterpTrackParticleReplay::TrackKeys)
          ;
}