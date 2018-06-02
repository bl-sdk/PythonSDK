// 0x4 
struct FRecoilParams {
	unsigned char X; // 0x0 (0x1) (Enum = ERecoilStart)
	unsigned char Y; // 0x1 (0x1) (Enum = ERecoilStart)
	unsigned char Z; // 0x2 (0x1) (Enum = ERecoilStart)
	const unsigned char Padding; // 0x3 (0x1)
};

// 0x70 
struct FRecoilDef {
	float TimeToGo; // 0x0 (0x4)
	float TimeDuration; // 0x4 (0x4)
	struct FVector RotAmplitude; // 0x8 (0xC)
	struct FVector RotFrequency; // 0x14 (0xC)
	struct FVector RotSinOffset; // 0x20 (0xC)
	struct FRecoilParams RotParams; // 0x2C (0x4)
	struct FRotator RotOffset; // 0x30 (0xC)
	struct FVector LocAmplitude; // 0x3C (0xC)
	struct FVector LocFrequency; // 0x48 (0xC)
	struct FVector LocSinOffset; // 0x54 (0xC)
	struct FRecoilParams LocParams; // 0x60 (0x4)
	struct FVector LocOffset; // 0x64 (0xC)
};

// 0x10 
struct FTeamState {
	int TeamIndex; // 0x0 (0x4)
	struct TArray_int PlayerIndices; // 0x4 (0xC)
};

// 0x10 
struct FPlayerState {
	int PlayerIndex; // 0x0 (0x4)
	int CurrentTeamIndex; // 0x4 (0x4)
	float TimeSpawned; // 0x8 (0x4)
	float TimeAliveSinceLastDeath; // 0xC (0x4)
};

// 0xC 
struct FAggregateEventMapping {
	int EventID; // 0x0 (0x4)
	int AggregateID; // 0x4 (0x4)
	int TargetAggregateID; // 0x8 (0x4)
};

// 0x3C 
struct FGameEvents {
	const struct FMap_Mirror Events; // 0x0 (0x3C)
};

// 0x48 
struct FEventsBase {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct TArray_FGameEvents EventsByClass; // 0x3C (0xC)
};

// 0x48 
struct FWeaponEvents {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct TArray_FGameEvents EventsByClass; // 0x3C (0xC)
};

// 0x48 
struct FDamageEvents {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct TArray_FGameEvents EventsByClass; // 0x3C (0xC)
};

// 0x48 
struct FProjectileEvents {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct TArray_FGameEvents EventsByClass; // 0x3C (0xC)
};

// 0x48 
struct FPawnEvents {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct TArray_FGameEvents EventsByClass; // 0x3C (0xC)
};

// 0x1A4 
struct FTeamEvents {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct FWeaponEvents WeaponEvents; // 0x3C (0x48)
	struct FDamageEvents DamageAsPlayerEvents; // 0x84 (0x48)
	struct FDamageEvents DamageAsTargetEvents; // 0xCC (0x48)
	struct FProjectileEvents ProjectileEvents; // 0x114 (0x48)
	struct FPawnEvents PawnEvents; // 0x15C (0x48)
};

// 0x1A4 
struct FPlayerEvents {
	struct FGameEvents TotalEvents; // 0x0 (0x3C)
	struct FWeaponEvents WeaponEvents; // 0x3C (0x48)
	struct FDamageEvents DamageAsPlayerEvents; // 0x84 (0x48)
	struct FDamageEvents DamageAsTargetEvents; // 0xCC (0x48)
	struct FProjectileEvents ProjectileEvents; // 0x114 (0x48)
	struct FPawnEvents PawnEvents; // 0x15C (0x48)
};

// 0xC 
struct FGameEvent {
	struct TArray_float EventCountByTimePeriod; // 0x0 (0xC)
};

// 0x18 
struct FPropertyInfo {
	struct FName PropertyName; // 0x0 (0x8)
	BOOL bModifyProperty : 1; // 0x8 (0x4)
	const unsigned long: 0;
	struct FString PropertyValue; // 0xC (0xC)
};

