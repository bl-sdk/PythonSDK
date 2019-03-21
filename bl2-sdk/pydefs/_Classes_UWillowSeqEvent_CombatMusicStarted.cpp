#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_CombatMusicStarted()
{
    class_< UWillowSeqEvent_CombatMusicStarted, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_CombatMusicStarted", no_init)
        .def("StaticClass", &UWillowSeqEvent_CombatMusicStarted::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}