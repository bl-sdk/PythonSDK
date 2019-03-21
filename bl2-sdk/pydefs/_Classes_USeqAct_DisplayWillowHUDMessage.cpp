#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayWillowHUDMessage()
{
    class_< USeqAct_DisplayWillowHUDMessage, bases< USequenceAction >  , boost::noncopyable>("USeqAct_DisplayWillowHUDMessage", no_init)
        .def_readwrite("MessageType", &USeqAct_DisplayWillowHUDMessage::MessageType)
        .def_readwrite("MarkupString", &USeqAct_DisplayWillowHUDMessage::MarkupString)
        .def_readwrite("Duration", &USeqAct_DisplayWillowHUDMessage::Duration)
        .def("StaticClass", &USeqAct_DisplayWillowHUDMessage::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}