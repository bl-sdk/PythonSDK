#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_IsCombatMusicPlaying()
{
    class_< UWillowSeqCond_IsCombatMusicPlaying, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_IsCombatMusicPlaying", no_init)
        .def("StaticClass", &UWillowSeqCond_IsCombatMusicPlaying::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}