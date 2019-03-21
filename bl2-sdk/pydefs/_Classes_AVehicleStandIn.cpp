#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVehicleStandIn()
{
    class_< AVehicleStandIn, bases< AActor >  , boost::noncopyable>("AVehicleStandIn", no_init)
        .def_readwrite("VfTable_IIBodyCompositionInstance", &AVehicleStandIn::VfTable_IIBodyCompositionInstance)
        .def_readwrite("VfTable_IICustomizable", &AVehicleStandIn::VfTable_IICustomizable)
        .def_readwrite("PreviewMesh", &AVehicleStandIn::PreviewMesh)
        .def_readwrite("DefaultCustomization", &AVehicleStandIn::DefaultCustomization)
        .def_readwrite("CachedCustomization", &AVehicleStandIn::CachedCustomization)
        .def_readwrite("InstanceState", &AVehicleStandIn::InstanceState)
        .def("StaticClass", &AVehicleStandIn::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventInitiateCustomizationRequest", &AVehicleStandIn::eventInitiateCustomizationRequest)
        .def("eventDestroyed", &AVehicleStandIn::eventDestroyed)
        .def("DestroyPreviewMesh", &AVehicleStandIn::DestroyPreviewMesh)
        .def("CreatePreviewMesh", &AVehicleStandIn::CreatePreviewMesh)
        .def("ClearBodyCompositionInstance", &AVehicleStandIn::ClearBodyCompositionInstance)
        .def("ApplyPreviewBodyComposition", &AVehicleStandIn::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &AVehicleStandIn::GetBodyInfoProvider, return_value_policy< reference_existing_object >())
        .def("ChangeInstanceDataSwitch", &AVehicleStandIn::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &AVehicleStandIn::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &AVehicleStandIn::PreRemoveBodyComposition)
        .def("AllowFallbackToDefaultCustomizations", &AVehicleStandIn::AllowFallbackToDefaultCustomizations)
        .def("RefreshCustomizationsOnInstanceData", &AVehicleStandIn::RefreshCustomizationsOnInstanceData)
        .def("GetCustomizableName", &AVehicleStandIn::GetCustomizableName)
        .def("GetCustomizableInstanceDataSets", &AVehicleStandIn::GetCustomizableInstanceDataSets)
        .def("GetDesiredCustomizationOfType", &AVehicleStandIn::GetDesiredCustomizationOfType, return_value_policy< reference_existing_object >())
        .def("CustomizationApplied", &AVehicleStandIn::CustomizationApplied)
        .staticmethod("StaticClass")
  ;
}