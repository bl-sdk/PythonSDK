#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AApexDestructibleActor(py::module &m)
{
    py::class_< AApexDestructibleActor,  AActor   >(m, "AApexDestructibleActor")
        .def_readwrite("LightEnvironment", &AApexDestructibleActor::LightEnvironment)
        .def_readwrite("FractureMaterials", &AApexDestructibleActor::FractureMaterials)
        .def_readwrite("StaticDestructibleComponent", &AApexDestructibleActor::StaticDestructibleComponent)
        .def_readwrite("VisibilityFactors", &AApexDestructibleActor::VisibilityFactors)
        .def_readwrite("FractureSounds", &AApexDestructibleActor::FractureSounds)
        .def_readwrite("FractureParticleEffects", &AApexDestructibleActor::FractureParticleEffects)
        .def_readwrite("ModifyHealthParams", &AApexDestructibleActor::ModifyHealthParams)
        .def("StaticClass", &AApexDestructibleActor::StaticClass, py::return_value_policy::reference)
        .def("eventModifyHealth", &AApexDestructibleActor::eventModifyHealth)
        .def("ModifyHealthExec", &AApexDestructibleActor::ModifyHealthExec)
        .def("TakeRadiusDamage", &AApexDestructibleActor::TakeRadiusDamage)
        .def("TakeDamage", &AApexDestructibleActor::TakeDamage)
        .def("eventPostBeginPlay", &AApexDestructibleActor::eventPostBeginPlay)
        .def("CacheFractureEffects", &AApexDestructibleActor::CacheFractureEffects)
        .def("eventSpawnFractureEmitter", &AApexDestructibleActor::eventSpawnFractureEmitter)
        .def("eventReplicatedEvent", &AApexDestructibleActor::eventReplicatedEvent)
          ;
}