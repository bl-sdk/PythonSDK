#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorHelpers()
{
    py::class_< UBehaviorHelpers,  UObject   >("UBehaviorHelpers")
        .def("StaticClass", &UBehaviorHelpers::StaticClass, py::return_value_policy::reference)
        .def("RunAllBehaviorsForEvent", &UBehaviorHelpers::RunAllBehaviorsForEvent)
        .def("BehaviorStrategy", &UBehaviorHelpers::BehaviorStrategy)
        .def("BehaviorSetStrategy", &UBehaviorHelpers::BehaviorSetStrategy)
        .def("ResolveBehaviorProviderDefinitionReference", &UBehaviorHelpers::ResolveBehaviorProviderDefinitionReference, py::return_value_policy::reference)
        .def("IsBehaviorsV2", &UBehaviorHelpers::IsBehaviorsV2)
        .def("ShouldContinueExecution", &UBehaviorHelpers::ShouldContinueExecution)
        .def("GetNextFireLocationSocket", &UBehaviorHelpers::GetNextFireLocationSocket)
        .def("GetRotationFromAttachmentLocationData", &UBehaviorHelpers::GetRotationFromAttachmentLocationData)
        .def("GetRelativeDirection", &UBehaviorHelpers::GetRelativeDirection)
        .staticmethod("StaticClass")
  ;
}