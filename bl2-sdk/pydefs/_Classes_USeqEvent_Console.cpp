#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_Console()
{
    class_< USeqEvent_Console, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_Console", no_init)
        .def_readwrite("ConsoleEventName", &USeqEvent_Console::ConsoleEventName)
        .def_readwrite("EventDesc", &USeqEvent_Console::EventDesc)
        .def("StaticClass", &USeqEvent_Console::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}