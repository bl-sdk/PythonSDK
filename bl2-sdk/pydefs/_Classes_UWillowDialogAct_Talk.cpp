#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_Talk()
{
    class_< UWillowDialogAct_Talk, bases< UGearboxDialogAct_Talk >  , boost::noncopyable>("UWillowDialogAct_Talk", no_init)
        .def_readwrite("Emote", &UWillowDialogAct_Talk::Emote)
        .def("StaticClass", &UWillowDialogAct_Talk::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivate", &UWillowDialogAct_Talk::eventActivate)
        .def("eventTalkFinished", &UWillowDialogAct_Talk::eventTalkFinished)
        .def("eventTalkStarted", &UWillowDialogAct_Talk::eventTalkStarted)
        .staticmethod("StaticClass")
  ;
}