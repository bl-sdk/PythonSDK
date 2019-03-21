#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SendMessageToPlayers()
{
    class_< UBehavior_SendMessageToPlayers, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SendMessageToPlayers", no_init)
        .def_readwrite("SendMsgClass", &UBehavior_SendMessageToPlayers::SendMsgClass)
        .def("StaticClass", &UBehavior_SendMessageToPlayers::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SendMessageToPlayers::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}