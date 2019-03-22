#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowCustomizationManager(py::module &m)
{
    py::class_< UWillowCustomizationManager,  UObject   >(m, "UWillowCustomizationManager")
        .def_readwrite("VfTable_FCallbackEventDevice", &UWillowCustomizationManager::VfTable_FCallbackEventDevice)
        .def_readwrite("PendingCustomizations", &UWillowCustomizationManager::PendingCustomizations)
        .def_readwrite("NumHeadsLoadedSinceLastGC", &UWillowCustomizationManager::NumHeadsLoadedSinceLastGC)
        .def_readwrite("AllCustomizations", &UWillowCustomizationManager::AllCustomizations)
        .def_readwrite("LoadedProductsCustomizationInfos", &UWillowCustomizationManager::LoadedProductsCustomizationInfos)
        .def_readwrite("CustomizationSizes", &UWillowCustomizationManager::CustomizationSizes)
        .def("eventEvaluateCustomizationChangedStat", &UWillowCustomizationManager::eventEvaluateCustomizationChangedStat)
        .def("IsCustomizationUnlocked", &UWillowCustomizationManager::IsCustomizationUnlocked)
        .def("SetCustomizationSeen", &UWillowCustomizationManager::SetCustomizationSeen)
        .def("SetCustomizationLocked", &UWillowCustomizationManager::SetCustomizationLocked)
        .def("GetLoadedCustomizationData", &UWillowCustomizationManager::GetLoadedCustomizationData, py::return_value_policy::reference)
        .def("InitializePlayerPawn", &UWillowCustomizationManager::InitializePlayerPawn)
        .def("ReleaseUnusedCustomizationData", &UWillowCustomizationManager::ReleaseUnusedCustomizationData)
        .def("ReleaseCustomizationData", &UWillowCustomizationManager::ReleaseCustomizationData)
        .def("InitiateCustomizationRequest", &UWillowCustomizationManager::InitiateCustomizationRequest)
        .def("UpdatePRILocalCustomizationArrays", &UWillowCustomizationManager::UpdatePRILocalCustomizationArrays)
        .def("PlayerCustomizationsUpdated", &UWillowCustomizationManager::PlayerCustomizationsUpdated)
          ;
}