#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConsoleMessage()
{
    class_< FConsoleMessage >("FConsoleMessage", no_init)
        .def_readwrite("Text", &FConsoleMessage::Text)
        .def_readwrite("TextColor", &FConsoleMessage::TextColor)
        .def_readwrite("MessageLife", &FConsoleMessage::MessageLife)
        .def_readwrite("PRI", &FConsoleMessage::PRI)
  ;
}