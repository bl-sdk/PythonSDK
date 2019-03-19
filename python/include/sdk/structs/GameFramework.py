from ctypes import *
import BL2SDK


class FRecoilParams(Structure):
    pass


class FRecoilDef(Structure):
    pass


class FTeamState(Structure):
    pass


class FPlayerState(Structure):
    pass


class FAggregateEventMapping(Structure):
    pass


class FGameEvents(Structure):
    pass


class FEventsBase(Structure):
    pass


class FWeaponEvents(Structure):
    pass


class FDamageEvents(Structure):
    pass


class FProjectileEvents(Structure):
    pass


class FPawnEvents(Structure):
    pass


class FTeamEvents(Structure):
    pass


class FPlayerEvents(Structure):
    pass


class FGameEvent(Structure):
    pass


class FPropertyInfo(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *


def init():

    FRecoilParams._fields_ = [
        ("X", c_ubyte),
        ("Y", c_ubyte),
        ("Z", c_ubyte),
        ("Padding", c_ubyte),
    ]

    FRecoilDef._fields_ = [
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

    FTeamState._fields_ = [("TeamIndex", c_int), ("PlayerIndices", TArray_int)]

    FPlayerState._fields_ = [
        ("PlayerIndex", c_int),
        ("CurrentTeamIndex", c_int),
        ("TimeSpawned", c_float),
        ("TimeAliveSinceLastDeath", c_float),
    ]

    FAggregateEventMapping._fields_ = [
        ("EventID", c_int),
        ("AggregateID", c_int),
        ("TargetAggregateID", c_int),
    ]

    FGameEvents._fields_ = [("Events", FMap_Mirror)]

    FEventsBase._fields_ = [
        ("TotalEvents", FGameEvents),
        ("EventsByClass", TArray_FGameEvents),
    ]

    FWeaponEvents._fields_ = [
        ("TotalEvents", FGameEvents),
        ("EventsByClass", TArray_FGameEvents),
    ]

    FDamageEvents._fields_ = [
        ("TotalEvents", FGameEvents),
        ("EventsByClass", TArray_FGameEvents),
    ]

    FProjectileEvents._fields_ = [
        ("TotalEvents", FGameEvents),
        ("EventsByClass", TArray_FGameEvents),
    ]

    FPawnEvents._fields_ = [
        ("TotalEvents", FGameEvents),
        ("EventsByClass", TArray_FGameEvents),
    ]

    FTeamEvents._fields_ = [
        ("TotalEvents", FGameEvents),
        ("WeaponEvents", FWeaponEvents),
        ("DamageAsPlayerEvents", FDamageEvents),
        ("DamageAsTargetEvents", FDamageEvents),
        ("ProjectileEvents", FProjectileEvents),
        ("PawnEvents", FPawnEvents),
    ]

    FPlayerEvents._fields_ = [
        ("TotalEvents", FGameEvents),
        ("WeaponEvents", FWeaponEvents),
        ("DamageAsPlayerEvents", FDamageEvents),
        ("DamageAsTargetEvents", FDamageEvents),
        ("ProjectileEvents", FProjectileEvents),
        ("PawnEvents", FPawnEvents),
    ]

    FGameEvent._fields_ = [("EventCountByTimePeriod", TArray_float)]

    FPropertyInfo._fields_ = [
        ("PropertyName", FName),
        ("bModifyProperty", c_bool, 1),
        ("PropertyValue", FString),
    ]
