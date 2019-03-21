#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_SequenceActivated()
{
    class_< USeqEvent_SequenceActivated, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_SequenceActivated", no_init)
        .def_readwrite("InputLabel", &USeqEvent_SequenceActivated::InputLabel)
        .def("StaticClass", &USeqEvent_SequenceActivated::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}