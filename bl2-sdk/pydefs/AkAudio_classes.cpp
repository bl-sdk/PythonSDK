#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AkAudio_classes(py::module &m)
{
	py::class_< UActorFactoryAkAmbientSound, UAudioDevice >(m, "UActorFactoryAkAmbientSound")
		.def_static("StaticClass", &UActorFactoryAkAmbientSound::StaticClass, py::return_value_policy::reference)
		.def_readwrite("AmbientEvent", &UActorFactoryAkAmbientSound::AmbientEvent, py::return_value_policy::reference)
		;
	py::class_< AAkAmbientSound, UAudioDevice >(m, "AAkAmbientSound")
		.def_static("StaticClass", &AAkAmbientSound::StaticClass, py::return_value_policy::reference)
		.def_property("bIsRegistered", [](AAkAmbientSound &self){return self.bIsRegistered;}, [](AAkAmbientSound &self, bool value){self.bIsRegistered = value ? 1 : 0;})
		.def_readwrite("PlayEvent", &AAkAmbientSound::PlayEvent, py::return_value_policy::reference)
		.def_readwrite("Group", &AAkAmbientSound::Group, py::return_value_policy::reference)
		;
	py::class_< UAkAmbientSoundRenderingComponent, UAudioDevice >(m, "UAkAmbientSoundRenderingComponent")
		.def_static("StaticClass", &UAkAmbientSoundRenderingComponent::StaticClass, py::return_value_policy::reference)
		.def_property("bShowOnlyIfSelected", [](UAkAmbientSoundRenderingComponent &self){return self.bShowOnlyIfSelected;}, [](UAkAmbientSoundRenderingComponent &self, bool value){self.bShowOnlyIfSelected = value ? 1 : 0;})
		;
	py::class_< UIAkEnvironmentalEffectProvider, UAudioDevice >(m, "UIAkEnvironmentalEffectProvider")
		.def_static("StaticClass", &UIAkEnvironmentalEffectProvider::StaticClass, py::return_value_policy::reference)
		.def("GetEnvironmentalEffectsForLocation", &UIAkEnvironmentalEffectProvider::GetEnvironmentalEffectsForLocation, py::return_value_policy::reference)
		;
	py::class_< UInterpTrackAkEvent, UAudioDevice >(m, "UInterpTrackAkEvent")
		.def_static("StaticClass", &UInterpTrackAkEvent::StaticClass, py::return_value_policy::reference)
		.def_readwrite("AkEvents", &UInterpTrackAkEvent::AkEvents, py::return_value_policy::reference)
		;
	py::class_< UInterpTrackAkRTPC, UAudioDevice >(m, "UInterpTrackAkRTPC")
		.def_static("StaticClass", &UInterpTrackAkRTPC::StaticClass, py::return_value_policy::reference)
		.def_readwrite("AkRtpc", &UInterpTrackAkRTPC::AkRtpc, py::return_value_policy::reference)
		;
	py::class_< UInterpTrackInstAkEvent, UAudioDevice >(m, "UInterpTrackInstAkEvent")
		.def_static("StaticClass", &UInterpTrackInstAkEvent::StaticClass, py::return_value_policy::reference)
		.def_readwrite("LastUpdatePosition", &UInterpTrackInstAkEvent::LastUpdatePosition)
		;
	py::class_< UInterpTrackInstAkRTPC, UAudioDevice >(m, "UInterpTrackInstAkRTPC")
		.def_static("StaticClass", &UInterpTrackInstAkRTPC::StaticClass, py::return_value_policy::reference)
		;
	py::class_< UISpecialOcclusionAccumulator, UAudioDevice >(m, "UISpecialOcclusionAccumulator")
		.def_static("StaticClass", &UISpecialOcclusionAccumulator::StaticClass, py::return_value_policy::reference)
		.def("RemoveOcclusionProvider", &UISpecialOcclusionAccumulator::RemoveOcclusionProvider)
		.def("SetOcclusionForProvider", &UISpecialOcclusionAccumulator::SetOcclusionForProvider)
		;
	py::class_< USeqAct_AkClearBanks, UAudioDevice >(m, "USeqAct_AkClearBanks")
		.def_static("StaticClass", &USeqAct_AkClearBanks::StaticClass, py::return_value_policy::reference)
		;
	py::class_< USeqAct_AkLoadBank, UAudioDevice >(m, "USeqAct_AkLoadBank")
		.def_static("StaticClass", &USeqAct_AkLoadBank::StaticClass, py::return_value_policy::reference)
		;
	py::class_< USeqAct_AkPostEvent, UAudioDevice >(m, "USeqAct_AkPostEvent")
		.def_static("StaticClass", &USeqAct_AkPostEvent::StaticClass, py::return_value_policy::reference)
		.def_property("bPlayOneInstanceFromAllLocations", [](USeqAct_AkPostEvent &self){return self.bPlayOneInstanceFromAllLocations;}, [](USeqAct_AkPostEvent &self, bool value){self.bPlayOneInstanceFromAllLocations = value ? 1 : 0;})
		.def_property("bTreatAllLocationsAsOneSource", [](USeqAct_AkPostEvent &self){return self.bTreatAllLocationsAsOneSource;}, [](USeqAct_AkPostEvent &self, bool value){self.bTreatAllLocationsAsOneSource = value ? 1 : 0;})
		.def_readwrite("ActivePlayingIds", &USeqAct_AkPostEvent::ActivePlayingIds, py::return_value_policy::reference)
		.def_readwrite("Event", &USeqAct_AkPostEvent::Event, py::return_value_policy::reference)
		;
	py::class_< USeqAct_AkPostTrigger, UAudioDevice >(m, "USeqAct_AkPostTrigger")
		.def_static("StaticClass", &USeqAct_AkPostTrigger::StaticClass, py::return_value_policy::reference)
		.def_readwrite("AkTrigger", &USeqAct_AkPostTrigger::AkTrigger, py::return_value_policy::reference)
		;
	py::class_< USeqAct_AkSetRTPCValue, UAudioDevice >(m, "USeqAct_AkSetRTPCValue")
		.def_static("StaticClass", &USeqAct_AkSetRTPCValue::StaticClass, py::return_value_policy::reference)
		.def_property("Running", [](USeqAct_AkSetRTPCValue &self){return self.Running;}, [](USeqAct_AkSetRTPCValue &self, bool value){self.Running = value ? 1 : 0;})
		.def_readwrite("AkRtpc", &USeqAct_AkSetRTPCValue::AkRtpc, py::return_value_policy::reference)
		.def_readwrite("Value", &USeqAct_AkSetRTPCValue::Value)
		;
	py::class_< USeqAct_AkSetState, UAudioDevice >(m, "USeqAct_AkSetState")
		.def_static("StaticClass", &USeqAct_AkSetState::StaticClass, py::return_value_policy::reference)
		.def_readwrite("State", &USeqAct_AkSetState::State, py::return_value_policy::reference)
		;
	py::class_< USeqAct_AkSetSwitch, UAudioDevice >(m, "USeqAct_AkSetSwitch")
		.def_static("StaticClass", &USeqAct_AkSetSwitch::StaticClass, py::return_value_policy::reference)
		.def_readwrite("AkSwitch", &USeqAct_AkSetSwitch::AkSwitch, py::return_value_policy::reference)
		;
	py::class_< USeqAct_AkStopAll, UAudioDevice >(m, "USeqAct_AkStopAll")
		.def_static("StaticClass", &USeqAct_AkStopAll::StaticClass, py::return_value_policy::reference)
		;
	py::class_< AWwiseSoundGroup, UAudioDevice >(m, "AWwiseSoundGroup")
		.def_static("StaticClass", &AWwiseSoundGroup::StaticClass, py::return_value_policy::reference)
		.def_readwrite("VfTable_IISpecialOcclusionProvider", &AWwiseSoundGroup::VfTable_IISpecialOcclusionProvider, py::return_value_policy::reference)
		.def_readwrite("VfTable_IISpecialOcclusionAccumulator", &AWwiseSoundGroup::VfTable_IISpecialOcclusionAccumulator, py::return_value_policy::reference)
		.def_readwrite("Members", &AWwiseSoundGroup::Members, py::return_value_policy::reference)
		.def_readwrite("ActiveOccluders", &AWwiseSoundGroup::ActiveOccluders, py::return_value_policy::reference)
		.def("RemoveOcclusionProvider", &AWwiseSoundGroup::RemoveOcclusionProvider)
		.def("SetOcclusionForProvider", &AWwiseSoundGroup::SetOcclusionForProvider)
		.def("GetOcclusionAmount", &AWwiseSoundGroup::GetOcclusionAmount)
		.def("SetAkSwitchObject", &AWwiseSoundGroup::SetAkSwitchObject)
		.def("SetRTPCObjectValue", &AWwiseSoundGroup::SetRTPCObjectValue)
		;
	py::class_< UWwiseSoundGroupRenderingComponent, UAudioDevice >(m, "UWwiseSoundGroupRenderingComponent")
		.def_static("StaticClass", &UWwiseSoundGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
		;
	py::class_< AWwiseSoundVolume, UAudioDevice >(m, "AWwiseSoundVolume")
		.def_static("StaticClass", &AWwiseSoundVolume::StaticClass, py::return_value_policy::reference)
		.def_property("bAutoPlay", [](AWwiseSoundVolume &self){return self.bAutoPlay;}, [](AWwiseSoundVolume &self, bool value){self.bAutoPlay = value ? 1 : 0;})
		.def_property("bAutomaticallySetPlayAndStopDistances", [](AWwiseSoundVolume &self){return self.bAutomaticallySetPlayAndStopDistances;}, [](AWwiseSoundVolume &self, bool value){self.bAutomaticallySetPlayAndStopDistances = value ? 1 : 0;})
		.def_property("bPlaySoundsFromAllSubBrushes", [](AWwiseSoundVolume &self){return self.bPlaySoundsFromAllSubBrushes;}, [](AWwiseSoundVolume &self, bool value){self.bPlaySoundsFromAllSubBrushes = value ? 1 : 0;})
		.def_property("bEffectBankLoaded", [](AWwiseSoundVolume &self){return self.bEffectBankLoaded;}, [](AWwiseSoundVolume &self, bool value){self.bEffectBankLoaded = value ? 1 : 0;})
		.def_readwrite("VfTable_IIAkEnvironmentalEffectProvider", &AWwiseSoundVolume::VfTable_IIAkEnvironmentalEffectProvider, py::return_value_policy::reference)
		.def_readwrite("VfTable_IISpecialOcclusionProvider", &AWwiseSoundVolume::VfTable_IISpecialOcclusionProvider, py::return_value_policy::reference)
		.def_readwrite("VfTable_IISpecialOcclusionAccumulator", &AWwiseSoundVolume::VfTable_IISpecialOcclusionAccumulator, py::return_value_policy::reference)
		.def_readwrite("akPlayEvent", &AWwiseSoundVolume::akPlayEvent, py::return_value_policy::reference)
		.def_readwrite("AutoPlayDistance", &AWwiseSoundVolume::AutoPlayDistance)
		.def_readwrite("AutoStopDistance", &AWwiseSoundVolume::AutoStopDistance)
		.def_readwrite("ParentVolume", &AWwiseSoundVolume::ParentVolume, py::return_value_policy::reference)
		.def_readwrite("SubBrushes", &AWwiseSoundVolume::SubBrushes, py::return_value_policy::reference)
		.def_readwrite("EnvironmentFadeDistance", &AWwiseSoundVolume::EnvironmentFadeDistance)
		.def_readwrite("Group", &AWwiseSoundVolume::Group, py::return_value_policy::reference)
		.def_readwrite("AkComponent", &AWwiseSoundVolume::AkComponent, py::return_value_policy::reference)
		.def_readwrite("Midpoint", &AWwiseSoundVolume::Midpoint, py::return_value_policy::reference)
		.def_readwrite("FarthestVertexDistance", &AWwiseSoundVolume::FarthestVertexDistance)
		.def_readwrite("LastLocationUpdateTime", &AWwiseSoundVolume::LastLocationUpdateTime)
		.def_readwrite("DistancePerAdditionalSecondBetweenUpdates", &AWwiseSoundVolume::DistancePerAdditionalSecondBetweenUpdates)
		.def_readwrite("LastEnvironmentStrength", &AWwiseSoundVolume::LastEnvironmentStrength)
		.def_readwrite("LastEnvironmentSuppressionModifier", &AWwiseSoundVolume::LastEnvironmentSuppressionModifier)
		.def_readwrite("EnvironmentSuppressors", &AWwiseSoundVolume::EnvironmentSuppressors, py::return_value_policy::reference)
		.def_readwrite("EnvironmentalEffects", &AWwiseSoundVolume::EnvironmentalEffects, py::return_value_policy::reference)
		.def_readwrite("SuppressedEnvironments", &AWwiseSoundVolume::SuppressedEnvironments, py::return_value_policy::reference)
		.def_readwrite("RTPCs", &AWwiseSoundVolume::RTPCs, py::return_value_policy::reference)
		.def_readwrite("OccludedVolumes", &AWwiseSoundVolume::OccludedVolumes, py::return_value_policy::reference)
		.def_readwrite("LastOcclusionLevel", &AWwiseSoundVolume::LastOcclusionLevel)
		.def_readwrite("ActiveOccluders", &AWwiseSoundVolume::ActiveOccluders, py::return_value_policy::reference)
		.def_readwrite("FacePlanes", &AWwiseSoundVolume::FacePlanes, py::return_value_policy::reference)
		.def_readwrite("SoundSourceLocations", &AWwiseSoundVolume::SoundSourceLocations, py::return_value_policy::reference)
		.def_readwrite("CachedListenerDistances", &AWwiseSoundVolume::CachedListenerDistances, py::return_value_policy::reference)
		.def_readwrite("EffectSoundBank", &AWwiseSoundVolume::EffectSoundBank, py::return_value_policy::reference)
		.def_readwrite("EffectSoundBankLoadDistance", &AWwiseSoundVolume::EffectSoundBankLoadDistance)
		.def("RemoveOcclusionProvider", &AWwiseSoundVolume::RemoveOcclusionProvider)
		.def("SetOcclusionForProvider", &AWwiseSoundVolume::SetOcclusionForProvider)
		.def("GetOcclusionAmount", &AWwiseSoundVolume::GetOcclusionAmount)
		.def("UpdateAkComponentPosition", &AWwiseSoundVolume::UpdateAkComponentPosition)
		.def("GetEnvironmentalEffectsForLocation", &AWwiseSoundVolume::GetEnvironmentalEffectsForLocation, py::return_value_policy::reference)
		.def("CalculateFacePlanes", &AWwiseSoundVolume::CalculateFacePlanes)
		;

}