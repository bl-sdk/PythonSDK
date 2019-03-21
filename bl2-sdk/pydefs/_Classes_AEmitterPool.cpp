#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AEmitterPool()
{
    class_< AEmitterPool, bases< AActor >  , boost::noncopyable>("AEmitterPool", no_init)
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
        .def("StaticClass", &AEmitterPool::StaticClass, return_value_policy< reference_existing_object >())
        .def("PostBeginPlay", &AEmitterPool::PostBeginPlay)
        .def("SpawnEmitterCustomLifetime", &AEmitterPool::SpawnEmitterCustomLifetime, return_value_policy< reference_existing_object >())
        .def("SpawnEmitterMeshAttachment", &AEmitterPool::SpawnEmitterMeshAttachment, return_value_policy< reference_existing_object >())
        .def("SpawnEmitter", &AEmitterPool::SpawnEmitter, return_value_policy< reference_existing_object >())
        .def("GetPooledComponent", &AEmitterPool::GetPooledComponent, return_value_policy< reference_existing_object >())
        .def("GetFreeMatInstConsts", &AEmitterPool::GetFreeMatInstConsts, return_value_policy< reference_existing_object >())
        .def("FreeMaterialInstanceConstants", &AEmitterPool::FreeMaterialInstanceConstants)
        .def("GetFreeStaticMeshComponent", &AEmitterPool::GetFreeStaticMeshComponent, return_value_policy< reference_existing_object >())
        .def("FreeStaticMeshComponents", &AEmitterPool::FreeStaticMeshComponents)
        .def("ReturnToPool", &AEmitterPool::ReturnToPool)
        .def("ClearAllPoolComponents", &AEmitterPool::ClearAllPoolComponents)
        .def("ClearPoolComponents", &AEmitterPool::ClearPoolComponents)
        .def("OnParticleSystemFinished", &AEmitterPool::OnParticleSystemFinished)
        .staticmethod("StaticClass")
  ;
}