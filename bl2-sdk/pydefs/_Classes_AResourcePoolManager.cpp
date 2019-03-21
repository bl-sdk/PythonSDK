#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AResourcePoolManager()
{
    class_< AResourcePoolManager, bases< AReplicationInfo >  , boost::noncopyable>("AResourcePoolManager", no_init)
        .def_readonly("ResourcePools", &AResourcePoolManager::ResourcePools)
        .def_readonly("UnknownData00", &AResourcePoolManager::UnknownData00)
        .def_readwrite("NextPoolGUID", &AResourcePoolManager::NextPoolGUID)
        .def_readonly("ReplicatedPoolIdentities", &AResourcePoolManager::ReplicatedPoolIdentities)
        .def_readonly("ReplicatedCurrentValues", &AResourcePoolManager::ReplicatedCurrentValues)
        .def_readonly("ReplicatedMinValues", &AResourcePoolManager::ReplicatedMinValues)
        .def_readonly("ReplicatedMaxValues", &AResourcePoolManager::ReplicatedMaxValues)
        .def_readonly("ReplicatedRarelyChangedState", &AResourcePoolManager::ReplicatedRarelyChangedState)
        .def("StaticClass", &AResourcePoolManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("CreateResourcePoolManagerIfNecessary", &AResourcePoolManager::CreateResourcePoolManagerIfNecessary)
        .def("DeletePoolAtIndex", &AResourcePoolManager::DeletePoolAtIndex)
        .def("InternalCreatePoolAtIndex", &AResourcePoolManager::InternalCreatePoolAtIndex, return_value_policy< reference_existing_object >())
        .def("CreatePoolAtIndex", &AResourcePoolManager::CreatePoolAtIndex, return_value_policy< reference_existing_object >())
        .def("GetDebugInfo", &AResourcePoolManager::GetDebugInfo)
        .def("GetNumberOfPoolsInUse", &AResourcePoolManager::GetNumberOfPoolsInUse)
        .def("RecalculateBaseValues", &AResourcePoolManager::RecalculateBaseValues)
        .def("GetResourcePoolForResourceDefinition", &AResourcePoolManager::GetResourcePoolForResourceDefinition)
        .def("HasResourcePoolForResourceDefinition", &AResourcePoolManager::HasResourcePoolForResourceDefinition)
        .def("DeletePoolByReference", &AResourcePoolManager::DeletePoolByReference)
        .def("DeletePool", &AResourcePoolManager::DeletePool)
        .def("DeleteAllPools", &AResourcePoolManager::DeleteAllPools)
        .def("CreatePool", &AResourcePoolManager::CreatePool)
        .def("eventDestroyed", &AResourcePoolManager::eventDestroyed)
        .def("ShutDown", &AResourcePoolManager::ShutDown)
        .def("AllResourcePools", &AResourcePoolManager::AllResourcePools)
        .staticmethod("StaticClass")
  ;
}