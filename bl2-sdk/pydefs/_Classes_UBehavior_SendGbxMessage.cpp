#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SendGbxMessage()
{
    class_< UBehavior_SendGbxMessage, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SendGbxMessage", no_init)
        .def_readwrite("MessageDefinition", &UBehavior_SendGbxMessage::MessageDefinition)
        .def_readwrite("AssignSenderTo", &UBehavior_SendGbxMessage::AssignSenderTo)
        .def_readwrite("AssignSubjectTo", &UBehavior_SendGbxMessage::AssignSubjectTo)
        .def_readwrite("TakeLocationFrom", &UBehavior_SendGbxMessage::TakeLocationFrom)
        .def_readwrite("MetaData", &UBehavior_SendGbxMessage::MetaData)
        .def("StaticClass", &UBehavior_SendGbxMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SendGbxMessage::ApplyBehaviorToContext)
        .def("GetLocation", &UBehavior_SendGbxMessage::GetLocation)
        .def("GetMessageParameter", &UBehavior_SendGbxMessage::GetMessageParameter, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}