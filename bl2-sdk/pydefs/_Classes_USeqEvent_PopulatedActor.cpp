#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_PopulatedActor()
{
    class_< USeqEvent_PopulatedActor, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_PopulatedActor", no_init)
        .def_readwrite("DestPopulationOpportunity", &USeqEvent_PopulatedActor::DestPopulationOpportunity)
        .def_readwrite("SpawnPoint", &USeqEvent_PopulatedActor::SpawnPoint)
        .def("StaticClass", &USeqEvent_PopulatedActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotifyPopulatedActor", &USeqEvent_PopulatedActor::eventNotifyPopulatedActor)
        .staticmethod("StaticClass")
  ;
}