#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URuleEventDef()
{
    class_< URuleEventDef, bases< UGBXDefinition >  , boost::noncopyable>("URuleEventDef", no_init)
        .def_readwrite("EventDefName", &URuleEventDef::EventDefName)
        .def_readwrite("FlagActionOnEventTrigger", &URuleEventDef::FlagActionOnEventTrigger)
        .def("StaticClass", &URuleEventDef::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}