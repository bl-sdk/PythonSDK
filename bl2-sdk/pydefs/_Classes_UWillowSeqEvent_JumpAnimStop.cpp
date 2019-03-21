#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimStop()
{
    class_< UWillowSeqEvent_JumpAnimStop, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_JumpAnimStop", no_init)
        .def("StaticClass", &UWillowSeqEvent_JumpAnimStop::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}