#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_SpawnedMissionPickup()
{
    class_< USeqEvent_SpawnedMissionPickup, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_SpawnedMissionPickup", no_init)
        .def("StaticClass", &USeqEvent_SpawnedMissionPickup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}