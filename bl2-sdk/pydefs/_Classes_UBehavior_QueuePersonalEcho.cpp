#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_QueuePersonalEcho()
{
    class_< UBehavior_QueuePersonalEcho, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_QueuePersonalEcho", no_init)
        .def_readwrite("PersonalEchoTag", &UBehavior_QueuePersonalEcho::PersonalEchoTag)
        .def_readwrite("DialogGroup", &UBehavior_QueuePersonalEcho::DialogGroup)
        .def("StaticClass", &UBehavior_QueuePersonalEcho::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_QueuePersonalEcho::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}