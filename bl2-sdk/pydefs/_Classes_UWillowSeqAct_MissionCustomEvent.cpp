#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MissionCustomEvent()
{
    class_< UWillowSeqAct_MissionCustomEvent, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_MissionCustomEvent", no_init)
        .def_readwrite("AssociatedMission", &UWillowSeqAct_MissionCustomEvent::AssociatedMission)
        .def_readwrite("EventName", &UWillowSeqAct_MissionCustomEvent::EventName)
        .def("StaticClass", &UWillowSeqAct_MissionCustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}