#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_SwitchByPlatform()
{
    class_< UWillowSeqCond_SwitchByPlatform, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_SwitchByPlatform", no_init)
        .def("StaticClass", &UWillowSeqCond_SwitchByPlatform::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetPlatform", &UWillowSeqCond_SwitchByPlatform::eventGetPlatform)
        .staticmethod("StaticClass")
  ;
}