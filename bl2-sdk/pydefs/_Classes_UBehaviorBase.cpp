#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorBase(py::object m)
{
    py::class_< UBehaviorBase,  UObject   >(m, "UBehaviorBase")
        .def_readwrite("Context", &UBehaviorBase::Context)
        .def("StaticClass", &UBehaviorBase::StaticClass, py::return_value_policy::reference)
        .def("IsBehaviorDebugEnabled", &UBehaviorBase::IsBehaviorDebugEnabled)
        .def("ToggleBehaviorDebug", &UBehaviorBase::ToggleBehaviorDebug)
        .def("GetParameterIndex", &UBehaviorBase::GetParameterIndex)
        .def("StaticGetAllBehaviorContexts", &UBehaviorBase::StaticGetAllBehaviorContexts)
        .def("StaticGetBehaviorContext", &UBehaviorBase::StaticGetBehaviorContext, py::return_value_policy::reference)
        .def("GetBehaviorContext", &UBehaviorBase::GetBehaviorContext, py::return_value_policy::reference)
        .def("GetBehaviorContextInterface", [](UBehaviorBase &self , class UClass* InterfaceClass, struct FBehaviorContextData ContextData, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters EventData) { class UObject** pyContextObject = 0 ;  class UInterface* ret =  self.GetBehaviorContextInterface(InterfaceClass, ContextData, SelfObject, MyInstigatorObject, OtherEventParticipantObject, EventData, pyContextObject); return py::make_tuple(ret, *pyContextObject); })
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
          ;
}