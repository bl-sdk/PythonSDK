#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackParticleReplay()
{
    class_< UInterpTrackParticleReplay, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackParticleReplay", no_init)
        .def_readwrite("TrackKeys", &UInterpTrackParticleReplay::TrackKeys)
        .def("StaticClass", &UInterpTrackParticleReplay::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}