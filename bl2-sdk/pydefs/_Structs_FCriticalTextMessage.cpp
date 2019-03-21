#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCriticalTextMessage()
{
    class_< FCriticalTextMessage >("FCriticalTextMessage", no_init)
        .def_readwrite("Message", &FCriticalTextMessage::Message)
        .def_readwrite("Title", &FCriticalTextMessage::Title)
        .def_readwrite("DestroyTime", &FCriticalTextMessage::DestroyTime)
        .def_readwrite("DrawColor", &FCriticalTextMessage::DrawColor)
  ;
}