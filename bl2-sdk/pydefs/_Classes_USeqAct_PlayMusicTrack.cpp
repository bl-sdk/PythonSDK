#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PlayMusicTrack()
{
    class_< USeqAct_PlayMusicTrack, bases< USequenceAction >  , boost::noncopyable>("USeqAct_PlayMusicTrack", no_init)
        .def_readwrite("MusicTrack", &USeqAct_PlayMusicTrack::MusicTrack)
        .def("StaticClass", &USeqAct_PlayMusicTrack::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}