#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureLevelMusic()
{
    class_< UWillowSeqAct_ConfigureLevelMusic, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ConfigureLevelMusic", no_init)
        .def_readwrite("MusicStartAkEvent", &UWillowSeqAct_ConfigureLevelMusic::MusicStartAkEvent)
        .def_readwrite("MusicStopAkEvent", &UWillowSeqAct_ConfigureLevelMusic::MusicStopAkEvent)
        .def_readwrite("AmbientAkState", &UWillowSeqAct_ConfigureLevelMusic::AmbientAkState)
        .def_readwrite("CombatAkState", &UWillowSeqAct_ConfigureLevelMusic::CombatAkState)
        .def("StaticClass", &UWillowSeqAct_ConfigureLevelMusic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}