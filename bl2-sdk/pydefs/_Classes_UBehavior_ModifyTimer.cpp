#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ModifyTimer()
{
    class_< UBehavior_ModifyTimer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ModifyTimer", no_init)
        .def_readwrite("TimerId", &UBehavior_ModifyTimer::TimerId)
        .def_readwrite("Operation", &UBehavior_ModifyTimer::Operation)
        .def_readwrite("NewTimerDelay", &UBehavior_ModifyTimer::NewTimerDelay)
        .def("StaticClass", &UBehavior_ModifyTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_ModifyTimer::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_ModifyTimer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}