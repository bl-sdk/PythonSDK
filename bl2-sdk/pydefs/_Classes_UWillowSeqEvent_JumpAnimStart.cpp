#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_JumpAnimStart()
{
    class_< UWillowSeqEvent_JumpAnimStart, bases< USequenceEvent >  , boost::noncopyable>("UWillowSeqEvent_JumpAnimStart", no_init)
        .def("StaticClass", &UWillowSeqEvent_JumpAnimStart::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}