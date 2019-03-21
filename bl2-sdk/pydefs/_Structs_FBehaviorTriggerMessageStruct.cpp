#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorTriggerMessageStruct()
{
    class_< FBehaviorTriggerMessageStruct >("FBehaviorTriggerMessageStruct", no_init)
        .def_readwrite("MessageDefinition", &FBehaviorTriggerMessageStruct::MessageDefinition)
        .def_readwrite("Instigator", &FBehaviorTriggerMessageStruct::Instigator)
        .def_readwrite("OtherEventParticipant", &FBehaviorTriggerMessageStruct::OtherEventParticipant)
        .def_readwrite("Behaviors", &FBehaviorTriggerMessageStruct::Behaviors)
  ;
}