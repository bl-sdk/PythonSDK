#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LookAtActor()
{
    class_< UWillowSkelControl_LookAtActor, bases< USkelControlLookAt >  , boost::noncopyable>("UWillowSkelControl_LookAtActor", no_init)
        .def_readwrite("AdditionalOffset", &UWillowSkelControl_LookAtActor::AdditionalOffset)
        .def_readwrite("OutOfRangeBlendTime", &UWillowSkelControl_LookAtActor::OutOfRangeBlendTime)
        .def_readwrite("MyAIPawn", &UWillowSkelControl_LookAtActor::MyAIPawn)
        .def("StaticClass", &UWillowSkelControl_LookAtActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}