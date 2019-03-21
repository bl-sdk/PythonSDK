#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSound()
{
    class_< UInterpTrackInstSound, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstSound", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstSound::LastUpdatePosition)
        .def_readwrite("PlayAudioComp", &UInterpTrackInstSound::PlayAudioComp)
        .def("StaticClass", &UInterpTrackInstSound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}