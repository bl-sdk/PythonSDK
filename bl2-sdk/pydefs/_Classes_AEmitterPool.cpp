#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEmitterPool()
{
    py::class_< AEmitterPool,  AActor   >("AEmitterPool")
        .def_readwrite("PSCTemplate", &AEmitterPool::PSCTemplate)
        .def_readwrite("PoolComponents", &AEmitterPool::PoolComponents)
        .def_readwrite("ActiveComponents", &AEmitterPool::ActiveComponents)
        .def_readwrite("PhysXSurrogateComponent", &AEmitterPool::PhysXSurrogateComponent)
        .def_readwrite("PhysXSurrogateComponentHalfDownsampling", &AEmitterPool::PhysXSurrogateComponentHalfDownsampling)
        .def_readwrite("PhysXSurrogateComponentQuarterDownsampling", &AEmitterPool::PhysXSurrogateComponentQuarterDownsampling)
        .def_readwrite("PhysXSurrogateComponentSPHFluid", &AEmitterPool::PhysXSurrogateComponentSPHFluid)
        .def_readwrite("MaxActiveEffects", &AEmitterPool::MaxActiveEffects)
        .def_readwrite("RelativePSCs", &AEmitterPool::RelativePSCs)
        .def_readwrite("SMC_MIC_ReductionTime", &AEmitterPool::SMC_MIC_ReductionTime)
        .def_readwrite("SMC_MIC_CurrentReductionTime", &AEmitterPool::SMC_MIC_CurrentReductionTime)
        .def_readwrite("IdealStaticMeshComponents", &AEmitterPool::IdealStaticMeshComponents)
        .def_readwrite("IdealMaterialInstanceConstants", &AEmitterPool::IdealMaterialInstanceConstants)
        .def_readwrite("FreeSMComponents", &AEmitterPool::FreeSMComponents)
        .def_readwrite("FreeMatInstConsts", &AEmitterPool::FreeMatInstConsts)
        .def("StaticClass", &AEmitterPool::StaticClass, py::return_value_policy::reference)
        .def("PostBeginPlay", &AEmitterPool::PostBeginPlay)
        .def("SpawnEmitterCustomLifetime", &AEmitterPool::SpawnEmitterCustomLifetime, py::return_value_policy::reference)
        .def("SpawnEmitterMeshAttachment", &AEmitterPool::SpawnEmitterMeshAttachment, py::return_value_policy::reference)
        .def("SpawnEmitter", &AEmitterPool::SpawnEmitter, py::return_value_policy::reference)
        .def("GetPooledComponent", &AEmitterPool::GetPooledComponent, py::return_value_policy::reference)
        .def("GetFreeMatInstConsts", &AEmitterPool::GetFreeMatInstConsts, py::return_value_policy::reference)
        .def("FreeMaterialInstanceConstants", &AEmitterPool::FreeMaterialInstanceConstants)
        .def("GetFreeStaticMeshComponent", &AEmitterPool::GetFreeStaticMeshComponent, py::return_value_policy::reference)
        .def("FreeStaticMeshComponents", &AEmitterPool::FreeStaticMeshComponents)
        .def("ReturnToPool", &AEmitterPool::ReturnToPool)
        .def("ClearAllPoolComponents", &AEmitterPool::ClearAllPoolComponents)
        .def("ClearPoolComponents", &AEmitterPool::ClearPoolComponents)
        .def("OnParticleSystemFinished", &AEmitterPool::OnParticleSystemFinished)
        .staticmethod("StaticClass")
  ;
}