#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleStandIn(py::object m)
{
    py::class_< AVehicleStandIn,  AActor   >(m, "AVehicleStandIn")
        .def_readwrite("VfTable_IIBodyCompositionInstance", &AVehicleStandIn::VfTable_IIBodyCompositionInstance)
        .def_readwrite("VfTable_IICustomizable", &AVehicleStandIn::VfTable_IICustomizable)
        .def_readwrite("PreviewMesh", &AVehicleStandIn::PreviewMesh)
        .def_readwrite("DefaultCustomization", &AVehicleStandIn::DefaultCustomization)
        .def_readwrite("CachedCustomization", &AVehicleStandIn::CachedCustomization)
        .def_readwrite("InstanceState", &AVehicleStandIn::InstanceState)
        .def("StaticClass", &AVehicleStandIn::StaticClass, py::return_value_policy::reference)
        .def("eventInitiateCustomizationRequest", &AVehicleStandIn::eventInitiateCustomizationRequest)
        .def("eventDestroyed", &AVehicleStandIn::eventDestroyed)
        .def("DestroyPreviewMesh", &AVehicleStandIn::DestroyPreviewMesh)
        .def("CreatePreviewMesh", &AVehicleStandIn::CreatePreviewMesh)
        .def("ClearBodyCompositionInstance", &AVehicleStandIn::ClearBodyCompositionInstance)
        .def("ApplyPreviewBodyComposition", &AVehicleStandIn::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &AVehicleStandIn::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ChangeInstanceDataSwitch", &AVehicleStandIn::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &AVehicleStandIn::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &AVehicleStandIn::PreRemoveBodyComposition)
        .def("AllowFallbackToDefaultCustomizations", &AVehicleStandIn::AllowFallbackToDefaultCustomizations)
        .def("RefreshCustomizationsOnInstanceData", &AVehicleStandIn::RefreshCustomizationsOnInstanceData)
        .def("GetCustomizableName", &AVehicleStandIn::GetCustomizableName)
        .def("GetCustomizableInstanceDataSets", &AVehicleStandIn::GetCustomizableInstanceDataSets)
        .def("GetDesiredCustomizationOfType", &AVehicleStandIn::GetDesiredCustomizationOfType, py::return_value_policy::reference)
        .def("CustomizationApplied", &AVehicleStandIn::CustomizationApplied)
          ;
}