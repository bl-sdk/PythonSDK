#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowCustomizationManager()
{
    class_< UWillowCustomizationManager, bases< UObject >  , boost::noncopyable>("UWillowCustomizationManager", no_init)
        .def_readwrite("VfTable_FCallbackEventDevice", &UWillowCustomizationManager::VfTable_FCallbackEventDevice)
        .def_readwrite("PendingCustomizations", &UWillowCustomizationManager::PendingCustomizations)
        .def_readwrite("NumHeadsLoadedSinceLastGC", &UWillowCustomizationManager::NumHeadsLoadedSinceLastGC)
        .def_readwrite("AllCustomizations", &UWillowCustomizationManager::AllCustomizations)
        .def_readwrite("LoadedProductsCustomizationInfos", &UWillowCustomizationManager::LoadedProductsCustomizationInfos)
        .def_readwrite("CustomizationSizes", &UWillowCustomizationManager::CustomizationSizes)
        .def("StaticClass", &UWillowCustomizationManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventEvaluateCustomizationChangedStat", &UWillowCustomizationManager::eventEvaluateCustomizationChangedStat)
        .def("IsCustomizationUnlocked", &UWillowCustomizationManager::IsCustomizationUnlocked)
        .def("SetCustomizationSeen", &UWillowCustomizationManager::SetCustomizationSeen)
        .def("SetCustomizationLocked", &UWillowCustomizationManager::SetCustomizationLocked)
        .def("GetLoadedCustomizationData", &UWillowCustomizationManager::GetLoadedCustomizationData, return_value_policy< reference_existing_object >())
        .def("InitializePlayerPawn", &UWillowCustomizationManager::InitializePlayerPawn)
        .def("ReleaseUnusedCustomizationData", &UWillowCustomizationManager::ReleaseUnusedCustomizationData)
        .def("ReleaseCustomizationData", &UWillowCustomizationManager::ReleaseCustomizationData)
        .def("InitiateCustomizationRequest", &UWillowCustomizationManager::InitiateCustomizationRequest)
        .def("UpdatePRILocalCustomizationArrays", &UWillowCustomizationManager::UpdatePRILocalCustomizationArrays)
        .def("PlayerCustomizationsUpdated", &UWillowCustomizationManager::PlayerCustomizationsUpdated)
        .staticmethod("StaticClass")
  ;
}