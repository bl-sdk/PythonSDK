#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AApexDestructibleActor()
{
    class_< AApexDestructibleActor, bases< AActor >  , boost::noncopyable>("AApexDestructibleActor", no_init)
        .def_readwrite("LightEnvironment", &AApexDestructibleActor::LightEnvironment)
        .def_readwrite("FractureMaterials", &AApexDestructibleActor::FractureMaterials)
        .def_readwrite("StaticDestructibleComponent", &AApexDestructibleActor::StaticDestructibleComponent)
        .def_readwrite("VisibilityFactors", &AApexDestructibleActor::VisibilityFactors)
        .def_readwrite("FractureSounds", &AApexDestructibleActor::FractureSounds)
        .def_readwrite("FractureParticleEffects", &AApexDestructibleActor::FractureParticleEffects)
        .def_readwrite("ModifyHealthParams", &AApexDestructibleActor::ModifyHealthParams)
        .def("StaticClass", &AApexDestructibleActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventModifyHealth", &AApexDestructibleActor::eventModifyHealth)
        .def("ModifyHealthExec", &AApexDestructibleActor::ModifyHealthExec)
        .def("TakeRadiusDamage", &AApexDestructibleActor::TakeRadiusDamage)
        .def("TakeDamage", &AApexDestructibleActor::TakeDamage)
        .def("eventPostBeginPlay", &AApexDestructibleActor::eventPostBeginPlay)
        .def("CacheFractureEffects", &AApexDestructibleActor::CacheFractureEffects)
        .def("eventSpawnFractureEmitter", &AApexDestructibleActor::eventSpawnFractureEmitter)
        .def("eventReplicatedEvent", &AApexDestructibleActor::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}