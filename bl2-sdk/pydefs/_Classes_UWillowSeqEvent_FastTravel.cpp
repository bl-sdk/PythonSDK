#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_FastTravel()
{
    class_< UWillowSeqEvent_FastTravel, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_FastTravel", no_init)
        .def("StaticClass", &UWillowSeqEvent_FastTravel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}