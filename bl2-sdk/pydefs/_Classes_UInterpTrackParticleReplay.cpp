#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackParticleReplay(py::module &m)
{
    py::class_< UInterpTrackParticleReplay,  UInterpTrack   >(m, "UInterpTrackParticleReplay")
        .def_readwrite("TrackKeys", &UInterpTrackParticleReplay::TrackKeys)
          ;
}