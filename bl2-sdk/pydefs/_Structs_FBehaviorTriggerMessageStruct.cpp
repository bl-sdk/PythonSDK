#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorTriggerMessageStruct(py::module &m)
{
    py::class_< FBehaviorTriggerMessageStruct >(m, "FBehaviorTriggerMessageStruct")
        .def_readwrite("MessageDefinition", &FBehaviorTriggerMessageStruct::MessageDefinition)
        .def_readwrite("Instigator", &FBehaviorTriggerMessageStruct::Instigator)
        .def_readwrite("OtherEventParticipant", &FBehaviorTriggerMessageStruct::OtherEventParticipant)
        .def_readwrite("Behaviors", &FBehaviorTriggerMessageStruct::Behaviors)
  ;
}