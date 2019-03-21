#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Talk()
{
    class_< UGearboxDialogAct_Talk, bases< UGearboxDialogNode >  , boost::noncopyable>("UGearboxDialogAct_Talk", no_init)
        .def_readwrite("OutputDelay", &UGearboxDialogAct_Talk::OutputDelay)
        .def_readwrite("TalkData", &UGearboxDialogAct_Talk::TalkData)
        .def("StaticClass", &UGearboxDialogAct_Talk::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UGearboxDialogAct_Talk::eventActivate)
        .def("eventTalkFinished", &UGearboxDialogAct_Talk::eventTalkFinished)
        .def("eventTalkStarted", &UGearboxDialogAct_Talk::eventTalkStarted)
        .staticmethod("StaticClass")
  ;
}