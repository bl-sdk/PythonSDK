#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_PlayerJoined()
{
    class_< UWillowSeqEvent_PlayerJoined, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_PlayerJoined", no_init)
        .def("StaticClass", &UWillowSeqEvent_PlayerJoined::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}