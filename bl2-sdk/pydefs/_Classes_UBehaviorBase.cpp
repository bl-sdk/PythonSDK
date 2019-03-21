#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorBase()
{
    py::class_< UBehaviorBase,  UObject   >("UBehaviorBase")
        .def_readwrite("Context", &UBehaviorBase::Context)
        .def("StaticClass", &UBehaviorBase::StaticClass, py::return_value_policy::reference)
        .def("IsBehaviorDebugEnabled", &UBehaviorBase::IsBehaviorDebugEnabled)
        .def("ToggleBehaviorDebug", &UBehaviorBase::ToggleBehaviorDebug)
        .def("GetParameterIndex", &UBehaviorBase::GetParameterIndex)
        .def("StaticGetAllBehaviorContexts", &UBehaviorBase::StaticGetAllBehaviorContexts)
        .def("StaticGetBehaviorContext", &UBehaviorBase::StaticGetBehaviorContext, py::return_value_policy::reference)
        .def("GetBehaviorContext", &UBehaviorBase::GetBehaviorContext, py::return_value_policy::reference)
        .def("GetBehaviorContextInterface", &UBehaviorBase::GetBehaviorContextInterface, py::return_value_policy::reference)
        .def("eventApplyBehaviorToContext", &UBehaviorBase::eventApplyBehaviorToContext)
        .def("eventApplyBehavior", &UBehaviorBase::eventApplyBehavior)
        .def("GetImpactInfoParameter", &UBehaviorBase::GetImpactInfoParameter)
        .def("GetActorParameter", &UBehaviorBase::GetActorParameter, py::return_value_policy::reference)
        .def("GetVectorParameter", &UBehaviorBase::GetVectorParameter)
        .def("SetImpactInfoParameter", &UBehaviorBase::SetImpactInfoParameter)
        .def("SetActorParameter", &UBehaviorBase::SetActorParameter)
        .def("SetVectorParameter", &UBehaviorBase::SetVectorParameter)
        .def("GetWorldInfo", &UBehaviorBase::GetWorldInfo, py::return_value_policy::reference)
        .def("RunBehaviors", &UBehaviorBase::RunBehaviors)
        .staticmethod("StaticClass")
  ;
}