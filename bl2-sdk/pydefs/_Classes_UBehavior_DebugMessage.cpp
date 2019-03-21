#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DebugMessage()
{
    class_< UBehavior_DebugMessage, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DebugMessage", no_init)
        .def_readwrite("DebugMessage", &UBehavior_DebugMessage::DebugMessage)
        .def_readwrite("Duration", &UBehavior_DebugMessage::Duration)
        .def_readwrite("DebugFloat", &UBehavior_DebugMessage::DebugFloat)
        .def_readwrite("DebugInt", &UBehavior_DebugMessage::DebugInt)
        .def_readwrite("DebugObject", &UBehavior_DebugMessage::DebugObject)
        .def_readwrite("DebugVector", &UBehavior_DebugMessage::DebugVector)
        .def("StaticClass", &UBehavior_DebugMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DebugMessage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}