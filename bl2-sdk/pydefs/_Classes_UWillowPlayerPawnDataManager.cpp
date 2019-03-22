#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPlayerPawnDataManager(py::module &m)
{
    py::class_< UWillowPlayerPawnDataManager,  UObject   >(m, "UWillowPlayerPawnDataManager")
        .def_readwrite("LoadedOnDemandPackageNames", &UWillowPlayerPawnDataManager::LoadedOnDemandPackageNames)
        .def_readwrite("LoadedOnDemandPackageReferencers", &UWillowPlayerPawnDataManager::LoadedOnDemandPackageReferencers)
        .def_readwrite("PackagesUnloadedDuringGC", &UWillowPlayerPawnDataManager::PackagesUnloadedDuringGC)
        .def_readwrite("WillowPlayerControllersAwaitingPackages", &UWillowPlayerPawnDataManager::WillowPlayerControllersAwaitingPackages)
        .def("ReferenceHasBeenApplied", &UWillowPlayerPawnDataManager::ReferenceHasBeenApplied)
        .def("SendRequiredOnDemandPackagesToClient", &UWillowPlayerPawnDataManager::SendRequiredOnDemandPackagesToClient)
        .def("InformClientsPackageUnloaded", &UWillowPlayerPawnDataManager::InformClientsPackageUnloaded)
        .def("UnloadDataPackage", &UWillowPlayerPawnDataManager::UnloadDataPackage)
        .def("InformClientsPackageLoaded", &UWillowPlayerPawnDataManager::InformClientsPackageLoaded)
        .def("LoadDataPackageAsyncNoCallback", &UWillowPlayerPawnDataManager::LoadDataPackageAsyncNoCallback)
        .def("LoadDataPackageAsync", &UWillowPlayerPawnDataManager::LoadDataPackageAsync)
        .def("LoadDataPackage", &UWillowPlayerPawnDataManager::LoadDataPackage)
        .def("FindAlreadyLoadedObject", &UWillowPlayerPawnDataManager::FindAlreadyLoadedObject, py::return_value_policy::reference)
        .def("LoadVSSVehicleDefinitionAsync", &UWillowPlayerPawnDataManager::LoadVSSVehicleDefinitionAsync)
        .def("LoadVSSVehicleDefinition", &UWillowPlayerPawnDataManager::LoadVSSVehicleDefinition, py::return_value_policy::reference)
        .def("LoadSkillTreeDefinitionAsync", &UWillowPlayerPawnDataManager::LoadSkillTreeDefinitionAsync)
        .def("LoadSkillTreeDefinition", &UWillowPlayerPawnDataManager::LoadSkillTreeDefinition, py::return_value_policy::reference)
        .def("LoadPlayerPawnDataAsync", &UWillowPlayerPawnDataManager::LoadPlayerPawnDataAsync)
        .def("LoadPlayerPawnData", &UWillowPlayerPawnDataManager::LoadPlayerPawnData, py::return_value_policy::reference)
          ;
}