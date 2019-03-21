#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorHelpers()
{
    class_< UBehaviorHelpers, bases< UObject >  , boost::noncopyable>("UBehaviorHelpers", no_init)
        .def("StaticClass", &UBehaviorHelpers::StaticClass, return_value_policy< reference_existing_object >())
        .def("RunAllBehaviorsForEvent", &UBehaviorHelpers::RunAllBehaviorsForEvent)
        .def("BehaviorStrategy", &UBehaviorHelpers::BehaviorStrategy)
        .def("BehaviorSetStrategy", &UBehaviorHelpers::BehaviorSetStrategy)
        .def("ResolveBehaviorProviderDefinitionReference", &UBehaviorHelpers::ResolveBehaviorProviderDefinitionReference, return_value_policy< reference_existing_object >())
        .def("IsBehaviorsV2", &UBehaviorHelpers::IsBehaviorsV2)
        .def("ShouldContinueExecution", &UBehaviorHelpers::ShouldContinueExecution)
        .def("GetNextFireLocationSocket", &UBehaviorHelpers::GetNextFireLocationSocket)
        .def("GetRotationFromAttachmentLocationData", &UBehaviorHelpers::GetRotationFromAttachmentLocationData)
        .def("GetRelativeDirection", &UBehaviorHelpers::GetRelativeDirection)
        .staticmethod("StaticClass")
  ;
}