#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_EncounterWaveComplete()
{
    class_< USeqEvent_EncounterWaveComplete, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_EncounterWaveComplete", no_init)
        .def_readwrite("CurrentWave", &USeqEvent_EncounterWaveComplete::CurrentWave)
        .def("StaticClass", &USeqEvent_EncounterWaveComplete::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyWaveComplete", &USeqEvent_EncounterWaveComplete::NotifyWaveComplete)
        .staticmethod("StaticClass")
  ;
}