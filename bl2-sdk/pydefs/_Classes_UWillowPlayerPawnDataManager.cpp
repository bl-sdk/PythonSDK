#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPlayerPawnDataManager()
{
    class_< UWillowPlayerPawnDataManager, bases< UObject >  , boost::noncopyable>("UWillowPlayerPawnDataManager", no_init)
        .def_readwrite("LoadedOnDemandPackageNames", &UWillowPlayerPawnDataManager::LoadedOnDemandPackageNames)
        .def_readwrite("LoadedOnDemandPackageReferencers", &UWillowPlayerPawnDataManager::LoadedOnDemandPackageReferencers)
        .def_readwrite("PackagesUnloadedDuringGC", &UWillowPlayerPawnDataManager::PackagesUnloadedDuringGC)
        .def_readwrite("WillowPlayerControllersAwaitingPackages", &UWillowPlayerPawnDataManager::WillowPlayerControllersAwaitingPackages)
        .def("StaticClass", &UWillowPlayerPawnDataManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("ReferenceHasBeenApplied", &UWillowPlayerPawnDataManager::ReferenceHasBeenApplied)
        .def("SendRequiredOnDemandPackagesToClient", &UWillowPlayerPawnDataManager::SendRequiredOnDemandPackagesToClient)
        .def("InformClientsPackageUnloaded", &UWillowPlayerPawnDataManager::InformClientsPackageUnloaded)
        .def("UnloadDataPackage", &UWillowPlayerPawnDataManager::UnloadDataPackage)
        .def("InformClientsPackageLoaded", &UWillowPlayerPawnDataManager::InformClientsPackageLoaded)
        .def("LoadDataPackageAsyncNoCallback", &UWillowPlayerPawnDataManager::LoadDataPackageAsyncNoCallback)
        .def("LoadDataPackageAsync", &UWillowPlayerPawnDataManager::LoadDataPackageAsync)
        .def("LoadDataPackage", &UWillowPlayerPawnDataManager::LoadDataPackage)
        .def("FindAlreadyLoadedObject", &UWillowPlayerPawnDataManager::FindAlreadyLoadedObject, return_value_policy< reference_existing_object >())
        .def("LoadVSSVehicleDefinitionAsync", &UWillowPlayerPawnDataManager::LoadVSSVehicleDefinitionAsync)
        .def("LoadVSSVehicleDefinition", &UWillowPlayerPawnDataManager::LoadVSSVehicleDefinition, return_value_policy< reference_existing_object >())
        .def("LoadSkillTreeDefinitionAsync", &UWillowPlayerPawnDataManager::LoadSkillTreeDefinitionAsync)
        .def("LoadSkillTreeDefinition", &UWillowPlayerPawnDataManager::LoadSkillTreeDefinition, return_value_policy< reference_existing_object >())
        .def("LoadPlayerPawnDataAsync", &UWillowPlayerPawnDataManager::LoadPlayerPawnDataAsync)
        .def("LoadPlayerPawnData", &UWillowPlayerPawnDataManager::LoadPlayerPawnData, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}