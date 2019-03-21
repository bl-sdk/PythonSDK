#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADecalManager()
{
    class_< ADecalManager, bases< AActor >  , boost::noncopyable>("ADecalManager", no_init)
        .def_readwrite("DecalTemplate", &ADecalManager::DecalTemplate)
        .def_readwrite("PoolDecals", &ADecalManager::PoolDecals)
        .def_readwrite("MaxActiveDecals", &ADecalManager::MaxActiveDecals)
        .def_readwrite("MaxActiveDecalsLow", &ADecalManager::MaxActiveDecalsLow)
        .def_readwrite("MaxActiveDecalsHigh", &ADecalManager::MaxActiveDecalsHigh)
        .def_readwrite("MaxActiveDecalsSplitScreen", &ADecalManager::MaxActiveDecalsSplitScreen)
        .def_readwrite("DecalLifeSpan", &ADecalManager::DecalLifeSpan)
        .def_readwrite("DecalDepthBias", &ADecalManager::DecalDepthBias)
        .def_readwrite("DecalBlendRange", &ADecalManager::DecalBlendRange)
        .def_readwrite("MaxFadingDecals", &ADecalManager::MaxFadingDecals)
        .def_readwrite("FadingLifeSpan", &ADecalManager::FadingLifeSpan)
        .def_readwrite("FadeParameterName", &ADecalManager::FadeParameterName)
        .def_readwrite("ActiveDecals", &ADecalManager::ActiveDecals)
        .def_readwrite("FadingDecals", &ADecalManager::FadingDecals)
        .def("StaticClass", &ADecalManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearAllPoolComponents", &ADecalManager::ClearAllPoolComponents)
        .def("ClearDecals", &ADecalManager::ClearDecals)
        .def("eventSpawnDecal", &ADecalManager::eventSpawnDecal, return_value_policy< reference_existing_object >())
        .def("GetPooledComponent", &ADecalManager::GetPooledComponent, return_value_policy< reference_existing_object >())
        .def("SetDecalParameters", &ADecalManager::SetDecalParameters)
        .def("CanSpawnDecals", &ADecalManager::CanSpawnDecals)
        .def("eventDecalFinished", &ADecalManager::eventDecalFinished)
        .def("AreDynamicDecalsEnabled", &ADecalManager::AreDynamicDecalsEnabled)
        .def("PostBeginPlay", &ADecalManager::PostBeginPlay)
        .def("SetNumberOfDecals", &ADecalManager::SetNumberOfDecals)
        .staticmethod("StaticClass")
  ;
}