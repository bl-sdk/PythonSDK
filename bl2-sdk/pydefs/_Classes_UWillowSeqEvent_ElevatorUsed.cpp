#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_ElevatorUsed()
{
    class_< UWillowSeqEvent_ElevatorUsed, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_ElevatorUsed", no_init)
        .def("StaticClass", &UWillowSeqEvent_ElevatorUsed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}