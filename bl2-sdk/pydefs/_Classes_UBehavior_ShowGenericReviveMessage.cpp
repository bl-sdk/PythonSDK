#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ShowGenericReviveMessage()
{
    class_< UBehavior_ShowGenericReviveMessage, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ShowGenericReviveMessage", no_init)
        .def_readwrite("ReviveMessageDef", &UBehavior_ShowGenericReviveMessage::ReviveMessageDef)
        .def_readwrite("OtherPlayer", &UBehavior_ShowGenericReviveMessage::OtherPlayer)
        .def("StaticClass", &UBehavior_ShowGenericReviveMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_ShowGenericReviveMessage::ResolveController, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ShowGenericReviveMessage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}