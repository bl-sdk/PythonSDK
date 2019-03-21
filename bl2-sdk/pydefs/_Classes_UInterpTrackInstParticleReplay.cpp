#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstParticleReplay()
{
    class_< UInterpTrackInstParticleReplay, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstParticleReplay", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstParticleReplay::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstParticleReplay::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}