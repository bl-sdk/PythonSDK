#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackParticleReplay()
{
    py::class_< UInterpTrackParticleReplay,  UInterpTrack   >("UInterpTrackParticleReplay")
        .def_readwrite("TrackKeys", &UInterpTrackParticleReplay::TrackKeys)
        .def("StaticClass", &UInterpTrackParticleReplay::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}