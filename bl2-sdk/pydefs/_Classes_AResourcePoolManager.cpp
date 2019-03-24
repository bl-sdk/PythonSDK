#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AResourcePoolManager(py::module &m)
{
    py::class_< AResourcePoolManager,  AReplicationInfo   >(m, "AResourcePoolManager")
		.def_static("StaticClass", &AResourcePoolManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NextPoolGUID", &AResourcePoolManager::NextPoolGUID)
        .def("CreateResourcePoolManagerIfNecessary", [](AResourcePoolManager &self , class AActor* ActorOwner) { class AResourcePoolManager** pyMgr = 0 ;   self.CreateResourcePoolManagerIfNecessary(ActorOwner, pyMgr); return py::make_tuple(*pyMgr); })
        .def("DeletePoolAtIndex", &AResourcePoolManager::DeletePoolAtIndex)
        .def("InternalCreatePoolAtIndex", &AResourcePoolManager::InternalCreatePoolAtIndex, py::return_value_policy::reference)
        .def("CreatePoolAtIndex", [](AResourcePoolManager &self , class AActor* ActorOwner, class UResourcePoolDefinition* PoolDefinition, int Index, unsigned char PoolGUID) { class AResourcePoolManager** pyMgr = 0 ;  class UResourcePool* ret =  self.CreatePoolAtIndex(ActorOwner, PoolDefinition, Index, PoolGUID, pyMgr); return py::make_tuple(ret, *pyMgr); })
        .def("GetDebugInfo", &AResourcePoolManager::GetDebugInfo)
        .def("GetNumberOfPoolsInUse", &AResourcePoolManager::GetNumberOfPoolsInUse)
        .def("RecalculateBaseValues", &AResourcePoolManager::RecalculateBaseValues)
        .def("GetResourcePoolForResourceDefinition", [](AResourcePoolManager &self , class AActor* ActorOwner, class UResourceDefinition* Resource) { class AResourcePoolManager** pyMgr = 0 ;  struct FResourcePoolReference ret =  self.GetResourcePoolForResourceDefinition(ActorOwner, Resource, pyMgr); return py::make_tuple(ret, *pyMgr); })
        .def("HasResourcePoolForResourceDefinition", &AResourcePoolManager::HasResourcePoolForResourceDefinition)
        .def("DeletePoolByReference", &AResourcePoolManager::DeletePoolByReference)
        .def("DeletePool", &AResourcePoolManager::DeletePool)
        .def("DeleteAllPools", &AResourcePoolManager::DeleteAllPools)
        .def("CreatePool", [](AResourcePoolManager &self , class AActor* ActorOwner, class UResourcePoolDefinition* PoolDefinition, unsigned long bReinitializeExistingPool) { class AResourcePoolManager** pyMgr = 0 ;  struct FResourcePoolReference ret =  self.CreatePool(ActorOwner, PoolDefinition, bReinitializeExistingPool, pyMgr); return py::make_tuple(ret, *pyMgr); })
        .def("eventDestroyed", &AResourcePoolManager::eventDestroyed)
        .def("ShutDown", &AResourcePoolManager::ShutDown)
        .def("AllResourcePools", [](AResourcePoolManager &self , class AResourcePoolManager* Mgr) { class UResourcePool** pyPool = 0 ; class UResourcePoolDefinition** pyPoolDefinition = 0 ;   self.AllResourcePools(Mgr, pyPool, pyPoolDefinition); return py::make_tuple(*pyPool, *pyPoolDefinition); })
          ;
}