#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimIdle()
{
    class_< UWillowSeqEvent_JumpAnimIdle, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_JumpAnimIdle", no_init)
        .def("StaticClass", &UWillowSeqEvent_JumpAnimIdle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}