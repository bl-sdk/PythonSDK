#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DenStat()
{
    class_< UWillowSeqEvent_DenStat, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_DenStat", no_init)
        .def_readwrite("TriggerValue", &UWillowSeqEvent_DenStat::TriggerValue)
        .def("StaticClass", &UWillowSeqEvent_DenStat::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}