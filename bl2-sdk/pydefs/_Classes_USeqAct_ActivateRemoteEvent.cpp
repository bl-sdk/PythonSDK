#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ActivateRemoteEvent()
{
    class_< USeqAct_ActivateRemoteEvent, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ActivateRemoteEvent", no_init)
        .def_readwrite("Instigator", &USeqAct_ActivateRemoteEvent::Instigator)
        .def_readwrite("EventName", &USeqAct_ActivateRemoteEvent::EventName)
        .def("StaticClass", &USeqAct_ActivateRemoteEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ActivateRemoteEvent::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}