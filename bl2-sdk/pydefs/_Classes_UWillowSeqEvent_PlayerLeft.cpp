#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_PlayerLeft()
{
    class_< UWillowSeqEvent_PlayerLeft, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_PlayerLeft", no_init)
        .def("StaticClass", &UWillowSeqEvent_PlayerLeft::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}