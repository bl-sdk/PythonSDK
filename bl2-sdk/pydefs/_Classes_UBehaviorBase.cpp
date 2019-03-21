#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorBase()
{
    class_< UBehaviorBase, bases< UObject >  , boost::noncopyable>("UBehaviorBase", no_init)
        .def_readwrite("Context", &UBehaviorBase::Context)
        .def("StaticClass", &UBehaviorBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsBehaviorDebugEnabled", &UBehaviorBase::IsBehaviorDebugEnabled)
        .def("ToggleBehaviorDebug", &UBehaviorBase::ToggleBehaviorDebug)
        .def("GetParameterIndex", &UBehaviorBase::GetParameterIndex)
        .def("StaticGetAllBehaviorContexts", &UBehaviorBase::StaticGetAllBehaviorContexts)
        .def("StaticGetBehaviorContext", &UBehaviorBase::StaticGetBehaviorContext, return_value_policy< reference_existing_object >())
        .def("GetBehaviorContext", &UBehaviorBase::GetBehaviorContext, return_value_policy< reference_existing_object >())
        .def("GetBehaviorContextInterface", &UBehaviorBase::GetBehaviorContextInterface, return_value_policy< reference_existing_object >())
        .def("eventApplyBehaviorToContext", &UBehaviorBase::eventApplyBehaviorToContext)
        .def("eventApplyBehavior", &UBehaviorBase::eventApplyBehavior)
        .def("GetImpactInfoParameter", &UBehaviorBase::GetImpactInfoParameter)
        .def("GetActorParameter", &UBehaviorBase::GetActorParameter, return_value_policy< reference_existing_object >())
        .def("GetVectorParameter", &UBehaviorBase::GetVectorParameter)
        .def("SetImpactInfoParameter", &UBehaviorBase::SetImpactInfoParameter)
        .def("SetActorParameter", &UBehaviorBase::SetActorParameter)
        .def("SetVectorParameter", &UBehaviorBase::SetVectorParameter)
        .def("GetWorldInfo", &UBehaviorBase::GetWorldInfo, return_value_policy< reference_existing_object >())
        .def("RunBehaviors", &UBehaviorBase::RunBehaviors)
        .staticmethod("StaticClass")
  ;
}