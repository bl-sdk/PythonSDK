// 0x8 
struct FEnvironmentalEffectInfo {
	int EffectID; // 0x0 (0x4)
	float Volume; // 0x4 (0x4)
};

// 0x8 
struct FAkEventTrackKey {
	float Time; // 0x0 (0x4)
	struct UAkEvent* Event; // 0x4 (0x4)
};

// 0x14 
struct FEnvironmentalEffectSetting {
	struct UAkEffect* Effect; // 0x0 (0x4)
	float Volume; // 0x4 (0x4)
	float FadeDistance; // 0x8 (0x4)
	float MinDistance; // 0xC (0x4)
	float MaxDistance; // 0x10 (0x4)
};

// 0x18 
struct FRTPCSetting {
	struct AActor* Target; // 0x0 (0x4)
	struct UAkRtpc* AkRtpc; // 0x4 (0x4)
	float ValueAtMaxRange; // 0x8 (0x4)
	float ValueWithinVolume; // 0xC (0x4)
	float FadeDistance; // 0x10 (0x4)
	float LastEvalValue; // 0x14 (0x4)
};

// 0x18 
struct FOccludedVolume {
	struct AWwiseSoundVolume* SoundVolume; // 0x0 (0x4)
	struct FScriptInterface Target; // 0x4 (0x8)
	float MaxOcclusion; // 0xC (0x4)
	float FadeDistance; // 0x10 (0x4)
	BOOL bFadeIn : 1; // 0x14 (0x4)
	BOOL bExternalFade : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

