// 0x80 
struct UActorFactoryAkAmbientSound_Data {
	// Last Offset: 0x7C
	struct UAkEvent* AmbientEvent; // 0x7C (0x4)
};

struct UActorFactoryAkAmbientSound {
	struct UObject_Data UObject;
	struct UActorFactory_Data UActorFactory;
	struct UActorFactoryAkAmbientSound_Data UActorFactoryAkAmbientSound;
};

// 0x198 
struct AAkAmbientSound_Data {
	// Last Offset: 0x18C
	struct UAkEvent* PlayEvent; // 0x18C (0x4)
	struct AWwiseSoundGroup* Group; // 0x190 (0x4)
	BOOL bIsRegistered :1 ; // 0x194 (0x4)
	const unsigned long: 0;
};

struct AAkAmbientSound {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKeypoint_Data AKeypoint;
	struct AAkAmbientSound_Data AAkAmbientSound;
};

// 0x214  (Alignment = 16)
struct UAkAmbientSoundRenderingComponent_Data {
	// Last Offset: 0x210
	BOOL bShowOnlyIfSelected :1 ; // 0x210 (0x4)
	const unsigned long: 0;
};

struct UAkAmbientSoundRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UAkAmbientSoundRenderingComponent_Data UAkAmbientSoundRenderingComponent;
};

// 0x3C 
struct UIAkEnvironmentalEffectProvider_Data {
	// Last Offset: 0x3C
};

struct UIAkEnvironmentalEffectProvider {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UIAkEnvironmentalEffectProvider_Data UIAkEnvironmentalEffectProvider;
};

// 0x74 
struct UInterpTrackAkEvent_Data {
	// Last Offset: 0x68
	struct TArray_FAkEventTrackKey AkEvents; // 0x68 (0xC)
};

struct UInterpTrackAkEvent {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackAkEvent_Data UInterpTrackAkEvent;
};

// 0x80 
struct UInterpTrackAkRTPC_Data {
	// Last Offset: 0x7C
	struct UAkRtpc* AkRtpc; // 0x7C (0x4)
};

struct UInterpTrackAkRTPC {
	struct UObject_Data UObject;
	struct UInterpTrack_Data UInterpTrack;
	struct UInterpTrackFloatBase_Data UInterpTrackFloatBase;
	struct UInterpTrackAkRTPC_Data UInterpTrackAkRTPC;
};

// 0x40 
struct UInterpTrackInstAkEvent_Data {
	// Last Offset: 0x3C
	float LastUpdatePosition; // 0x3C (0x4)
};

struct UInterpTrackInstAkEvent {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstAkEvent_Data UInterpTrackInstAkEvent;
};

// 0x3C 
struct UInterpTrackInstAkRTPC_Data {
	// Last Offset: 0x3C
};

struct UInterpTrackInstAkRTPC {
	struct UObject_Data UObject;
	struct UInterpTrackInst_Data UInterpTrackInst;
	struct UInterpTrackInstAkRTPC_Data UInterpTrackInstAkRTPC;
};

// 0x3C 
struct UISpecialOcclusionAccumulator_Data {
	// Last Offset: 0x3C
};

struct UISpecialOcclusionAccumulator {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
	struct UISpecialOcclusionAccumulator_Data UISpecialOcclusionAccumulator;
};

// 0xA4 
struct USeqAct_AkClearBanks_Data {
	// Last Offset: 0xA4
};

struct USeqAct_AkClearBanks {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AkClearBanks_Data USeqAct_AkClearBanks;
};

// 0xB4 
struct USeqAct_AkLoadBank_Data {
	// Last Offset: 0xB4
};

struct USeqAct_AkLoadBank {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_AkLoadBank_Data USeqAct_AkLoadBank;
};

// 0xC8 
struct USeqAct_AkPostEvent_Data {
	// Last Offset: 0xB4
	struct TArray_FAkPlayingInfo ActivePlayingIds; // 0xB4 (0xC)
	struct UAkEvent* Event; // 0xC0 (0x4)
	BOOL bPlayOneInstanceFromAllLocations :1 ; // 0xC4 (0x4)
	BOOL bTreatAllLocationsAsOneSource :1 ; // 0xC4 (0x4)
	const unsigned long: 0;
};

struct USeqAct_AkPostEvent {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_AkPostEvent_Data USeqAct_AkPostEvent;
};

// 0xA8 
struct USeqAct_AkPostTrigger_Data {
	// Last Offset: 0xA4
	struct UAkTrigger* AkTrigger; // 0xA4 (0x4)
};

struct USeqAct_AkPostTrigger {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AkPostTrigger_Data USeqAct_AkPostTrigger;
};

// 0xC0 
struct USeqAct_AkSetRTPCValue_Data {
	// Last Offset: 0xB4
	struct UAkRtpc* AkRtpc; // 0xB4 (0x4)
	float Value; // 0xB8 (0x4)
	BOOL Running :1 ; // 0xBC (0x4)
	const unsigned long: 0;
};

struct USeqAct_AkSetRTPCValue {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_Latent_Data USeqAct_Latent;
	struct USeqAct_AkSetRTPCValue_Data USeqAct_AkSetRTPCValue;
};

// 0xA8 
struct USeqAct_AkSetState_Data {
	// Last Offset: 0xA4
	struct UAkState* State; // 0xA4 (0x4)
};

struct USeqAct_AkSetState {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AkSetState_Data USeqAct_AkSetState;
};

// 0xA8 
struct USeqAct_AkSetSwitch_Data {
	// Last Offset: 0xA4
	struct UAkSwitch* AkSwitch; // 0xA4 (0x4)
};

struct USeqAct_AkSetSwitch {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AkSetSwitch_Data USeqAct_AkSetSwitch;
};

// 0xA4 
struct USeqAct_AkStopAll_Data {
	// Last Offset: 0xA4
};

struct USeqAct_AkStopAll {
	struct UObject_Data UObject;
	struct USequenceObject_Data USequenceObject;
	struct USequenceOp_Data USequenceOp;
	struct USequenceAction_Data USequenceAction;
	struct USeqAct_AkStopAll_Data USeqAct_AkStopAll;
};

// 0x1DC 
struct AWwiseSoundGroup_Data {
	// Last Offset: 0x18C
	struct FPointer VfTable_IISpecialOcclusionProvider; // 0x18C (0x4)
	struct FPointer VfTable_IISpecialOcclusionAccumulator; // 0x190 (0x4)
	struct TArray_AActorPtr Members; // 0x194 (0xC)
	struct FMap_Mirror ActiveOccluders; // 0x1A0 (0x3C)
};

struct AWwiseSoundGroup {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AKeypoint_Data AKeypoint;
	struct AWwiseSoundGroup_Data AWwiseSoundGroup;
};

// 0x210  (Alignment = 16)
struct UWwiseSoundGroupRenderingComponent_Data {
	// Last Offset: 0x210
};

struct UWwiseSoundGroupRenderingComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UActorComponent_Data UActorComponent;
	struct UPrimitiveComponent_Data UPrimitiveComponent;
	struct UWwiseSoundGroupRenderingComponent_Data UWwiseSoundGroupRenderingComponent;
};

// 0x2EC 
struct AWwiseSoundVolume_Data {
	// Last Offset: 0x1BC
	struct FPointer VfTable_IIAkEnvironmentalEffectProvider; // 0x1BC (0x4)
	struct FPointer VfTable_IISpecialOcclusionProvider; // 0x1C0 (0x4)
	struct FPointer VfTable_IISpecialOcclusionAccumulator; // 0x1C4 (0x4)
	struct UAkEvent* akPlayEvent; // 0x1C8 (0x4)
	BOOL bAutoPlay :1 ; // 0x1CC (0x4)
	BOOL bAutomaticallySetPlayAndStopDistances :1 ; // 0x1CC (0x4)
	BOOL bPlaySoundsFromAllSubBrushes :1 ; // 0x1CC (0x4)
	BOOL bEffectBankLoaded :1 ; // 0x1CC (0x4)
	const unsigned long: 0;
	float AutoPlayDistance; // 0x1D0 (0x4)
	float AutoStopDistance; // 0x1D4 (0x4)
	struct AWwiseSoundVolume* ParentVolume; // 0x1D8 (0x4)
	struct TArray_AWwiseSoundVolumePtr SubBrushes; // 0x1DC (0xC)
	float EnvironmentFadeDistance; // 0x1E8 (0x4)
	struct AWwiseSoundGroup* Group; // 0x1EC (0x4)
	struct UAkComponent* AkComponent; // 0x1F0 (0x4)
	struct FVector Midpoint; // 0x1F4 (0xC)
	float FarthestVertexDistance; // 0x200 (0x4)
	float LastLocationUpdateTime; // 0x204 (0x4)
	float DistancePerAdditionalSecondBetweenUpdates; // 0x208 (0x4)
	float LastEnvironmentStrength; // 0x20C (0x4)
	float LastEnvironmentSuppressionModifier; // 0x210 (0x4)
	struct FMap_Mirror EnvironmentSuppressors; // 0x214 (0x3C)
	struct TArray_FEnvironmentalEffectSetting EnvironmentalEffects; // 0x250 (0xC)
	struct TArray_AWwiseSoundVolumePtr SuppressedEnvironments; // 0x25C (0xC)
	struct TArray_FRTPCSetting RTPCs; // 0x268 (0xC)
	struct TArray_FOccludedVolume OccludedVolumes; // 0x274 (0xC)
	float LastOcclusionLevel; // 0x280 (0x4)
	struct FMap_Mirror ActiveOccluders; // 0x284 (0x3C)
	struct TArray_FPlane FacePlanes; // 0x2C0 (0xC)
	struct TArray_FVector SoundSourceLocations; // 0x2CC (0xC)
	struct TArray_float CachedListenerDistances; // 0x2D8 (0xC)
	struct UAkBank* EffectSoundBank; // 0x2E4 (0x4)
	float EffectSoundBankLoadDistance; // 0x2E8 (0x4)
};

struct AWwiseSoundVolume {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct ABrush_Data ABrush;
	struct AVolume_Data AVolume;
	struct AWwiseSoundVolume_Data AWwiseSoundVolume;
};

table.insert(g_loadedClasses, { "UActorFactoryAkAmbientSound", 3525, "UActorFactory" })
table.insert(g_loadedClasses, { "AAkAmbientSound", 3527, "AKeypoint" })
table.insert(g_loadedClasses, { "UAkAmbientSoundRenderingComponent", 3529, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "UIAkEnvironmentalEffectProvider", 3531, "UInterface" })
table.insert(g_loadedClasses, { "UInterpTrackAkEvent", 3533, "UInterpTrack" })
table.insert(g_loadedClasses, { "UInterpTrackAkRTPC", 3535, "UInterpTrackFloatBase" })
table.insert(g_loadedClasses, { "UInterpTrackInstAkEvent", 3537, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UInterpTrackInstAkRTPC", 3539, "UInterpTrackInst" })
table.insert(g_loadedClasses, { "UISpecialOcclusionAccumulator", 3541, "UInterface" })
table.insert(g_loadedClasses, { "USeqAct_AkClearBanks", 3543, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AkLoadBank", 3545, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_AkPostEvent", 3547, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_AkPostTrigger", 3549, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AkSetRTPCValue", 3551, "USeqAct_Latent" })
table.insert(g_loadedClasses, { "USeqAct_AkSetState", 3553, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AkSetSwitch", 3555, "USequenceAction" })
table.insert(g_loadedClasses, { "USeqAct_AkStopAll", 3557, "USequenceAction" })
table.insert(g_loadedClasses, { "AWwiseSoundGroup", 3559, "AKeypoint" })
table.insert(g_loadedClasses, { "UWwiseSoundGroupRenderingComponent", 3561, "UPrimitiveComponent" })
table.insert(g_loadedClasses, { "AWwiseSoundVolume", 3563, "AVolume" })
