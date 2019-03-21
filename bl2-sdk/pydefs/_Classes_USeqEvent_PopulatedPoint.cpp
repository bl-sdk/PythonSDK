#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_PopulatedPoint()
{
    class_< USeqEvent_PopulatedPoint, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_PopulatedPoint", no_init)
        .def_readwrite("DestPopulationOpportunity", &USeqEvent_PopulatedPoint::DestPopulationOpportunity)
        .def_readwrite("SpawnPoint", &USeqEvent_PopulatedPoint::SpawnPoint)
        .def("StaticClass", &USeqEvent_PopulatedPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotifyPopulatedActor", &USeqEvent_PopulatedPoint::eventNotifyPopulatedActor)
        .staticmethod("StaticClass")
  ;
}