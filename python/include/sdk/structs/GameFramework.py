from ctypes import *
import BL2SDK


class FRecoilParams(Structure):
    _fields_ = [("X", c_ubyte), ("Y", c_ubyte), ("Z", c_ubyte), ("Padding", c_ubyte)]


class FRecoilDef(Structure):
    _fields_ = [
        ("TimeToGo", c_float),
        ("TimeDuration", c_float),
        ("RotAmplitude", FVector),
        ("RotFrequency", FVector),
        ("RotSinOffset", FVector),
        ("RotParams", FRecoilParams),
        ("RotOffset", FRotator),
        ("LocAmplitude", FVector),
        ("LocFrequency", FVector),
        ("LocSinOffset", FVector),
        ("LocParams", FRecoilParams),
        ("LocOffset", FVector),
    ]


class FTeamState(Structure):
    _fields_ = [("TeamIndex", c_int), ("PlayerIndices", TArray_int)]


class FPlayerState(Structure):
    _fields_ = [
        ("PlayerIndex", c_int),
        ("CurrentTeamIndex", c_int),
        ("TimeSpawned", c_float),
        ("TimeAliveSinceLastDeath", c_float),
    ]


class FAggregateEventMapping(Structure):
    _fields_ = [
        ("EventID", c_int),
        ("AggregateID", c_int),
        ("TargetAggregateID", c_int),
    ]


class FGameEvents(Structure):
    _fields_ = [("Events", FMap_Mirror)]


class FEventsBase(Structure):
    _fields_ = [("TotalEvents", FGameEvents), ("EventsByClass", TArray_FGameEvents)]


class FWeaponEvents(Structure):
    _fields_ = [("TotalEvents", FGameEvents), ("EventsByClass", TArray_FGameEvents)]


class FDamageEvents(Structure):
    _fields_ = [("TotalEvents", FGameEvents), ("EventsByClass", TArray_FGameEvents)]


class FProjectileEvents(Structure):
    _fields_ = [("TotalEvents", FGameEvents), ("EventsByClass", TArray_FGameEvents)]


class FPawnEvents(Structure):
    _fields_ = [("TotalEvents", FGameEvents), ("EventsByClass", TArray_FGameEvents)]


class FTeamEvents(Structure):
    _fields_ = [
        ("TotalEvents", FGameEvents),
        ("WeaponEvents", FWeaponEvents),
        ("DamageAsPlayerEvents", FDamageEvents),
        ("DamageAsTargetEvents", FDamageEvents),
        ("ProjectileEvents", FProjectileEvents),
        ("PawnEvents", FPawnEvents),
    ]


class FPlayerEvents(Structure):
    _fields_ = [
        ("TotalEvents", FGameEvents),
        ("WeaponEvents", FWeaponEvents),
        ("DamageAsPlayerEvents", FDamageEvents),
        ("DamageAsTargetEvents", FDamageEvents),
        ("ProjectileEvents", FProjectileEvents),
        ("PawnEvents", FPawnEvents),
    ]


class FGameEvent(Structure):
    _fields_ = [("EventCountByTimePeriod", TArray_float)]


class FPropertyInfo(Structure):
    _fields_ = [
        ("PropertyName", FName),
        ("bModifyProperty", c_bool, 1),
        ("", c_ulong, 0),
        ("PropertyValue", FString),
    ]
