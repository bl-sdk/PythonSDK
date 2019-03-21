#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_Used()
{
    class_< USeqEvent_Used, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_Used", no_init)
        .def_readwrite("InteractDistance", &USeqEvent_Used::InteractDistance)
        .def_readwrite("InteractText", &USeqEvent_Used::InteractText)
        .def_readwrite("InteractIcon", &USeqEvent_Used::InteractIcon)
        .def_readwrite("ClassProximityTypes", &USeqEvent_Used::ClassProximityTypes)
        .def_readwrite("IgnoredClassProximityTypes", &USeqEvent_Used::IgnoredClassProximityTypes)
        .def("StaticClass", &USeqEvent_Used::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}