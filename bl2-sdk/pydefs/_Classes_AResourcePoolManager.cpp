#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AResourcePoolManager(py::object m)
{
    py::class_< AResourcePoolManager,  AReplicationInfo   >(m, "AResourcePoolManager")
        .def_readwrite("NextPoolGUID", &AResourcePoolManager::NextPoolGUID)
        .def("StaticClass", &AResourcePoolManager::StaticClass, py::return_value_policy::reference)
        .def("CreateResourcePoolManagerIfNecessary", &AResourcePoolManager::CreateResourcePoolManagerIfNecessary)
        .def("DeletePoolAtIndex", &AResourcePoolManager::DeletePoolAtIndex)
        .def("InternalCreatePoolAtIndex", &AResourcePoolManager::InternalCreatePoolAtIndex, py::return_value_policy::reference)
        .def("CreatePoolAtIndex", &AResourcePoolManager::CreatePoolAtIndex, py::return_value_policy::reference)
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
          ;
}