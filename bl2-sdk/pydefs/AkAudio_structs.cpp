#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AkAudio_structs(py::module &m)
{
	py::class_< FEnvironmentalEffectInfo >(m, "FEnvironmentalEffectInfo")
		.def_readwrite("EffectID", &FEnvironmentalEffectInfo::EffectID)
		.def_readwrite("Volume", &FEnvironmentalEffectInfo::Volume)
  ;
	py::class_< FAkEventTrackKey >(m, "FAkEventTrackKey")
		.def_readwrite("Time", &FAkEventTrackKey::Time)
		.def_readwrite("Event", &FAkEventTrackKey::Event)
  ;
	py::class_< FEnvironmentalEffectSetting >(m, "FEnvironmentalEffectSetting")
		.def_readwrite("Effect", &FEnvironmentalEffectSetting::Effect)
		.def_readwrite("Volume", &FEnvironmentalEffectSetting::Volume)
		.def_readwrite("FadeDistance", &FEnvironmentalEffectSetting::FadeDistance)
		.def_readwrite("MinDistance", &FEnvironmentalEffectSetting::MinDistance)
		.def_readwrite("MaxDistance", &FEnvironmentalEffectSetting::MaxDistance)
  ;
	py::class_< FRTPCSetting >(m, "FRTPCSetting")
		.def_readwrite("Target", &FRTPCSetting::Target)
		.def_readwrite("AkRtpc", &FRTPCSetting::AkRtpc)
		.def_readwrite("ValueAtMaxRange", &FRTPCSetting::ValueAtMaxRange)
		.def_readwrite("ValueWithinVolume", &FRTPCSetting::ValueWithinVolume)
		.def_readwrite("FadeDistance", &FRTPCSetting::FadeDistance)
		.def_readwrite("LastEvalValue", &FRTPCSetting::LastEvalValue)
  ;
	py::class_< FOccludedVolume >(m, "FOccludedVolume")
		.def_property("bFadeIn", [](FOccludedVolume &self){return self.bFadeIn;}, [](FOccludedVolume &self, bool value){self.bFadeIn = value ? 1 : 0;})
		.def_property("bExternalFade", [](FOccludedVolume &self){return self.bExternalFade;}, [](FOccludedVolume &self, bool value){self.bExternalFade = value ? 1 : 0;})
		.def_readwrite("SoundVolume", &FOccludedVolume::SoundVolume)
		.def_readwrite("Target", &FOccludedVolume::Target)
		.def_readwrite("MaxOcclusion", &FOccludedVolume::MaxOcclusion)
		.def_readwrite("FadeDistance", &FOccludedVolume::FadeDistance)
  ;

}