#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_gamedefines(py::module &m)
{
	py::class_< FName >(m, "FName")
		.def_readwrite("Index", &FName::Index)
		.def_readwrite("Number", &FName::Number)
		;

	py::class_< TArray<FNameEntry *> >(m, "TArray<FNameEntry *>")

		.def_readwrite("Count", &TArray<FNameEntry *>::Count)
		.def_readwrite("Max", &TArray<FNameEntry *>::Max)
		.def("Num", &TArray<FNameEntry *>::Num)
		.def("__call__", (FNameEntry*& (TArray<FNameEntry *>::*)(int))&TArray<FNameEntry *>::operator (), py::return_value_policy::reference)
		;

	py::class_< FNameEntry >(m, "FNameEntry")
		.def_readonly("Name", &FNameEntry::Name)
		.def("AppendNameToString", &FNameEntry::AppendNameToString)
		;

	py::class_< TArray<UObject *> >(m, "TArray<UObject *>")

		.def_readwrite("Count", &TArray<UObject *>::Count)
		.def_readwrite("Max", &TArray<UObject *>::Max)
		.def("Num", &TArray<UObject *>::Num)
		.def("__call__", (UObject*& (TArray<UObject *>::*)(int))&TArray<UObject *>::operator (), py::return_value_policy::reference)
		;

	py::class_< FString >(m, "FString")

		.def_readwrite("Count", &TArray<wchar_t>::Count)
		.def_readwrite("Max", &TArray<wchar_t>::Max)
		.def("Num", &TArray<wchar_t>::Num)
		;

	py::class_< TArray<wchar_t> >(m, "TArray<wchar_t>")

		.def_readwrite("Count", &TArray<wchar_t>::Count)
		.def_readwrite("Max", &TArray<wchar_t>::Max)
		.def("Num", &TArray<wchar_t>::Num)
		.def("__call__", (wchar_t& (TArray<wchar_t>::*)(int))&TArray<wchar_t>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<float> >(m, "TArray<float>")

		.def_readwrite("Count", &TArray<float>::Count)
		.def_readwrite("Max", &TArray<float>::Max)
		.def("Num", &TArray<float>::Num)
		.def("__call__", (float& (TArray<float>::*)(int))&TArray<float>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FString> >(m, "TArray<FString>")

		.def_readwrite("Count", &TArray<FString>::Count)
		.def_readwrite("Max", &TArray<FString>::Max)
		.def("Num", &TArray<FString>::Num)
		.def("__call__", (FString& (TArray<FString>::*)(int))&TArray<FString>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpCurvePointVector2D> >(m, "TArray<FInterpCurvePointVector2D>")

		.def_readwrite("Count", &TArray<FInterpCurvePointVector2D>::Count)
		.def_readwrite("Max", &TArray<FInterpCurvePointVector2D>::Max)
		.def("Num", &TArray<FInterpCurvePointVector2D>::Num)
		.def("__call__", (FInterpCurvePointVector2D& (TArray<FInterpCurvePointVector2D>::*)(int))&TArray<FInterpCurvePointVector2D>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpCurvePointVector> >(m, "TArray<FInterpCurvePointVector>")

		.def_readwrite("Count", &TArray<FInterpCurvePointVector>::Count)
		.def_readwrite("Max", &TArray<FInterpCurvePointVector>::Max)
		.def("Num", &TArray<FInterpCurvePointVector>::Num)
		.def("__call__", (FInterpCurvePointVector& (TArray<FInterpCurvePointVector>::*)(int))&TArray<FInterpCurvePointVector>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpCurvePointFloat> >(m, "TArray<FInterpCurvePointFloat>")

		.def_readwrite("Count", &TArray<FInterpCurvePointFloat>::Count)
		.def_readwrite("Max", &TArray<FInterpCurvePointFloat>::Max)
		.def("Num", &TArray<FInterpCurvePointFloat>::Num)
		.def("__call__", (FInterpCurvePointFloat& (TArray<FInterpCurvePointFloat>::*)(int))&TArray<FInterpCurvePointFloat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTranslatorTag *> >(m, "TArray<UTranslatorTag *>")

		.def_readwrite("Count", &TArray<UTranslatorTag *>::Count)
		.def_readwrite("Max", &TArray<UTranslatorTag *>::Max)
		.def("Num", &TArray<UTranslatorTag *>::Num)
		.def("__call__", (UTranslatorTag*& (TArray<UTranslatorTag *>::*)(int))&TArray<UTranslatorTag *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UActorComponent *> >(m, "TArray<UActorComponent *>")

		.def_readwrite("Count", &TArray<UActorComponent *>::Count)
		.def_readwrite("Max", &TArray<UActorComponent *>::Max)
		.def("Num", &TArray<UActorComponent *>::Num)
		.def("__call__", (UActorComponent*& (TArray<UActorComponent *>::*)(int))&TArray<UActorComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTimerData> >(m, "TArray<FTimerData>")

		.def_readwrite("Count", &TArray<FTimerData>::Count)
		.def_readwrite("Max", &TArray<FTimerData>::Max)
		.def("Num", &TArray<FTimerData>::Num)
		.def("__call__", (FTimerData& (TArray<FTimerData>::*)(int))&TArray<FTimerData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAttributeModifier *> >(m, "TArray<UAttributeModifier *>")

		.def_readwrite("Count", &TArray<UAttributeModifier *>::Count)
		.def_readwrite("Max", &TArray<UAttributeModifier *>::Max)
		.def("Num", &TArray<UAttributeModifier *>::Num)
		.def("__call__", (UAttributeModifier*& (TArray<UAttributeModifier *>::*)(int))&TArray<UAttributeModifier *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UReachSpec *> >(m, "TArray<UReachSpec *>")

		.def_readwrite("Count", &TArray<UReachSpec *>::Count)
		.def_readwrite("Max", &TArray<UReachSpec *>::Max)
		.def("Num", &TArray<UReachSpec *>::Num)
		.def("__call__", (UReachSpec*& (TArray<UReachSpec *>::*)(int))&TArray<UReachSpec *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPointer> >(m, "TArray<FPointer>")

		.def_readwrite("Count", &TArray<FPointer>::Count)
		.def_readwrite("Max", &TArray<FPointer>::Max)
		.def("Num", &TArray<FPointer>::Num)
		.def("__call__", (FPointer& (TArray<FPointer>::*)(int))&TArray<FPointer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDecalComponent *> >(m, "TArray<UDecalComponent *>")

		.def_readwrite("Count", &TArray<UDecalComponent *>::Count)
		.def_readwrite("Max", &TArray<UDecalComponent *>::Max)
		.def("Num", &TArray<UDecalComponent *>::Num)
		.def("__call__", (UDecalComponent*& (TArray<UDecalComponent *>::*)(int))&TArray<UDecalComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFontCharacter> >(m, "TArray<FFontCharacter>")

		.def_readwrite("Count", &TArray<FFontCharacter>::Count)
		.def_readwrite("Max", &TArray<FFontCharacter>::Max)
		.def("Num", &TArray<FFontCharacter>::Num)
		.def("__call__", (FFontCharacter& (TArray<FFontCharacter>::*)(int))&TArray<FFontCharacter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTexture2D *> >(m, "TArray<UTexture2D *>")

		.def_readwrite("Count", &TArray<UTexture2D *>::Count)
		.def_readwrite("Max", &TArray<UTexture2D *>::Max)
		.def("Num", &TArray<UTexture2D *>::Num)
		.def("__call__", (UTexture2D*& (TArray<UTexture2D *>::*)(int))&TArray<UTexture2D *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<unsigned char> >(m, "TArray<unsigned char>")

		.def_readwrite("Count", &TArray<unsigned char>::Count)
		.def_readwrite("Max", &TArray<unsigned char>::Max)
		.def("Num", &TArray<unsigned char>::Num)
		.def("__call__", (unsigned char& (TArray<unsigned char>::*)(int))&TArray<unsigned char>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<int> >(m, "TArray<int>")

		.def_readwrite("Count", &TArray<int>::Count)
		.def_readwrite("Max", &TArray<int>::Max)
		.def("Num", &TArray<int>::Num)
		.def("__call__", (int& (TArray<int>::*)(int))&TArray<int>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleEmitter *> >(m, "TArray<UParticleEmitter *>")

		.def_readwrite("Count", &TArray<UParticleEmitter *>::Count)
		.def_readwrite("Max", &TArray<UParticleEmitter *>::Max)
		.def("Num", &TArray<UParticleEmitter *>::Num)
		.def("__call__", (UParticleEmitter*& (TArray<UParticleEmitter *>::*)(int))&TArray<UParticleEmitter *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleLODLevel *> >(m, "TArray<UParticleLODLevel *>")

		.def_readwrite("Count", &TArray<UParticleLODLevel *>::Count)
		.def_readwrite("Max", &TArray<UParticleLODLevel *>::Max)
		.def("Num", &TArray<UParticleLODLevel *>::Num)
		.def("__call__", (UParticleLODLevel*& (TArray<UParticleLODLevel *>::*)(int))&TArray<UParticleLODLevel *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleBurst> >(m, "TArray<FParticleBurst>")

		.def_readwrite("Count", &TArray<FParticleBurst>::Count)
		.def_readwrite("Max", &TArray<FParticleBurst>::Max)
		.def("Num", &TArray<FParticleBurst>::Num)
		.def("__call__", (FParticleBurst& (TArray<FParticleBurst>::*)(int))&TArray<FParticleBurst>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleModule *> >(m, "TArray<UParticleModule *>")

		.def_readwrite("Count", &TArray<UParticleModule *>::Count)
		.def_readwrite("Max", &TArray<UParticleModule *>::Max)
		.def("Num", &TArray<UParticleModule *>::Num)
		.def("__call__", (UParticleModule*& (TArray<UParticleModule *>::*)(int))&TArray<UParticleModule *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEvent_GenerateInfo> >(m, "TArray<FParticleEvent_GenerateInfo>")

		.def_readwrite("Count", &TArray<FParticleEvent_GenerateInfo>::Count)
		.def_readwrite("Max", &TArray<FParticleEvent_GenerateInfo>::Max)
		.def("Num", &TArray<FParticleEvent_GenerateInfo>::Num)
		.def("__call__", (FParticleEvent_GenerateInfo& (TArray<FParticleEvent_GenerateInfo>::*)(int))&TArray<FParticleEvent_GenerateInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleModuleEventSendToGame *> >(m, "TArray<UParticleModuleEventSendToGame *>")

		.def_readwrite("Count", &TArray<UParticleModuleEventSendToGame *>::Count)
		.def_readwrite("Max", &TArray<UParticleModuleEventSendToGame *>::Max)
		.def("Num", &TArray<UParticleModuleEventSendToGame *>::Num)
		.def("__call__", (UParticleModuleEventSendToGame*& (TArray<UParticleModuleEventSendToGame *>::*)(int))&TArray<UParticleModuleEventSendToGame *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleModuleSpawnBase *> >(m, "TArray<UParticleModuleSpawnBase *>")

		.def_readwrite("Count", &TArray<UParticleModuleSpawnBase *>::Count)
		.def_readwrite("Max", &TArray<UParticleModuleSpawnBase *>::Max)
		.def("Num", &TArray<UParticleModuleSpawnBase *>::Num)
		.def("__call__", (UParticleModuleSpawnBase*& (TArray<UParticleModuleSpawnBase *>::*)(int))&TArray<UParticleModuleSpawnBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleModuleOrbit *> >(m, "TArray<UParticleModuleOrbit *>")

		.def_readwrite("Count", &TArray<UParticleModuleOrbit *>::Count)
		.def_readwrite("Max", &TArray<UParticleModuleOrbit *>::Max)
		.def("Num", &TArray<UParticleModuleOrbit *>::Num)
		.def("__call__", (UParticleModuleOrbit*& (TArray<UParticleModuleOrbit *>::*)(int))&TArray<UParticleModuleOrbit *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleModuleEventReceiverBase *> >(m, "TArray<UParticleModuleEventReceiverBase *>")

		.def_readwrite("Count", &TArray<UParticleModuleEventReceiverBase *>::Count)
		.def_readwrite("Max", &TArray<UParticleModuleEventReceiverBase *>::Max)
		.def("Num", &TArray<UParticleModuleEventReceiverBase *>::Num)
		.def("__call__", (UParticleModuleEventReceiverBase*& (TArray<UParticleModuleEventReceiverBase *>::*)(int))&TArray<UParticleModuleEventReceiverBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UStaticMeshComponent *> >(m, "TArray<UStaticMeshComponent *>")

		.def_readwrite("Count", &TArray<UStaticMeshComponent *>::Count)
		.def_readwrite("Max", &TArray<UStaticMeshComponent *>::Max)
		.def("Num", &TArray<UStaticMeshComponent *>::Num)
		.def("__call__", (UStaticMeshComponent*& (TArray<UStaticMeshComponent *>::*)(int))&TArray<UStaticMeshComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMaterialInterface *> >(m, "TArray<UMaterialInterface *>")

		.def_readwrite("Count", &TArray<UMaterialInterface *>::Count)
		.def_readwrite("Max", &TArray<UMaterialInterface *>::Max)
		.def("Num", &TArray<UMaterialInterface *>::Num)
		.def("__call__", (UMaterialInterface*& (TArray<UMaterialInterface *>::*)(int))&TArray<UMaterialInterface *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTexture *> >(m, "TArray<UTexture *>")

		.def_readwrite("Count", &TArray<UTexture *>::Count)
		.def_readwrite("Max", &TArray<UTexture *>::Max)
		.def("Num", &TArray<UTexture *>::Num)
		.def("__call__", (UTexture*& (TArray<UTexture *>::*)(int))&TArray<UTexture *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFontParameterValue> >(m, "TArray<FFontParameterValue>")

		.def_readwrite("Count", &TArray<FFontParameterValue>::Count)
		.def_readwrite("Max", &TArray<FFontParameterValue>::Max)
		.def("Num", &TArray<FFontParameterValue>::Num)
		.def("__call__", (FFontParameterValue& (TArray<FFontParameterValue>::*)(int))&TArray<FFontParameterValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScalarParameterValue> >(m, "TArray<FScalarParameterValue>")

		.def_readwrite("Count", &TArray<FScalarParameterValue>::Count)
		.def_readwrite("Max", &TArray<FScalarParameterValue>::Max)
		.def("Num", &TArray<FScalarParameterValue>::Num)
		.def("__call__", (FScalarParameterValue& (TArray<FScalarParameterValue>::*)(int))&TArray<FScalarParameterValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTextureParameterValue> >(m, "TArray<FTextureParameterValue>")

		.def_readwrite("Count", &TArray<FTextureParameterValue>::Count)
		.def_readwrite("Max", &TArray<FTextureParameterValue>::Max)
		.def("Num", &TArray<FTextureParameterValue>::Num)
		.def("__call__", (FTextureParameterValue& (TArray<FTextureParameterValue>::*)(int))&TArray<FTextureParameterValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVectorParameterValue> >(m, "TArray<FVectorParameterValue>")

		.def_readwrite("Count", &TArray<FVectorParameterValue>::Count)
		.def_readwrite("Max", &TArray<FVectorParameterValue>::Max)
		.def("Num", &TArray<FVectorParameterValue>::Num)
		.def("__call__", (FVectorParameterValue& (TArray<FVectorParameterValue>::*)(int))&TArray<FVectorParameterValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFontParameterValueOverTime> >(m, "TArray<FFontParameterValueOverTime>")

		.def_readwrite("Count", &TArray<FFontParameterValueOverTime>::Count)
		.def_readwrite("Max", &TArray<FFontParameterValueOverTime>::Max)
		.def("Num", &TArray<FFontParameterValueOverTime>::Num)
		.def("__call__", (FFontParameterValueOverTime& (TArray<FFontParameterValueOverTime>::*)(int))&TArray<FFontParameterValueOverTime>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScalarParameterValueOverTime> >(m, "TArray<FScalarParameterValueOverTime>")

		.def_readwrite("Count", &TArray<FScalarParameterValueOverTime>::Count)
		.def_readwrite("Max", &TArray<FScalarParameterValueOverTime>::Max)
		.def("Num", &TArray<FScalarParameterValueOverTime>::Num)
		.def("__call__", (FScalarParameterValueOverTime& (TArray<FScalarParameterValueOverTime>::*)(int))&TArray<FScalarParameterValueOverTime>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTextureParameterValueOverTime> >(m, "TArray<FTextureParameterValueOverTime>")

		.def_readwrite("Count", &TArray<FTextureParameterValueOverTime>::Count)
		.def_readwrite("Max", &TArray<FTextureParameterValueOverTime>::Max)
		.def("Num", &TArray<FTextureParameterValueOverTime>::Num)
		.def("__call__", (FTextureParameterValueOverTime& (TArray<FTextureParameterValueOverTime>::*)(int))&TArray<FTextureParameterValueOverTime>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVectorParameterValueOverTime> >(m, "TArray<FVectorParameterValueOverTime>")

		.def_readwrite("Count", &TArray<FVectorParameterValueOverTime>::Count)
		.def_readwrite("Max", &TArray<FVectorParameterValueOverTime>::Max)
		.def("Num", &TArray<FVectorParameterValueOverTime>::Num)
		.def("__call__", (FVectorParameterValueOverTime& (TArray<FVectorParameterValueOverTime>::*)(int))&TArray<FVectorParameterValueOverTime>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStaticMeshLODInfo> >(m, "TArray<FStaticMeshLODInfo>")

		.def_readwrite("Count", &TArray<FStaticMeshLODInfo>::Count)
		.def_readwrite("Max", &TArray<FStaticMeshLODInfo>::Max)
		.def("Num", &TArray<FStaticMeshLODInfo>::Num)
		.def("__call__", (FStaticMeshLODInfo& (TArray<FStaticMeshLODInfo>::*)(int))&TArray<FStaticMeshLODInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStaticMeshLODElement> >(m, "TArray<FStaticMeshLODElement>")

		.def_readwrite("Count", &TArray<FStaticMeshLODElement>::Count)
		.def_readwrite("Max", &TArray<FStaticMeshLODElement>::Max)
		.def("Num", &TArray<FStaticMeshLODElement>::Num)
		.def("__call__", (FStaticMeshLODElement& (TArray<FStaticMeshLODElement>::*)(int))&TArray<FStaticMeshLODElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKSphereElem> >(m, "TArray<FKSphereElem>")

		.def_readwrite("Count", &TArray<FKSphereElem>::Count)
		.def_readwrite("Max", &TArray<FKSphereElem>::Max)
		.def("Num", &TArray<FKSphereElem>::Num)
		.def("__call__", (FKSphereElem& (TArray<FKSphereElem>::*)(int))&TArray<FKSphereElem>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKBoxElem> >(m, "TArray<FKBoxElem>")

		.def_readwrite("Count", &TArray<FKBoxElem>::Count)
		.def_readwrite("Max", &TArray<FKBoxElem>::Max)
		.def("Num", &TArray<FKBoxElem>::Num)
		.def("__call__", (FKBoxElem& (TArray<FKBoxElem>::*)(int))&TArray<FKBoxElem>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKSphylElem> >(m, "TArray<FKSphylElem>")

		.def_readwrite("Count", &TArray<FKSphylElem>::Count)
		.def_readwrite("Max", &TArray<FKSphylElem>::Max)
		.def("Num", &TArray<FKSphylElem>::Num)
		.def("__call__", (FKSphylElem& (TArray<FKSphylElem>::*)(int))&TArray<FKSphylElem>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKConvexElem> >(m, "TArray<FKConvexElem>")

		.def_readwrite("Count", &TArray<FKConvexElem>::Count)
		.def_readwrite("Max", &TArray<FKConvexElem>::Max)
		.def("Num", &TArray<FKConvexElem>::Num)
		.def("__call__", (FKConvexElem& (TArray<FKConvexElem>::*)(int))&TArray<FKConvexElem>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVector> >(m, "TArray<FVector>")

		.def_readwrite("Count", &TArray<FVector>::Count)
		.def_readwrite("Max", &TArray<FVector>::Max)
		.def("Num", &TArray<FVector>::Num)
		.def("__call__", (FVector& (TArray<FVector>::*)(int))&TArray<FVector>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlane> >(m, "TArray<FPlane>")

		.def_readwrite("Count", &TArray<FPlane>::Count)
		.def_readwrite("Max", &TArray<FPlane>::Max)
		.def("Num", &TArray<FPlane>::Num)
		.def("__call__", (FPlane& (TArray<FPlane>::*)(int))&TArray<FPlane>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKCachedConvexData> >(m, "TArray<FKCachedConvexData>")

		.def_readwrite("Count", &TArray<FKCachedConvexData>::Count)
		.def_readwrite("Max", &TArray<FKCachedConvexData>::Max)
		.def("Num", &TArray<FKCachedConvexData>::Num)
		.def("__call__", (FKCachedConvexData& (TArray<FKCachedConvexData>::*)(int))&TArray<FKCachedConvexData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKCachedConvexDataElement> >(m, "TArray<FKCachedConvexDataElement>")

		.def_readwrite("Count", &TArray<FKCachedConvexDataElement>::Count)
		.def_readwrite("Max", &TArray<FKCachedConvexDataElement>::Max)
		.def("Num", &TArray<FKCachedConvexDataElement>::Num)
		.def("__call__", (FKCachedConvexDataElement& (TArray<FKCachedConvexDataElement>::*)(int))&TArray<FKCachedConvexDataElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGuid> >(m, "TArray<FGuid>")

		.def_readwrite("Count", &TArray<FGuid>::Count)
		.def_readwrite("Max", &TArray<FGuid>::Max)
		.def("Num", &TArray<FGuid>::Num)
		.def("__call__", (FGuid& (TArray<FGuid>::*)(int))&TArray<FGuid>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStaticMeshComponentLODInfo> >(m, "TArray<FStaticMeshComponentLODInfo>")

		.def_readwrite("Count", &TArray<FStaticMeshComponentLODInfo>::Count)
		.def_readwrite("Max", &TArray<FStaticMeshComponentLODInfo>::Max)
		.def("Num", &TArray<FStaticMeshComponentLODInfo>::Num)
		.def("__call__", (FStaticMeshComponentLODInfo& (TArray<FStaticMeshComponentLODInfo>::*)(int))&TArray<FStaticMeshComponentLODInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UShadowMap2D *> >(m, "TArray<UShadowMap2D *>")

		.def_readwrite("Count", &TArray<UShadowMap2D *>::Count)
		.def_readwrite("Max", &TArray<UShadowMap2D *>::Max)
		.def("Num", &TArray<UShadowMap2D *>::Num)
		.def("__call__", (UShadowMap2D*& (TArray<UShadowMap2D *>::*)(int))&TArray<UShadowMap2D *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInstancedStaticMeshInstanceData> >(m, "TArray<FInstancedStaticMeshInstanceData>")

		.def_readwrite("Count", &TArray<FInstancedStaticMeshInstanceData>::Count)
		.def_readwrite("Max", &TArray<FInstancedStaticMeshInstanceData>::Max)
		.def("Num", &TArray<FInstancedStaticMeshInstanceData>::Num)
		.def("__call__", (FInstancedStaticMeshInstanceData& (TArray<FInstancedStaticMeshInstanceData>::*)(int))&TArray<FInstancedStaticMeshInstanceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInstancedStaticMeshMappingInfo> >(m, "TArray<FInstancedStaticMeshMappingInfo>")

		.def_readwrite("Count", &TArray<FInstancedStaticMeshMappingInfo>::Count)
		.def_readwrite("Max", &TArray<FInstancedStaticMeshMappingInfo>::Max)
		.def("Num", &TArray<FInstancedStaticMeshMappingInfo>::Num)
		.def("__call__", (FInstancedStaticMeshMappingInfo& (TArray<FInstancedStaticMeshMappingInfo>::*)(int))&TArray<FInstancedStaticMeshMappingInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkeletalMeshComponent *> >(m, "TArray<USkeletalMeshComponent *>")

		.def_readwrite("Count", &TArray<USkeletalMeshComponent *>::Count)
		.def_readwrite("Max", &TArray<USkeletalMeshComponent *>::Max)
		.def("Num", &TArray<USkeletalMeshComponent *>::Num)
		.def("__call__", (USkeletalMeshComponent*& (TArray<USkeletalMeshComponent *>::*)(int))&TArray<USkeletalMeshComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UApexClothingAsset *> >(m, "TArray<UApexClothingAsset *>")

		.def_readwrite("Count", &TArray<UApexClothingAsset *>::Count)
		.def_readwrite("Max", &TArray<UApexClothingAsset *>::Max)
		.def("Num", &TArray<UApexClothingAsset *>::Num)
		.def("__call__", (UApexClothingAsset*& (TArray<UApexClothingAsset *>::*)(int))&TArray<UApexClothingAsset *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UApexComponentBase *> >(m, "TArray<UApexComponentBase *>")

		.def_readwrite("Count", &TArray<UApexComponentBase *>::Count)
		.def_readwrite("Max", &TArray<UApexComponentBase *>::Max)
		.def("Num", &TArray<UApexComponentBase *>::Num)
		.def("__call__", (UApexComponentBase*& (TArray<UApexComponentBase *>::*)(int))&TArray<UApexComponentBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBoneAtom> >(m, "TArray<FBoneAtom>")

		.def_readwrite("Count", &TArray<FBoneAtom>::Count)
		.def_readwrite("Max", &TArray<FBoneAtom>::Max)
		.def("Num", &TArray<FBoneAtom>::Num)
		.def("__call__", (FBoneAtom& (TArray<FBoneAtom>::*)(int))&TArray<FBoneAtom>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBoneMirrorInfo> >(m, "TArray<FBoneMirrorInfo>")

		.def_readwrite("Count", &TArray<FBoneMirrorInfo>::Count)
		.def_readwrite("Max", &TArray<FBoneMirrorInfo>::Max)
		.def("Num", &TArray<FBoneMirrorInfo>::Num)
		.def("__call__", (FBoneMirrorInfo& (TArray<FBoneMirrorInfo>::*)(int))&TArray<FBoneMirrorInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkeletalMeshSocket *> >(m, "TArray<USkeletalMeshSocket *>")

		.def_readwrite("Count", &TArray<USkeletalMeshSocket *>::Count)
		.def_readwrite("Max", &TArray<USkeletalMeshSocket *>::Max)
		.def("Num", &TArray<USkeletalMeshSocket *>::Num)
		.def("__call__", (USkeletalMeshSocket*& (TArray<USkeletalMeshSocket *>::*)(int))&TArray<USkeletalMeshSocket *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkeletalMeshLODInfo> >(m, "TArray<FSkeletalMeshLODInfo>")

		.def_readwrite("Count", &TArray<FSkeletalMeshLODInfo>::Count)
		.def_readwrite("Max", &TArray<FSkeletalMeshLODInfo>::Max)
		.def("Num", &TArray<FSkeletalMeshLODInfo>::Num)
		.def("__call__", (FSkeletalMeshLODInfo& (TArray<FSkeletalMeshLODInfo>::*)(int))&TArray<FSkeletalMeshLODInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<unsigned long> >(m, "TArray<unsigned long>")
		.def_readwrite("Count", &TArray<unsigned long>::Count)
		.def_readwrite("Max", &TArray<unsigned long>::Max)
		.def("Num", &TArray<unsigned long>::Num)
		.def("__call__", (long unsigned int& (TArray<unsigned long>::*)(int))&TArray<unsigned long>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTriangleSortSettings> >(m, "TArray<FTriangleSortSettings>")

		.def_readwrite("Count", &TArray<FTriangleSortSettings>::Count)
		.def_readwrite("Max", &TArray<FTriangleSortSettings>::Max)
		.def("Num", &TArray<FTriangleSortSettings>::Num)
		.def("__call__", (FTriangleSortSettings& (TArray<FTriangleSortSettings>::*)(int))&TArray<FTriangleSortSettings>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FName> >(m, "TArray<FName>")

		.def_readwrite("Count", &TArray<FName>::Count)
		.def_readwrite("Max", &TArray<FName>::Max)
		.def("Num", &TArray<FName>::Num)
		.def("__call__", (FName& (TArray<FName>::*)(int))&TArray<FName>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFaceFXAnimSet *> >(m, "TArray<UFaceFXAnimSet *>")

		.def_readwrite("Count", &TArray<UFaceFXAnimSet *>::Count)
		.def_readwrite("Max", &TArray<UFaceFXAnimSet *>::Max)
		.def("Num", &TArray<UFaceFXAnimSet *>::Num)
		.def("__call__", (UFaceFXAnimSet*& (TArray<UFaceFXAnimSet *>::*)(int))&TArray<UFaceFXAnimSet *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGroupAnimationAndSoundIdentifier> >(m, "TArray<FGroupAnimationAndSoundIdentifier>")

		.def_readwrite("Count", &TArray<FGroupAnimationAndSoundIdentifier>::Count)
		.def_readwrite("Max", &TArray<FGroupAnimationAndSoundIdentifier>::Max)
		.def("Num", &TArray<FGroupAnimationAndSoundIdentifier>::Num)
		.def("__call__", (FGroupAnimationAndSoundIdentifier& (TArray<FGroupAnimationAndSoundIdentifier>::*)(int))&TArray<FGroupAnimationAndSoundIdentifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USoundNode *> >(m, "TArray<USoundNode *>")

		.def_readwrite("Count", &TArray<USoundNode *>::Count)
		.def_readwrite("Max", &TArray<USoundNode *>::Max)
		.def("Num", &TArray<USoundNode *>::Num)
		.def("__call__", (USoundNode*& (TArray<USoundNode *>::*)(int))&TArray<USoundNode *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FClothSpecialBoneInfo> >(m, "TArray<FClothSpecialBoneInfo>")

		.def_readwrite("Count", &TArray<FClothSpecialBoneInfo>::Count)
		.def_readwrite("Max", &TArray<FClothSpecialBoneInfo>::Max)
		.def("Num", &TArray<FClothSpecialBoneInfo>::Num)
		.def("__call__", (FClothSpecialBoneInfo& (TArray<FClothSpecialBoneInfo>::*)(int))&TArray<FClothSpecialBoneInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSoftBodyTetraLink> >(m, "TArray<FSoftBodyTetraLink>")

		.def_readwrite("Count", &TArray<FSoftBodyTetraLink>::Count)
		.def_readwrite("Max", &TArray<FSoftBodyTetraLink>::Max)
		.def("Num", &TArray<FSoftBodyTetraLink>::Num)
		.def("__call__", (FSoftBodyTetraLink& (TArray<FSoftBodyTetraLink>::*)(int))&TArray<FSoftBodyTetraLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSoftBodySpecialBoneInfo> >(m, "TArray<FSoftBodySpecialBoneInfo>")

		.def_readwrite("Count", &TArray<FSoftBodySpecialBoneInfo>::Count)
		.def_readwrite("Max", &TArray<FSoftBodySpecialBoneInfo>::Max)
		.def("Num", &TArray<FSoftBodySpecialBoneInfo>::Num)
		.def("__call__", (FSoftBodySpecialBoneInfo& (TArray<FSoftBodySpecialBoneInfo>::*)(int))&TArray<FSoftBodySpecialBoneInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltLODModel> >(m, "TArray<FGestaltLODModel>")

		.def_readwrite("Count", &TArray<FGestaltLODModel>::Count)
		.def_readwrite("Max", &TArray<FGestaltLODModel>::Max)
		.def("Num", &TArray<FGestaltLODModel>::Num)
		.def("__call__", (FGestaltLODModel& (TArray<FGestaltLODModel>::*)(int))&TArray<FGestaltLODModel>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltLODModelFragment> >(m, "TArray<FGestaltLODModelFragment>")

		.def_readwrite("Count", &TArray<FGestaltLODModelFragment>::Count)
		.def_readwrite("Max", &TArray<FGestaltLODModelFragment>::Max)
		.def("Num", &TArray<FGestaltLODModelFragment>::Num)
		.def("__call__", (FGestaltLODModelFragment& (TArray<FGestaltLODModelFragment>::*)(int))&TArray<FGestaltLODModelFragment>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSocketRemapEntry> >(m, "TArray<FSocketRemapEntry>")

		.def_readwrite("Count", &TArray<FSocketRemapEntry>::Count)
		.def_readwrite("Max", &TArray<FSocketRemapEntry>::Max)
		.def("Num", &TArray<FSocketRemapEntry>::Num)
		.def("__call__", (FSocketRemapEntry& (TArray<FSocketRemapEntry>::*)(int))&TArray<FSocketRemapEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltAccessoryEntry> >(m, "TArray<FGestaltAccessoryEntry>")

		.def_readwrite("Count", &TArray<FGestaltAccessoryEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltAccessoryEntry>::Max)
		.def("Num", &TArray<FGestaltAccessoryEntry>::Num)
		.def("__call__", (FGestaltAccessoryEntry& (TArray<FGestaltAccessoryEntry>::*)(int))&TArray<FGestaltAccessoryEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltAccessoryMeshEntry> >(m, "TArray<FGestaltAccessoryMeshEntry>")

		.def_readwrite("Count", &TArray<FGestaltAccessoryMeshEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltAccessoryMeshEntry>::Max)
		.def("Num", &TArray<FGestaltAccessoryMeshEntry>::Num)
		.def("__call__", (FGestaltAccessoryMeshEntry& (TArray<FGestaltAccessoryMeshEntry>::*)(int))&TArray<FGestaltAccessoryMeshEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltAccessoryGroupEntry> >(m, "TArray<FGestaltAccessoryGroupEntry>")

		.def_readwrite("Count", &TArray<FGestaltAccessoryGroupEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltAccessoryGroupEntry>::Max)
		.def("Num", &TArray<FGestaltAccessoryGroupEntry>::Num)
		.def("__call__", (FGestaltAccessoryGroupEntry& (TArray<FGestaltAccessoryGroupEntry>::*)(int))&TArray<FGestaltAccessoryGroupEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltAccessoryPartEntry> >(m, "TArray<FGestaltAccessoryPartEntry>")

		.def_readwrite("Count", &TArray<FGestaltAccessoryPartEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltAccessoryPartEntry>::Max)
		.def("Num", &TArray<FGestaltAccessoryPartEntry>::Num)
		.def("__call__", (FGestaltAccessoryPartEntry& (TArray<FGestaltAccessoryPartEntry>::*)(int))&TArray<FGestaltAccessoryPartEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMatrix> >(m, "TArray<FMatrix>")

		.def_readwrite("Count", &TArray<FMatrix>::Count)
		.def_readwrite("Max", &TArray<FMatrix>::Max)
		.def("Num", &TArray<FMatrix>::Num)
		.def("__call__", (FMatrix& (TArray<FMatrix>::*)(int))&TArray<FMatrix>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimNodeBlendBase *> >(m, "TArray<UAnimNodeBlendBase *>")

		.def_readwrite("Count", &TArray<UAnimNodeBlendBase *>::Count)
		.def_readwrite("Max", &TArray<UAnimNodeBlendBase *>::Max)
		.def("Num", &TArray<UAnimNodeBlendBase *>::Num)
		.def("__call__", (UAnimNodeBlendBase*& (TArray<UAnimNodeBlendBase *>::*)(int))&TArray<UAnimNodeBlendBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCurveKey> >(m, "TArray<FCurveKey>")

		.def_readwrite("Count", &TArray<FCurveKey>::Count)
		.def_readwrite("Max", &TArray<FCurveKey>::Max)
		.def("Num", &TArray<FCurveKey>::Num)
		.def("__call__", (FCurveKey& (TArray<FCurveKey>::*)(int))&TArray<FCurveKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimNode *> >(m, "TArray<UAnimNode *>")

		.def_readwrite("Count", &TArray<UAnimNode *>::Count)
		.def_readwrite("Max", &TArray<UAnimNode *>::Max)
		.def("Num", &TArray<UAnimNode *>::Num)
		.def("__call__", (UAnimNode*& (TArray<UAnimNode *>::*)(int))&TArray<UAnimNode *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimBlendChild> >(m, "TArray<FAnimBlendChild>")

		.def_readwrite("Count", &TArray<FAnimBlendChild>::Count)
		.def_readwrite("Max", &TArray<FAnimBlendChild>::Max)
		.def("Num", &TArray<FAnimBlendChild>::Num)
		.def("__call__", (FAnimBlendChild& (TArray<FAnimBlendChild>::*)(int))&TArray<FAnimBlendChild>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimGroup> >(m, "TArray<FAnimGroup>")

		.def_readwrite("Count", &TArray<FAnimGroup>::Count)
		.def_readwrite("Max", &TArray<FAnimGroup>::Max)
		.def("Num", &TArray<FAnimGroup>::Num)
		.def("__call__", (FAnimGroup& (TArray<FAnimGroup>::*)(int))&TArray<FAnimGroup>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimNodeSequence *> >(m, "TArray<UAnimNodeSequence *>")

		.def_readwrite("Count", &TArray<UAnimNodeSequence *>::Count)
		.def_readwrite("Max", &TArray<UAnimNodeSequence *>::Max)
		.def("Num", &TArray<UAnimNodeSequence *>::Num)
		.def("__call__", (UAnimNodeSequence*& (TArray<UAnimNodeSequence *>::*)(int))&TArray<UAnimNodeSequence *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimNotifyEvent> >(m, "TArray<FAnimNotifyEvent>")

		.def_readwrite("Count", &TArray<FAnimNotifyEvent>::Count)
		.def_readwrite("Max", &TArray<FAnimNotifyEvent>::Max)
		.def("Num", &TArray<FAnimNotifyEvent>::Num)
		.def("__call__", (FAnimNotifyEvent& (TArray<FAnimNotifyEvent>::*)(int))&TArray<FAnimNotifyEvent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimMetaData *> >(m, "TArray<UAnimMetaData *>")

		.def_readwrite("Count", &TArray<UAnimMetaData *>::Count)
		.def_readwrite("Max", &TArray<UAnimMetaData *>::Max)
		.def("Num", &TArray<UAnimMetaData *>::Num)
		.def("__call__", (UAnimMetaData*& (TArray<UAnimMetaData *>::*)(int))&TArray<UAnimMetaData *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkelControlModifier> >(m, "TArray<FSkelControlModifier>")

		.def_readwrite("Count", &TArray<FSkelControlModifier>::Count)
		.def_readwrite("Max", &TArray<FSkelControlModifier>::Max)
		.def("Num", &TArray<FSkelControlModifier>::Num)
		.def("__call__", (FSkelControlModifier& (TArray<FSkelControlModifier>::*)(int))&TArray<FSkelControlModifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTimeModifier> >(m, "TArray<FTimeModifier>")

		.def_readwrite("Count", &TArray<FTimeModifier>::Count)
		.def_readwrite("Max", &TArray<FTimeModifier>::Max)
		.def("Num", &TArray<FTimeModifier>::Num)
		.def("__call__", (FTimeModifier& (TArray<FTimeModifier>::*)(int))&TArray<FTimeModifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRawAnimSequenceTrack> >(m, "TArray<FRawAnimSequenceTrack>")

		.def_readwrite("Count", &TArray<FRawAnimSequenceTrack>::Count)
		.def_readwrite("Max", &TArray<FRawAnimSequenceTrack>::Max)
		.def("Num", &TArray<FRawAnimSequenceTrack>::Num)
		.def("__call__", (FRawAnimSequenceTrack& (TArray<FRawAnimSequenceTrack>::*)(int))&TArray<FRawAnimSequenceTrack>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FQuat> >(m, "TArray<FQuat>")

		.def_readwrite("Count", &TArray<FQuat>::Count)
		.def_readwrite("Max", &TArray<FQuat>::Max)
		.def("Num", &TArray<FQuat>::Num)
		.def("__call__", (FQuat& (TArray<FQuat>::*)(int))&TArray<FQuat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTranslationTrack> >(m, "TArray<FTranslationTrack>")

		.def_readwrite("Count", &TArray<FTranslationTrack>::Count)
		.def_readwrite("Max", &TArray<FTranslationTrack>::Max)
		.def("Num", &TArray<FTranslationTrack>::Num)
		.def("__call__", (FTranslationTrack& (TArray<FTranslationTrack>::*)(int))&TArray<FTranslationTrack>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRotationTrack> >(m, "TArray<FRotationTrack>")

		.def_readwrite("Count", &TArray<FRotationTrack>::Count)
		.def_readwrite("Max", &TArray<FRotationTrack>::Max)
		.def("Num", &TArray<FRotationTrack>::Num)
		.def("__call__", (FRotationTrack& (TArray<FRotationTrack>::*)(int))&TArray<FRotationTrack>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCurveTrack> >(m, "TArray<FCurveTrack>")

		.def_readwrite("Count", &TArray<FCurveTrack>::Count)
		.def_readwrite("Max", &TArray<FCurveTrack>::Max)
		.def("Num", &TArray<FCurveTrack>::Num)
		.def("__call__", (FCurveTrack& (TArray<FCurveTrack>::*)(int))&TArray<FCurveTrack>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeltaTrackInfo> >(m, "TArray<FDeltaTrackInfo>")

		.def_readwrite("Count", &TArray<FDeltaTrackInfo>::Count)
		.def_readwrite("Max", &TArray<FDeltaTrackInfo>::Max)
		.def("Num", &TArray<FDeltaTrackInfo>::Num)
		.def("__call__", (FDeltaTrackInfo& (TArray<FDeltaTrackInfo>::*)(int))&TArray<FDeltaTrackInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInterpTrack *> >(m, "TArray<UInterpTrack *>")

		.def_readwrite("Count", &TArray<UInterpTrack *>::Count)
		.def_readwrite("Max", &TArray<UInterpTrack *>::Max)
		.def("Num", &TArray<UInterpTrack *>::Num)
		.def("__call__", (UInterpTrack*& (TArray<UInterpTrack *>::*)(int))&TArray<UInterpTrack *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimSet *> >(m, "TArray<UAnimSet *>")

		.def_readwrite("Count", &TArray<UAnimSet *>::Count)
		.def_readwrite("Max", &TArray<UAnimSet *>::Max)
		.def("Num", &TArray<UAnimSet *>::Num)
		.def("__call__", (UAnimSet*& (TArray<UAnimSet *>::*)(int))&TArray<UAnimSet *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimSequence *> >(m, "TArray<UAnimSequence *>")

		.def_readwrite("Count", &TArray<UAnimSequence *>::Count)
		.def_readwrite("Max", &TArray<UAnimSequence *>::Max)
		.def("Num", &TArray<UAnimSequence *>::Num)
		.def("__call__", (UAnimSequence*& (TArray<UAnimSequence *>::*)(int))&TArray<UAnimSequence *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimSetMeshLinkup> >(m, "TArray<FAnimSetMeshLinkup>")

		.def_readwrite("Count", &TArray<FAnimSetMeshLinkup>::Count)
		.def_readwrite("Max", &TArray<FAnimSetMeshLinkup>::Max)
		.def("Num", &TArray<FAnimSetMeshLinkup>::Num)
		.def("__call__", (FAnimSetMeshLinkup& (TArray<FAnimSetMeshLinkup>::*)(int))&TArray<FAnimSetMeshLinkup>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInterpTrackInst *> >(m, "TArray<UInterpTrackInst *>")

		.def_readwrite("Count", &TArray<UInterpTrackInst *>::Count)
		.def_readwrite("Max", &TArray<UInterpTrackInst *>::Max)
		.def("Num", &TArray<UInterpTrackInst *>::Num)
		.def("__call__", (UInterpTrackInst*& (TArray<UInterpTrackInst *>::*)(int))&TArray<UInterpTrackInst *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpLookupPoint> >(m, "TArray<FInterpLookupPoint>")

		.def_readwrite("Count", &TArray<FInterpLookupPoint>::Count)
		.def_readwrite("Max", &TArray<FInterpLookupPoint>::Max)
		.def("Num", &TArray<FInterpLookupPoint>::Num)
		.def("__call__", (FInterpLookupPoint& (TArray<FInterpLookupPoint>::*)(int))&TArray<FInterpLookupPoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkelControlBase *> >(m, "TArray<USkelControlBase *>")

		.def_readwrite("Count", &TArray<USkelControlBase *>::Count)
		.def_readwrite("Max", &TArray<USkelControlBase *>::Max)
		.def("Num", &TArray<USkelControlBase *>::Num)
		.def("__call__", (USkelControlBase*& (TArray<USkelControlBase *>::*)(int))&TArray<USkelControlBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMorphNodeBase *> >(m, "TArray<UMorphNodeBase *>")

		.def_readwrite("Count", &TArray<UMorphNodeBase *>::Count)
		.def_readwrite("Max", &TArray<UMorphNodeBase *>::Max)
		.def("Num", &TArray<UMorphNodeBase *>::Num)
		.def("__call__", (UMorphNodeBase*& (TArray<UMorphNodeBase *>::*)(int))&TArray<UMorphNodeBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkelControlListHead> >(m, "TArray<FSkelControlListHead>")

		.def_readwrite("Count", &TArray<FSkelControlListHead>::Count)
		.def_readwrite("Max", &TArray<FSkelControlListHead>::Max)
		.def("Num", &TArray<FSkelControlListHead>::Num)
		.def("__call__", (FSkelControlListHead& (TArray<FSkelControlListHead>::*)(int))&TArray<FSkelControlListHead>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URB_BodySetup *> >(m, "TArray<URB_BodySetup *>")

		.def_readwrite("Count", &TArray<URB_BodySetup *>::Count)
		.def_readwrite("Max", &TArray<URB_BodySetup *>::Max)
		.def("Num", &TArray<URB_BodySetup *>::Num)
		.def("__call__", (URB_BodySetup*& (TArray<URB_BodySetup *>::*)(int))&TArray<URB_BodySetup *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URB_ConstraintSetup *> >(m, "TArray<URB_ConstraintSetup *>")

		.def_readwrite("Count", &TArray<URB_ConstraintSetup *>::Count)
		.def_readwrite("Max", &TArray<URB_ConstraintSetup *>::Max)
		.def("Num", &TArray<URB_ConstraintSetup *>::Num)
		.def("__call__", (URB_ConstraintSetup*& (TArray<URB_ConstraintSetup *>::*)(int))&TArray<URB_ConstraintSetup *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URB_BodyInstance *> >(m, "TArray<URB_BodyInstance *>")

		.def_readwrite("Count", &TArray<URB_BodyInstance *>::Count)
		.def_readwrite("Max", &TArray<URB_BodyInstance *>::Max)
		.def("Num", &TArray<URB_BodyInstance *>::Num)
		.def("__call__", (URB_BodyInstance*& (TArray<URB_BodyInstance *>::*)(int))&TArray<URB_BodyInstance *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URB_ConstraintInstance *> >(m, "TArray<URB_ConstraintInstance *>")

		.def_readwrite("Count", &TArray<URB_ConstraintInstance *>::Count)
		.def_readwrite("Max", &TArray<URB_ConstraintInstance *>::Max)
		.def("Num", &TArray<URB_ConstraintInstance *>::Num)
		.def("__call__", (URB_ConstraintInstance*& (TArray<URB_ConstraintInstance *>::*)(int))&TArray<URB_ConstraintInstance *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMorphTargetSet *> >(m, "TArray<UMorphTargetSet *>")

		.def_readwrite("Count", &TArray<UMorphTargetSet *>::Count)
		.def_readwrite("Max", &TArray<UMorphTargetSet *>::Max)
		.def("Num", &TArray<UMorphTargetSet *>::Num)
		.def("__call__", (UMorphTargetSet*& (TArray<UMorphTargetSet *>::*)(int))&TArray<UMorphTargetSet *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMorphTarget *> >(m, "TArray<UMorphTarget *>")

		.def_readwrite("Count", &TArray<UMorphTarget *>::Count)
		.def_readwrite("Max", &TArray<UMorphTarget *>::Max)
		.def("Num", &TArray<UMorphTarget *>::Num)
		.def("__call__", (UMorphTarget*& (TArray<UMorphTarget *>::*)(int))&TArray<UMorphTarget *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActiveMorph> >(m, "TArray<FActiveMorph>")

		.def_readwrite("Count", &TArray<FActiveMorph>::Count)
		.def_readwrite("Max", &TArray<FActiveMorph>::Max)
		.def("Num", &TArray<FActiveMorph>::Num)
		.def("__call__", (FActiveMorph& (TArray<FActiveMorph>::*)(int))&TArray<FActiveMorph>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttachment> >(m, "TArray<FAttachment>")

		.def_readwrite("Count", &TArray<FAttachment>::Count)
		.def_readwrite("Max", &TArray<FAttachment>::Max)
		.def("Num", &TArray<FAttachment>::Num)
		.def("__call__", (FAttachment& (TArray<FAttachment>::*)(int))&TArray<FAttachment>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBonePair> >(m, "TArray<FBonePair>")

		.def_readwrite("Count", &TArray<FBonePair>::Count)
		.def_readwrite("Max", &TArray<FBonePair>::Max)
		.def("Num", &TArray<FBonePair>::Num)
		.def("__call__", (FBonePair& (TArray<FBonePair>::*)(int))&TArray<FBonePair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkelMeshComponentLODInfo> >(m, "TArray<FSkelMeshComponentLODInfo>")

		.def_readwrite("Count", &TArray<FSkelMeshComponentLODInfo>::Count)
		.def_readwrite("Max", &TArray<FSkelMeshComponentLODInfo>::Max)
		.def("Num", &TArray<FSkelMeshComponentLODInfo>::Num)
		.def("__call__", (FSkelMeshComponentLODInfo& (TArray<FSkelMeshComponentLODInfo>::*)(int))&TArray<FSkelMeshComponentLODInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMaterialExpression *> >(m, "TArray<UMaterialExpression *>")

		.def_readwrite("Count", &TArray<UMaterialExpression *>::Count)
		.def_readwrite("Max", &TArray<UMaterialExpression *>::Max)
		.def("Num", &TArray<UMaterialExpression *>::Num)
		.def("__call__", (UMaterialExpression*& (TArray<UMaterialExpression *>::*)(int))&TArray<UMaterialExpression *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAudioComponentParam> >(m, "TArray<FAudioComponentParam>")

		.def_readwrite("Count", &TArray<FAudioComponentParam>::Count)
		.def_readwrite("Max", &TArray<FAudioComponentParam>::Max)
		.def("Num", &TArray<FAudioComponentParam>::Num)
		.def("__call__", (FAudioComponentParam& (TArray<FAudioComponentParam>::*)(int))&TArray<FAudioComponentParam>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSubtitleCue> >(m, "TArray<FSubtitleCue>")

		.def_readwrite("Count", &TArray<FSubtitleCue>::Count)
		.def_readwrite("Max", &TArray<FSubtitleCue>::Max)
		.def("Num", &TArray<FSubtitleCue>::Num)
		.def("__call__", (FSubtitleCue& (TArray<FSubtitleCue>::*)(int))&TArray<FSubtitleCue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLocalizedSubtitle> >(m, "TArray<FLocalizedSubtitle>")

		.def_readwrite("Count", &TArray<FLocalizedSubtitle>::Count)
		.def_readwrite("Max", &TArray<FLocalizedSubtitle>::Max)
		.def("Num", &TArray<FLocalizedSubtitle>::Num)
		.def("__call__", (FLocalizedSubtitle& (TArray<FLocalizedSubtitle>::*)(int))&TArray<FLocalizedSubtitle>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGeomSelection> >(m, "TArray<FGeomSelection>")

		.def_readwrite("Count", &TArray<FGeomSelection>::Count)
		.def_readwrite("Max", &TArray<FGeomSelection>::Max)
		.def("Num", &TArray<FGeomSelection>::Num)
		.def("__call__", (FGeomSelection& (TArray<FGeomSelection>::*)(int))&TArray<FGeomSelection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AActor *> >(m, "TArray<AActor *>")

		.def_readwrite("Count", &TArray<AActor *>::Count)
		.def_readwrite("Max", &TArray<AActor *>::Max)
		.def("Num", &TArray<AActor *>::Num)
		.def("__call__", (AActor*& (TArray<AActor *>::*)(int))&TArray<AActor *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USequenceObject *> >(m, "TArray<USequenceObject *>")

		.def_readwrite("Count", &TArray<USequenceObject *>::Count)
		.def_readwrite("Max", &TArray<USequenceObject *>::Max)
		.def("Num", &TArray<USequenceObject *>::Num)
		.def("__call__", (USequenceObject*& (TArray<USequenceObject *>::*)(int))&TArray<USequenceObject *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USequenceOp *> >(m, "TArray<USequenceOp *>")

		.def_readwrite("Count", &TArray<USequenceOp *>::Count)
		.def_readwrite("Max", &TArray<USequenceOp *>::Max)
		.def("Num", &TArray<USequenceOp *>::Num)
		.def("__call__", (USequenceOp*& (TArray<USequenceOp *>::*)(int))&TArray<USequenceOp *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USequence *> >(m, "TArray<USequence *>")

		.def_readwrite("Count", &TArray<USequence *>::Count)
		.def_readwrite("Max", &TArray<USequence *>::Max)
		.def("Num", &TArray<USequence *>::Num)
		.def("__call__", (USequence*& (TArray<USequence *>::*)(int))&TArray<USequence *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USequenceEvent *> >(m, "TArray<USequenceEvent *>")

		.def_readwrite("Count", &TArray<USequenceEvent *>::Count)
		.def_readwrite("Max", &TArray<USequenceEvent *>::Max)
		.def("Num", &TArray<USequenceEvent *>::Num)
		.def("__call__", (USequenceEvent*& (TArray<USequenceEvent *>::*)(int))&TArray<USequenceEvent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOpinionData> >(m, "TArray<FOpinionData>")

		.def_readwrite("Count", &TArray<FOpinionData>::Count)
		.def_readwrite("Max", &TArray<FOpinionData>::Max)
		.def("Num", &TArray<FOpinionData>::Num)
		.def("__call__", (FOpinionData& (TArray<FOpinionData>::*)(int))&TArray<FOpinionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInfoBarData> >(m, "TArray<FInfoBarData>")

		.def_readwrite("Count", &TArray<FInfoBarData>::Count)
		.def_readwrite("Max", &TArray<FInfoBarData>::Max)
		.def("Num", &TArray<FInfoBarData>::Num)
		.def("__call__", (FInfoBarData& (TArray<FInfoBarData>::*)(int))&TArray<FInfoBarData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActivateOp> >(m, "TArray<FActivateOp>")

		.def_readwrite("Count", &TArray<FActivateOp>::Count)
		.def_readwrite("Max", &TArray<FActivateOp>::Max)
		.def("Num", &TArray<FActivateOp>::Num)
		.def("__call__", (FActivateOp& (TArray<FActivateOp>::*)(int))&TArray<FActivateOp>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FQueuedActivationInfo> >(m, "TArray<FQueuedActivationInfo>")

		.def_readwrite("Count", &TArray<FQueuedActivationInfo>::Count)
		.def_readwrite("Max", &TArray<FQueuedActivationInfo>::Max)
		.def("Num", &TArray<FQueuedActivationInfo>::Num)
		.def("__call__", (FQueuedActivationInfo& (TArray<FQueuedActivationInfo>::*)(int))&TArray<FQueuedActivationInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPostProcessEffect *> >(m, "TArray<UPostProcessEffect *>")

		.def_readwrite("Count", &TArray<UPostProcessEffect *>::Count)
		.def_readwrite("Max", &TArray<UPostProcessEffect *>::Max)
		.def("Num", &TArray<UPostProcessEffect *>::Num)
		.def("__call__", (UPostProcessEffect*& (TArray<UPostProcessEffect *>::*)(int))&TArray<UPostProcessEffect *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AMassiveLODOverrideVolume *> >(m, "TArray<AMassiveLODOverrideVolume *>")

		.def_readwrite("Count", &TArray<AMassiveLODOverrideVolume *>::Count)
		.def_readwrite("Max", &TArray<AMassiveLODOverrideVolume *>::Max)
		.def("Num", &TArray<AMassiveLODOverrideVolume *>::Num)
		.def("__call__", (AMassiveLODOverrideVolume*& (TArray<AMassiveLODOverrideVolume *>::*)(int))&TArray<AMassiveLODOverrideVolume *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWorldEventSource> >(m, "TArray<FWorldEventSource>")

		.def_readwrite("Count", &TArray<FWorldEventSource>::Count)
		.def_readwrite("Max", &TArray<FWorldEventSource>::Max)
		.def("Num", &TArray<FWorldEventSource>::Num)
		.def("__call__", (FWorldEventSource& (TArray<FWorldEventSource>::*)(int))&TArray<FWorldEventSource>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAkComponent *> >(m, "TArray<UAkComponent *>")

		.def_readwrite("Count", &TArray<UAkComponent *>::Count)
		.def_readwrite("Max", &TArray<UAkComponent *>::Max)
		.def("Num", &TArray<UAkComponent *>::Num)
		.def("__call__", (UAkComponent*& (TArray<UAkComponent *>::*)(int))&TArray<UAkComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRotator> >(m, "TArray<FRotator>")

		.def_readwrite("Count", &TArray<FRotator>::Count)
		.def_readwrite("Max", &TArray<FRotator>::Max)
		.def("Num", &TArray<FRotator>::Num)
		.def("__call__", (FRotator& (TArray<FRotator>::*)(int))&TArray<FRotator>::operator (), py::return_value_policy::reference)
		;

	py::class_< FScriptDelegate >(m, "FScriptDelegate")
		.def_readonly("UnknownData00", &FScriptDelegate::UnknownData00)
		;

	py::class_< TArray<APortalVolume *> >(m, "TArray<APortalVolume *>")

		.def_readwrite("Count", &TArray<APortalVolume *>::Count)
		.def_readwrite("Max", &TArray<APortalVolume *>::Max)
		.def("Num", &TArray<APortalVolume *>::Num)
		.def("__call__", (APortalVolume*& (TArray<APortalVolume *>::*)(int))&TArray<APortalVolume *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AEnvironmentVolume *> >(m, "TArray<AEnvironmentVolume *>")

		.def_readwrite("Count", &TArray<AEnvironmentVolume *>::Count)
		.def_readwrite("Max", &TArray<AEnvironmentVolume *>::Max)
		.def("Num", &TArray<AEnvironmentVolume *>::Num)
		.def("__call__", (AEnvironmentVolume*& (TArray<AEnvironmentVolume *>::*)(int))&TArray<AEnvironmentVolume *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULevelStreaming *> >(m, "TArray<ULevelStreaming *>")

		.def_readwrite("Count", &TArray<ULevelStreaming *>::Count)
		.def_readwrite("Max", &TArray<ULevelStreaming *>::Max)
		.def("Num", &TArray<ULevelStreaming *>::Num)
		.def("__call__", (ULevelStreaming*& (TArray<ULevelStreaming *>::*)(int))&TArray<ULevelStreaming *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ALevelStreamingVolume *> >(m, "TArray<ALevelStreamingVolume *>")

		.def_readwrite("Count", &TArray<ALevelStreamingVolume *>::Count)
		.def_readwrite("Max", &TArray<ALevelStreamingVolume *>::Max)
		.def("Num", &TArray<ALevelStreamingVolume *>::Num)
		.def("__call__", (ALevelStreamingVolume*& (TArray<ALevelStreamingVolume *>::*)(int))&TArray<ALevelStreamingVolume *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ATeamInfo *> >(m, "TArray<ATeamInfo *>")

		.def_readwrite("Count", &TArray<ATeamInfo *>::Count)
		.def_readwrite("Max", &TArray<ATeamInfo *>::Max)
		.def("Num", &TArray<ATeamInfo *>::Num)
		.def("__call__", (ATeamInfo*& (TArray<ATeamInfo *>::*)(int))&TArray<ATeamInfo *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APlayerReplicationInfo *> >(m, "TArray<APlayerReplicationInfo *>")

		.def_readwrite("Count", &TArray<APlayerReplicationInfo *>::Count)
		.def_readwrite("Max", &TArray<APlayerReplicationInfo *>::Max)
		.def("Num", &TArray<APlayerReplicationInfo *>::Num)
		.def("__call__", (APlayerReplicationInfo*& (TArray<APlayerReplicationInfo *>::*)(int))&TArray<APlayerReplicationInfo *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAttributeContextResolver *> >(m, "TArray<UAttributeContextResolver *>")

		.def_readwrite("Count", &TArray<UAttributeContextResolver *>::Count)
		.def_readwrite("Max", &TArray<UAttributeContextResolver *>::Max)
		.def("Num", &TArray<UAttributeContextResolver *>::Num)
		.def("__call__", (UAttributeContextResolver*& (TArray<UAttributeContextResolver *>::*)(int))&TArray<UAttributeContextResolver *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAttributeValueResolver *> >(m, "TArray<UAttributeValueResolver *>")

		.def_readwrite("Count", &TArray<UAttributeValueResolver *>::Count)
		.def_readwrite("Max", &TArray<UAttributeValueResolver *>::Max)
		.def("Num", &TArray<UAttributeValueResolver *>::Num)
		.def("__call__", (UAttributeValueResolver*& (TArray<UAttributeValueResolver *>::*)(int))&TArray<UAttributeValueResolver *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalValueExpression> >(m, "TArray<FConditionalValueExpression>")

		.def_readwrite("Count", &TArray<FConditionalValueExpression>::Count)
		.def_readwrite("Max", &TArray<FConditionalValueExpression>::Max)
		.def("Num", &TArray<FConditionalValueExpression>::Num)
		.def("__call__", (FConditionalValueExpression& (TArray<FConditionalValueExpression>::*)(int))&TArray<FConditionalValueExpression>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeExpressionData> >(m, "TArray<FAttributeExpressionData>")

		.def_readwrite("Count", &TArray<FAttributeExpressionData>::Count)
		.def_readwrite("Max", &TArray<FAttributeExpressionData>::Max)
		.def("Num", &TArray<FAttributeExpressionData>::Num)
		.def("__call__", (FAttributeExpressionData& (TArray<FAttributeExpressionData>::*)(int))&TArray<FAttributeExpressionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBehaviorBase *> >(m, "TArray<UBehaviorBase *>")

		.def_readwrite("Count", &TArray<UBehaviorBase *>::Count)
		.def_readwrite("Max", &TArray<UBehaviorBase *>::Max)
		.def("Num", &TArray<UBehaviorBase *>::Num)
		.def("__call__", (UBehaviorBase*& (TArray<UBehaviorBase *>::*)(int))&TArray<UBehaviorBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorParameterUnion> >(m, "TArray<FBehaviorParameterUnion>")

		.def_readwrite("Count", &TArray<FBehaviorParameterUnion>::Count)
		.def_readwrite("Max", &TArray<FBehaviorParameterUnion>::Max)
		.def("Num", &TArray<FBehaviorParameterUnion>::Num)
		.def("__call__", (FBehaviorParameterUnion& (TArray<FBehaviorParameterUnion>::*)(int))&TArray<FBehaviorParameterUnion>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APlayerController *> >(m, "TArray<APlayerController *>")

		.def_readwrite("Count", &TArray<APlayerController *>::Count)
		.def_readwrite("Max", &TArray<APlayerController *>::Max)
		.def("Num", &TArray<APlayerController *>::Num)
		.def("__call__", (APlayerController*& (TArray<APlayerController *>::*)(int))&TArray<APlayerController *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalSoundData> >(m, "TArray<FConditionalSoundData>")

		.def_readwrite("Count", &TArray<FConditionalSoundData>::Count)
		.def_readwrite("Max", &TArray<FConditionalSoundData>::Max)
		.def("Num", &TArray<FConditionalSoundData>::Num)
		.def("__call__", (FConditionalSoundData& (TArray<FConditionalSoundData>::*)(int))&TArray<FConditionalSoundData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUIStatData> >(m, "TArray<FUIStatData>")

		.def_readwrite("Count", &TArray<FUIStatData>::Count)
		.def_readwrite("Max", &TArray<FUIStatData>::Max)
		.def("Num", &TArray<FUIStatData>::Num)
		.def("__call__", (FUIStatData& (TArray<FUIStatData>::*)(int))&TArray<FUIStatData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeSlotEffectData> >(m, "TArray<FAttributeSlotEffectData>")

		.def_readwrite("Count", &TArray<FAttributeSlotEffectData>::Count)
		.def_readwrite("Max", &TArray<FAttributeSlotEffectData>::Max)
		.def("Num", &TArray<FAttributeSlotEffectData>::Num)
		.def("__call__", (FAttributeSlotEffectData& (TArray<FAttributeSlotEffectData>::*)(int))&TArray<FAttributeSlotEffectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeSlotUpgradeData> >(m, "TArray<FAttributeSlotUpgradeData>")

		.def_readwrite("Count", &TArray<FAttributeSlotUpgradeData>::Count)
		.def_readwrite("Max", &TArray<FAttributeSlotUpgradeData>::Max)
		.def("Num", &TArray<FAttributeSlotUpgradeData>::Num)
		.def("__call__", (FAttributeSlotUpgradeData& (TArray<FAttributeSlotUpgradeData>::*)(int))&TArray<FAttributeSlotUpgradeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UClass *> >(m, "TArray<UClass *>")

		.def_readwrite("Count", &TArray<UClass *>::Count)
		.def_readwrite("Max", &TArray<UClass *>::Max)
		.def("Num", &TArray<UClass *>::Num)
		.def("__call__", (UClass*& (TArray<UClass *>::*)(int))&TArray<UClass *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDamageTypeDefinition *> >(m, "TArray<UDamageTypeDefinition *>")

		.def_readwrite("Count", &TArray<UDamageTypeDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDamageTypeDefinition *>::Max)
		.def("Num", &TArray<UDamageTypeDefinition *>::Num)
		.def("__call__", (UDamageTypeDefinition*& (TArray<UDamageTypeDefinition *>::*)(int))&TArray<UDamageTypeDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UImpactDefinition *> >(m, "TArray<UImpactDefinition *>")

		.def_readwrite("Count", &TArray<UImpactDefinition *>::Count)
		.def_readwrite("Max", &TArray<UImpactDefinition *>::Max)
		.def("Num", &TArray<UImpactDefinition *>::Num)
		.def("__call__", (UImpactDefinition*& (TArray<UImpactDefinition *>::*)(int))&TArray<UImpactDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRigidBodyContactInfo> >(m, "TArray<FRigidBodyContactInfo>")

		.def_readwrite("Count", &TArray<FRigidBodyContactInfo>::Count)
		.def_readwrite("Max", &TArray<FRigidBodyContactInfo>::Max)
		.def("Num", &TArray<FRigidBodyContactInfo>::Num)
		.def("__call__", (FRigidBodyContactInfo& (TArray<FRigidBodyContactInfo>::*)(int))&TArray<FRigidBodyContactInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActorReference> >(m, "TArray<FActorReference>")

		.def_readwrite("Count", &TArray<FActorReference>::Count)
		.def_readwrite("Max", &TArray<FActorReference>::Max)
		.def("Num", &TArray<FActorReference>::Num)
		.def("__call__", (FActorReference& (TArray<FActorReference>::*)(int))&TArray<FActorReference>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FImpactInfo> >(m, "TArray<FImpactInfo>")

		.def_readwrite("Count", &TArray<FImpactInfo>::Count)
		.def_readwrite("Max", &TArray<FImpactInfo>::Max)
		.def("Num", &TArray<FImpactInfo>::Num)
		.def("__call__", (FImpactInfo& (TArray<FImpactInfo>::*)(int))&TArray<FImpactInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FManufacturerGradeData> >(m, "TArray<FManufacturerGradeData>")

		.def_readwrite("Count", &TArray<FManufacturerGradeData>::Count)
		.def_readwrite("Max", &TArray<FManufacturerGradeData>::Max)
		.def("Num", &TArray<FManufacturerGradeData>::Num)
		.def("__call__", (FManufacturerGradeData& (TArray<FManufacturerGradeData>::*)(int))&TArray<FManufacturerGradeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConsoleMessage> >(m, "TArray<FConsoleMessage>")

		.def_readwrite("Count", &TArray<FConsoleMessage>::Count)
		.def_readwrite("Max", &TArray<FConsoleMessage>::Max)
		.def("Num", &TArray<FConsoleMessage>::Num)
		.def("__call__", (FConsoleMessage& (TArray<FConsoleMessage>::*)(int))&TArray<FConsoleMessage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCanvasUVTri> >(m, "TArray<FCanvasUVTri>")

		.def_readwrite("Count", &TArray<FCanvasUVTri>::Count)
		.def_readwrite("Max", &TArray<FCanvasUVTri>::Max)
		.def("Num", &TArray<FCanvasUVTri>::Num)
		.def("__call__", (FCanvasUVTri& (TArray<FCanvasUVTri>::*)(int))&TArray<FCanvasUVTri>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKismetDrawTextInfo> >(m, "TArray<FKismetDrawTextInfo>")

		.def_readwrite("Count", &TArray<FKismetDrawTextInfo>::Count)
		.def_readwrite("Max", &TArray<FKismetDrawTextInfo>::Max)
		.def("Num", &TArray<FKismetDrawTextInfo>::Num)
		.def("__call__", (FKismetDrawTextInfo& (TArray<FKismetDrawTextInfo>::*)(int))&TArray<FKismetDrawTextInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAppliedAttributeEffect> >(m, "TArray<FAppliedAttributeEffect>")

		.def_readwrite("Count", &TArray<FAppliedAttributeEffect>::Count)
		.def_readwrite("Max", &TArray<FAppliedAttributeEffect>::Max)
		.def("Num", &TArray<FAppliedAttributeEffect>::Num)
		.def("__call__", (FAppliedAttributeEffect& (TArray<FAppliedAttributeEffect>::*)(int))&TArray<FAppliedAttributeEffect>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPrimitiveComponent *> >(m, "TArray<UPrimitiveComponent *>")

		.def_readwrite("Count", &TArray<UPrimitiveComponent *>::Count)
		.def_readwrite("Max", &TArray<UPrimitiveComponent *>::Max)
		.def("Num", &TArray<UPrimitiveComponent *>::Num)
		.def("__call__", (UPrimitiveComponent*& (TArray<UPrimitiveComponent *>::*)(int))&TArray<UPrimitiveComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkeletalMesh *> >(m, "TArray<USkeletalMesh *>")

		.def_readwrite("Count", &TArray<USkeletalMesh *>::Count)
		.def_readwrite("Max", &TArray<USkeletalMesh *>::Max)
		.def("Num", &TArray<USkeletalMesh *>::Num)
		.def("__call__", (USkeletalMesh*& (TArray<USkeletalMesh *>::*)(int))&TArray<USkeletalMesh *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUniqueNetId> >(m, "TArray<FUniqueNetId>")

		.def_readwrite("Count", &TArray<FUniqueNetId>::Count)
		.def_readwrite("Max", &TArray<FUniqueNetId>::Max)
		.def("Num", &TArray<FUniqueNetId>::Num)
		.def("__call__", (FUniqueNetId& (TArray<FUniqueNetId>::*)(int))&TArray<FUniqueNetId>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAchievementDetails> >(m, "TArray<FAchievementDetails>")

		.def_readwrite("Count", &TArray<FAchievementDetails>::Count)
		.def_readwrite("Max", &TArray<FAchievementDetails>::Max)
		.def("Num", &TArray<FAchievementDetails>::Num)
		.def("__call__", (FAchievementDetails& (TArray<FAchievementDetails>::*)(int))&TArray<FAchievementDetails>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineFriendMessage> >(m, "TArray<FOnlineFriendMessage>")

		.def_readwrite("Count", &TArray<FOnlineFriendMessage>::Count)
		.def_readwrite("Max", &TArray<FOnlineFriendMessage>::Max)
		.def("Num", &TArray<FOnlineFriendMessage>::Num)
		.def("__call__", (FOnlineFriendMessage& (TArray<FOnlineFriendMessage>::*)(int))&TArray<FOnlineFriendMessage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLocalizedStringSetting> >(m, "TArray<FLocalizedStringSetting>")

		.def_readwrite("Count", &TArray<FLocalizedStringSetting>::Count)
		.def_readwrite("Max", &TArray<FLocalizedStringSetting>::Max)
		.def("Num", &TArray<FLocalizedStringSetting>::Num)
		.def("__call__", (FLocalizedStringSetting& (TArray<FLocalizedStringSetting>::*)(int))&TArray<FLocalizedStringSetting>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSettingsProperty> >(m, "TArray<FSettingsProperty>")

		.def_readwrite("Count", &TArray<FSettingsProperty>::Count)
		.def_readwrite("Max", &TArray<FSettingsProperty>::Max)
		.def("Num", &TArray<FSettingsProperty>::Num)
		.def("__call__", (FSettingsProperty& (TArray<FSettingsProperty>::*)(int))&TArray<FSettingsProperty>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineFriend> >(m, "TArray<FOnlineFriend>")

		.def_readwrite("Count", &TArray<FOnlineFriend>::Count)
		.def_readwrite("Max", &TArray<FOnlineFriend>::Max)
		.def("Num", &TArray<FOnlineFriend>::Num)
		.def("__call__", (FOnlineFriend& (TArray<FOnlineFriend>::*)(int))&TArray<FOnlineFriend>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineProfileSetting> >(m, "TArray<FOnlineProfileSetting>")

		.def_readwrite("Count", &TArray<FOnlineProfileSetting>::Count)
		.def_readwrite("Max", &TArray<FOnlineProfileSetting>::Max)
		.def("Num", &TArray<FOnlineProfileSetting>::Num)
		.def("__call__", (FOnlineProfileSetting& (TArray<FOnlineProfileSetting>::*)(int))&TArray<FOnlineProfileSetting>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSettingsPropertyPropertyMetaData> >(m, "TArray<FSettingsPropertyPropertyMetaData>")

		.def_readwrite("Count", &TArray<FSettingsPropertyPropertyMetaData>::Count)
		.def_readwrite("Max", &TArray<FSettingsPropertyPropertyMetaData>::Max)
		.def("Num", &TArray<FSettingsPropertyPropertyMetaData>::Num)
		.def("__call__", (FSettingsPropertyPropertyMetaData& (TArray<FSettingsPropertyPropertyMetaData>::*)(int))&TArray<FSettingsPropertyPropertyMetaData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FIdToStringMapping> >(m, "TArray<FIdToStringMapping>")

		.def_readwrite("Count", &TArray<FIdToStringMapping>::Count)
		.def_readwrite("Max", &TArray<FIdToStringMapping>::Max)
		.def("Num", &TArray<FIdToStringMapping>::Num)
		.def("__call__", (FIdToStringMapping& (TArray<FIdToStringMapping>::*)(int))&TArray<FIdToStringMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSettingsData> >(m, "TArray<FSettingsData>")

		.def_readwrite("Count", &TArray<FSettingsData>::Count)
		.def_readwrite("Max", &TArray<FSettingsData>::Max)
		.def("Num", &TArray<FSettingsData>::Num)
		.def("__call__", (FSettingsData& (TArray<FSettingsData>::*)(int))&TArray<FSettingsData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFriendsQuery> >(m, "TArray<FFriendsQuery>")

		.def_readwrite("Count", &TArray<FFriendsQuery>::Count)
		.def_readwrite("Max", &TArray<FFriendsQuery>::Max)
		.def("Num", &TArray<FFriendsQuery>::Num)
		.def("__call__", (FFriendsQuery& (TArray<FFriendsQuery>::*)(int))&TArray<FFriendsQuery>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLocalizedStringSettingMetaData> >(m, "TArray<FLocalizedStringSettingMetaData>")

		.def_readwrite("Count", &TArray<FLocalizedStringSettingMetaData>::Count)
		.def_readwrite("Max", &TArray<FLocalizedStringSettingMetaData>::Max)
		.def("Num", &TArray<FLocalizedStringSettingMetaData>::Num)
		.def("__call__", (FLocalizedStringSettingMetaData& (TArray<FLocalizedStringSettingMetaData>::*)(int))&TArray<FLocalizedStringSettingMetaData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStringIdToStringMapping> >(m, "TArray<FStringIdToStringMapping>")

		.def_readwrite("Count", &TArray<FStringIdToStringMapping>::Count)
		.def_readwrite("Max", &TArray<FStringIdToStringMapping>::Max)
		.def("Num", &TArray<FStringIdToStringMapping>::Num)
		.def("__call__", (FStringIdToStringMapping& (TArray<FStringIdToStringMapping>::*)(int))&TArray<FStringIdToStringMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineArbitrationRegistrant> >(m, "TArray<FOnlineArbitrationRegistrant>")

		.def_readwrite("Count", &TArray<FOnlineArbitrationRegistrant>::Count)
		.def_readwrite("Max", &TArray<FOnlineArbitrationRegistrant>::Max)
		.def("Num", &TArray<FOnlineArbitrationRegistrant>::Num)
		.def("__call__", (FOnlineArbitrationRegistrant& (TArray<FOnlineArbitrationRegistrant>::*)(int))&TArray<FOnlineArbitrationRegistrant>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineGameSearchResult> >(m, "TArray<FOnlineGameSearchResult>")

		.def_readwrite("Count", &TArray<FOnlineGameSearchResult>::Count)
		.def_readwrite("Max", &TArray<FOnlineGameSearchResult>::Max)
		.def("Num", &TArray<FOnlineGameSearchResult>::Num)
		.def("__call__", (FOnlineGameSearchResult& (TArray<FOnlineGameSearchResult>::*)(int))&TArray<FOnlineGameSearchResult>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDouble> >(m, "TArray<FDouble>")

		.def_readwrite("Count", &TArray<FDouble>::Count)
		.def_readwrite("Max", &TArray<FDouble>::Max)
		.def("Num", &TArray<FDouble>::Num)
		.def("__call__", (FDouble& (TArray<FDouble>::*)(int))&TArray<FDouble>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedObjectProperty> >(m, "TArray<FNamedObjectProperty>")

		.def_readwrite("Count", &TArray<FNamedObjectProperty>::Count)
		.def_readwrite("Max", &TArray<FNamedObjectProperty>::Max)
		.def("Num", &TArray<FNamedObjectProperty>::Num)
		.def("__call__", (FNamedObjectProperty& (TArray<FNamedObjectProperty>::*)(int))&TArray<FNamedObjectProperty>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineGameSearchORClause> >(m, "TArray<FOnlineGameSearchORClause>")

		.def_readwrite("Count", &TArray<FOnlineGameSearchORClause>::Count)
		.def_readwrite("Max", &TArray<FOnlineGameSearchORClause>::Max)
		.def("Num", &TArray<FOnlineGameSearchORClause>::Num)
		.def("__call__", (FOnlineGameSearchORClause& (TArray<FOnlineGameSearchORClause>::*)(int))&TArray<FOnlineGameSearchORClause>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineGameSearchParameter> >(m, "TArray<FOnlineGameSearchParameter>")

		.def_readwrite("Count", &TArray<FOnlineGameSearchParameter>::Count)
		.def_readwrite("Max", &TArray<FOnlineGameSearchParameter>::Max)
		.def("Num", &TArray<FOnlineGameSearchParameter>::Num)
		.def("__call__", (FOnlineGameSearchParameter& (TArray<FOnlineGameSearchParameter>::*)(int))&TArray<FOnlineGameSearchParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineGameSearchSortClause> >(m, "TArray<FOnlineGameSearchSortClause>")

		.def_readwrite("Count", &TArray<FOnlineGameSearchSortClause>::Count)
		.def_readwrite("Max", &TArray<FOnlineGameSearchSortClause>::Max)
		.def("Num", &TArray<FOnlineGameSearchSortClause>::Num)
		.def("__call__", (FOnlineGameSearchSortClause& (TArray<FOnlineGameSearchSortClause>::*)(int))&TArray<FOnlineGameSearchSortClause>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMarketplaceContent> >(m, "TArray<FMarketplaceContent>")

		.def_readwrite("Count", &TArray<FMarketplaceContent>::Count)
		.def_readwrite("Max", &TArray<FMarketplaceContent>::Max)
		.def("Num", &TArray<FMarketplaceContent>::Num)
		.def("__call__", (FMarketplaceContent& (TArray<FMarketplaceContent>::*)(int))&TArray<FMarketplaceContent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineContent> >(m, "TArray<FOnlineContent>")

		.def_readwrite("Count", &TArray<FOnlineContent>::Count)
		.def_readwrite("Max", &TArray<FOnlineContent>::Max)
		.def("Num", &TArray<FOnlineContent>::Num)
		.def("__call__", (FOnlineContent& (TArray<FOnlineContent>::*)(int))&TArray<FOnlineContent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAppIdLicenseInfo> >(m, "TArray<FAppIdLicenseInfo>")

		.def_readwrite("Count", &TArray<FAppIdLicenseInfo>::Count)
		.def_readwrite("Max", &TArray<FAppIdLicenseInfo>::Max)
		.def("Num", &TArray<FAppIdLicenseInfo>::Num)
		.def("__call__", (FAppIdLicenseInfo& (TArray<FAppIdLicenseInfo>::*)(int))&TArray<FAppIdLicenseInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineCrossTitleContent> >(m, "TArray<FOnlineCrossTitleContent>")

		.def_readwrite("Count", &TArray<FOnlineCrossTitleContent>::Count)
		.def_readwrite("Max", &TArray<FOnlineCrossTitleContent>::Max)
		.def("Num", &TArray<FOnlineCrossTitleContent>::Num)
		.def("__call__", (FOnlineCrossTitleContent& (TArray<FOnlineCrossTitleContent>::*)(int))&TArray<FOnlineCrossTitleContent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRecogVocabulary> >(m, "TArray<FRecogVocabulary>")

		.def_readwrite("Count", &TArray<FRecogVocabulary>::Count)
		.def_readwrite("Max", &TArray<FRecogVocabulary>::Max)
		.def("Num", &TArray<FRecogVocabulary>::Num)
		.def("__call__", (FRecogVocabulary& (TArray<FRecogVocabulary>::*)(int))&TArray<FRecogVocabulary>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRecognisableWord> >(m, "TArray<FRecognisableWord>")

		.def_readwrite("Count", &TArray<FRecognisableWord>::Count)
		.def_readwrite("Max", &TArray<FRecognisableWord>::Max)
		.def("Num", &TArray<FRecognisableWord>::Num)
		.def("__call__", (FRecognisableWord& (TArray<FRecognisableWord>::*)(int))&TArray<FRecognisableWord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpeechRecognizedWord> >(m, "TArray<FSpeechRecognizedWord>")

		.def_readwrite("Count", &TArray<FSpeechRecognizedWord>::Count)
		.def_readwrite("Max", &TArray<FSpeechRecognizedWord>::Max)
		.def("Num", &TArray<FSpeechRecognizedWord>::Num)
		.def("__call__", (FSpeechRecognizedWord& (TArray<FSpeechRecognizedWord>::*)(int))&TArray<FSpeechRecognizedWord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlinePlayerScore> >(m, "TArray<FOnlinePlayerScore>")

		.def_readwrite("Count", &TArray<FOnlinePlayerScore>::Count)
		.def_readwrite("Max", &TArray<FOnlinePlayerScore>::Max)
		.def("Num", &TArray<FOnlinePlayerScore>::Num)
		.def("__call__", (FOnlinePlayerScore& (TArray<FOnlinePlayerScore>::*)(int))&TArray<FOnlinePlayerScore>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineStatsRow> >(m, "TArray<FOnlineStatsRow>")

		.def_readwrite("Count", &TArray<FOnlineStatsRow>::Count)
		.def_readwrite("Max", &TArray<FOnlineStatsRow>::Max)
		.def("Num", &TArray<FOnlineStatsRow>::Num)
		.def("__call__", (FOnlineStatsRow& (TArray<FOnlineStatsRow>::*)(int))&TArray<FOnlineStatsRow>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineStatsColumn> >(m, "TArray<FOnlineStatsColumn>")

		.def_readwrite("Count", &TArray<FOnlineStatsColumn>::Count)
		.def_readwrite("Max", &TArray<FOnlineStatsColumn>::Max)
		.def("Num", &TArray<FOnlineStatsColumn>::Num)
		.def("__call__", (FOnlineStatsColumn& (TArray<FOnlineStatsColumn>::*)(int))&TArray<FOnlineStatsColumn>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColumnMetaData> >(m, "TArray<FColumnMetaData>")

		.def_readwrite("Count", &TArray<FColumnMetaData>::Count)
		.def_readwrite("Max", &TArray<FColumnMetaData>::Max)
		.def("Num", &TArray<FColumnMetaData>::Num)
		.def("__call__", (FColumnMetaData& (TArray<FColumnMetaData>::*)(int))&TArray<FColumnMetaData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlinePartyMember> >(m, "TArray<FOnlinePartyMember>")

		.def_readwrite("Count", &TArray<FOnlinePartyMember>::Count)
		.def_readwrite("Max", &TArray<FOnlinePartyMember>::Max)
		.def("Num", &TArray<FOnlinePartyMember>::Num)
		.def("__call__", (FOnlinePartyMember& (TArray<FOnlinePartyMember>::*)(int))&TArray<FOnlinePartyMember>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedInterface> >(m, "TArray<FNamedInterface>")

		.def_readwrite("Count", &TArray<FNamedInterface>::Count)
		.def_readwrite("Max", &TArray<FNamedInterface>::Max)
		.def("Num", &TArray<FNamedInterface>::Num)
		.def("__call__", (FNamedInterface& (TArray<FNamedInterface>::*)(int))&TArray<FNamedInterface>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedInterfaceDef> >(m, "TArray<FNamedInterfaceDef>")

		.def_readwrite("Count", &TArray<FNamedInterfaceDef>::Count)
		.def_readwrite("Max", &TArray<FNamedInterfaceDef>::Max)
		.def("Num", &TArray<FNamedInterfaceDef>::Num)
		.def("__call__", (FNamedInterfaceDef& (TArray<FNamedInterfaceDef>::*)(int))&TArray<FNamedInterfaceDef>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedSession> >(m, "TArray<FNamedSession>")

		.def_readwrite("Count", &TArray<FNamedSession>::Count)
		.def_readwrite("Max", &TArray<FNamedSession>::Max)
		.def("Num", &TArray<FNamedSession>::Num)
		.def("__call__", (FNamedSession& (TArray<FNamedSession>::*)(int))&TArray<FNamedSession>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineRegistrant> >(m, "TArray<FOnlineRegistrant>")

		.def_readwrite("Count", &TArray<FOnlineRegistrant>::Count)
		.def_readwrite("Max", &TArray<FOnlineRegistrant>::Max)
		.def("Num", &TArray<FOnlineRegistrant>::Num)
		.def("__call__", (FOnlineRegistrant& (TArray<FOnlineRegistrant>::*)(int))&TArray<FOnlineRegistrant>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FIniLocFileEntry> >(m, "TArray<FIniLocFileEntry>")

		.def_readwrite("Count", &TArray<FIniLocFileEntry>::Count)
		.def_readwrite("Max", &TArray<FIniLocFileEntry>::Max)
		.def("Num", &TArray<FIniLocFileEntry>::Num)
		.def("__call__", (FIniLocFileEntry& (TArray<FIniLocFileEntry>::*)(int))&TArray<FIniLocFileEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAuthSession> >(m, "TArray<FAuthSession>")

		.def_readwrite("Count", &TArray<FAuthSession>::Count)
		.def_readwrite("Max", &TArray<FAuthSession>::Max)
		.def("Num", &TArray<FAuthSession>::Num)
		.def("__call__", (FAuthSession& (TArray<FAuthSession>::*)(int))&TArray<FAuthSession>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLocalAuthSession> >(m, "TArray<FLocalAuthSession>")

		.def_readwrite("Count", &TArray<FLocalAuthSession>::Count)
		.def_readwrite("Max", &TArray<FLocalAuthSession>::Max)
		.def("Num", &TArray<FLocalAuthSession>::Num)
		.def("__call__", (FLocalAuthSession& (TArray<FLocalAuthSession>::*)(int))&TArray<FLocalAuthSession>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingClientAuth> >(m, "TArray<FPendingClientAuth>")

		.def_readwrite("Count", &TArray<FPendingClientAuth>::Count)
		.def_readwrite("Max", &TArray<FPendingClientAuth>::Max)
		.def("Num", &TArray<FPendingClientAuth>::Num)
		.def("__call__", (FPendingClientAuth& (TArray<FPendingClientAuth>::*)(int))&TArray<FPendingClientAuth>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FServerAuthRetry> >(m, "TArray<FServerAuthRetry>")

		.def_readwrite("Count", &TArray<FServerAuthRetry>::Count)
		.def_readwrite("Max", &TArray<FServerAuthRetry>::Max)
		.def("Num", &TArray<FServerAuthRetry>::Num)
		.def("__call__", (FServerAuthRetry& (TArray<FServerAuthRetry>::*)(int))&TArray<FServerAuthRetry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScriptDelegate> >(m, "TArray<FScriptDelegate>")

		.def_readwrite("Count", &TArray<FScriptDelegate>::Count)
		.def_readwrite("Max", &TArray<FScriptDelegate>::Max)
		.def("Num", &TArray<FScriptDelegate>::Num)
		.def("__call__", (FScriptDelegate& (TArray<FScriptDelegate>::*)(int))&TArray<FScriptDelegate>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverReplicationInfo> >(m, "TArray<FCoverReplicationInfo>")

		.def_readwrite("Count", &TArray<FCoverReplicationInfo>::Count)
		.def_readwrite("Max", &TArray<FCoverReplicationInfo>::Max)
		.def("Num", &TArray<FCoverReplicationInfo>::Num)
		.def("__call__", (FCoverReplicationInfo& (TArray<FCoverReplicationInfo>::*)(int))&TArray<FCoverReplicationInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverSlot> >(m, "TArray<FCoverSlot>")

		.def_readwrite("Count", &TArray<FCoverSlot>::Count)
		.def_readwrite("Max", &TArray<FCoverSlot>::Max)
		.def("Num", &TArray<FCoverSlot>::Num)
		.def("__call__", (FCoverSlot& (TArray<FCoverSlot>::*)(int))&TArray<FCoverSlot>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFireLink> >(m, "TArray<FFireLink>")

		.def_readwrite("Count", &TArray<FFireLink>::Count)
		.def_readwrite("Max", &TArray<FFireLink>::Max)
		.def("Num", &TArray<FFireLink>::Num)
		.def("__call__", (FFireLink& (TArray<FFireLink>::*)(int))&TArray<FFireLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSlotMoveRef> >(m, "TArray<FSlotMoveRef>")

		.def_readwrite("Count", &TArray<FSlotMoveRef>::Count)
		.def_readwrite("Max", &TArray<FSlotMoveRef>::Max)
		.def("Num", &TArray<FSlotMoveRef>::Num)
		.def("__call__", (FSlotMoveRef& (TArray<FSlotMoveRef>::*)(int))&TArray<FSlotMoveRef>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverInfo> >(m, "TArray<FCoverInfo>")

		.def_readwrite("Count", &TArray<FCoverInfo>::Count)
		.def_readwrite("Max", &TArray<FCoverInfo>::Max)
		.def("Num", &TArray<FCoverInfo>::Num)
		.def("__call__", (FCoverInfo& (TArray<FCoverInfo>::*)(int))&TArray<FCoverInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDynamicLinkInfo> >(m, "TArray<FDynamicLinkInfo>")

		.def_readwrite("Count", &TArray<FDynamicLinkInfo>::Count)
		.def_readwrite("Max", &TArray<FDynamicLinkInfo>::Max)
		.def("Num", &TArray<FDynamicLinkInfo>::Num)
		.def("__call__", (FDynamicLinkInfo& (TArray<FDynamicLinkInfo>::*)(int))&TArray<FDynamicLinkInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APawn *> >(m, "TArray<APawn *>")

		.def_readwrite("Count", &TArray<APawn *>::Count)
		.def_readwrite("Max", &TArray<APawn *>::Max)
		.def("Num", &TArray<APawn *>::Num)
		.def("__call__", (APawn*& (TArray<APawn *>::*)(int))&TArray<APawn *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPathSizeInfo> >(m, "TArray<FPathSizeInfo>")

		.def_readwrite("Count", &TArray<FPathSizeInfo>::Count)
		.def_readwrite("Max", &TArray<FPathSizeInfo>::Max)
		.def("Num", &TArray<FPathSizeInfo>::Num)
		.def("__call__", (FPathSizeInfo& (TArray<FPathSizeInfo>::*)(int))&TArray<FPathSizeInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColor> >(m, "TArray<FColor>")

		.def_readwrite("Count", &TArray<FColor>::Count)
		.def_readwrite("Max", &TArray<FColor>::Max)
		.def("Num", &TArray<FColor>::Num)
		.def("__call__", (FColor& (TArray<FColor>::*)(int))&TArray<FColor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FManualCoverTypeInfo> >(m, "TArray<FManualCoverTypeInfo>")

		.def_readwrite("Count", &TArray<FManualCoverTypeInfo>::Count)
		.def_readwrite("Max", &TArray<FManualCoverTypeInfo>::Max)
		.def("Num", &TArray<FManualCoverTypeInfo>::Num)
		.def("__call__", (FManualCoverTypeInfo& (TArray<FManualCoverTypeInfo>::*)(int))&TArray<FManualCoverTypeInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameClassShortName> >(m, "TArray<FGameClassShortName>")

		.def_readwrite("Count", &TArray<FGameClassShortName>::Count)
		.def_readwrite("Max", &TArray<FGameClassShortName>::Max)
		.def("Num", &TArray<FGameClassShortName>::Num)
		.def("__call__", (FGameClassShortName& (TArray<FGameClassShortName>::*)(int))&TArray<FGameClassShortName>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameTypePrefix> >(m, "TArray<FGameTypePrefix>")

		.def_readwrite("Count", &TArray<FGameTypePrefix>::Count)
		.def_readwrite("Max", &TArray<FGameTypePrefix>::Max)
		.def("Num", &TArray<FGameTypePrefix>::Num)
		.def("__call__", (FGameTypePrefix& (TArray<FGameTypePrefix>::*)(int))&TArray<FGameTypePrefix>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AVolume *> >(m, "TArray<AVolume *>")

		.def_readwrite("Count", &TArray<AVolume *>::Count)
		.def_readwrite("Max", &TArray<AVolume *>::Max)
		.def("Num", &TArray<AVolume *>::Num)
		.def("__call__", (AVolume*& (TArray<AVolume *>::*)(int))&TArray<AVolume *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNavMeshPathSize> >(m, "TArray<FNavMeshPathSize>")

		.def_readwrite("Count", &TArray<FNavMeshPathSize>::Count)
		.def_readwrite("Max", &TArray<FNavMeshPathSize>::Max)
		.def("Num", &TArray<FNavMeshPathSize>::Num)
		.def("__call__", (FNavMeshPathSize& (TArray<FNavMeshPathSize>::*)(int))&TArray<FNavMeshPathSize>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APylon *> >(m, "TArray<APylon *>")

		.def_readwrite("Count", &TArray<APylon *>::Count)
		.def_readwrite("Max", &TArray<APylon *>::Max)
		.def("Num", &TArray<APylon *>::Num)
		.def("__call__", (APylon*& (TArray<APylon *>::*)(int))&TArray<APylon *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXConnectedNavMesh> >(m, "TArray<FGBXConnectedNavMesh>")

		.def_readwrite("Count", &TArray<FGBXConnectedNavMesh>::Count)
		.def_readwrite("Max", &TArray<FGBXConnectedNavMesh>::Max)
		.def("Num", &TArray<FGBXConnectedNavMesh>::Num)
		.def("__call__", (FGBXConnectedNavMesh& (TArray<FGBXConnectedNavMesh>::*)(int))&TArray<FGBXConnectedNavMesh>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshVertex> >(m, "TArray<FGBXNavMeshVertex>")

		.def_readwrite("Count", &TArray<FGBXNavMeshVertex>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshVertex>::Max)
		.def("Num", &TArray<FGBXNavMeshVertex>::Num)
		.def("__call__", (FGBXNavMeshVertex& (TArray<FGBXNavMeshVertex>::*)(int))&TArray<FGBXNavMeshVertex>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshPoly> >(m, "TArray<FGBXNavMeshPoly>")

		.def_readwrite("Count", &TArray<FGBXNavMeshPoly>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshPoly>::Max)
		.def("Num", &TArray<FGBXNavMeshPoly>::Num)
		.def("__call__", (FGBXNavMeshPoly& (TArray<FGBXNavMeshPoly>::*)(int))&TArray<FGBXNavMeshPoly>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshPolyData> >(m, "TArray<FGBXNavMeshPolyData>")

		.def_readwrite("Count", &TArray<FGBXNavMeshPolyData>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshPolyData>::Max)
		.def("Num", &TArray<FGBXNavMeshPolyData>::Num)
		.def("__call__", (FGBXNavMeshPolyData& (TArray<FGBXNavMeshPolyData>::*)(int))&TArray<FGBXNavMeshPolyData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavmeshCrossLevelConnection> >(m, "TArray<FGBXNavmeshCrossLevelConnection>")

		.def_readwrite("Count", &TArray<FGBXNavmeshCrossLevelConnection>::Count)
		.def_readwrite("Max", &TArray<FGBXNavmeshCrossLevelConnection>::Max)
		.def("Num", &TArray<FGBXNavmeshCrossLevelConnection>::Num)
		.def("__call__", (FGBXNavmeshCrossLevelConnection& (TArray<FGBXNavmeshCrossLevelConnection>::*)(int))&TArray<FGBXNavmeshCrossLevelConnection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshSpecialMove> >(m, "TArray<FGBXNavMeshSpecialMove>")

		.def_readwrite("Count", &TArray<FGBXNavMeshSpecialMove>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshSpecialMove>::Max)
		.def("Num", &TArray<FGBXNavMeshSpecialMove>::Num)
		.def("__call__", (FGBXNavMeshSpecialMove& (TArray<FGBXNavMeshSpecialMove>::*)(int))&TArray<FGBXNavMeshSpecialMove>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshPathSize> >(m, "TArray<FGBXNavMeshPathSize>")

		.def_readwrite("Count", &TArray<FGBXNavMeshPathSize>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshPathSize>::Max)
		.def("Num", &TArray<FGBXNavMeshPathSize>::Num)
		.def("__call__", (FGBXNavMeshPathSize& (TArray<FGBXNavMeshPathSize>::*)(int))&TArray<FGBXNavMeshPathSize>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshObstacleData> >(m, "TArray<FGBXNavMeshObstacleData>")

		.def_readwrite("Count", &TArray<FGBXNavMeshObstacleData>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshObstacleData>::Max)
		.def("Num", &TArray<FGBXNavMeshObstacleData>::Num)
		.def("__call__", (FGBXNavMeshObstacleData& (TArray<FGBXNavMeshObstacleData>::*)(int))&TArray<FGBXNavMeshObstacleData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGBXCrossLevelReferenceContainer *> >(m, "TArray<UGBXCrossLevelReferenceContainer *>")

		.def_readwrite("Count", &TArray<UGBXCrossLevelReferenceContainer *>::Count)
		.def_readwrite("Max", &TArray<UGBXCrossLevelReferenceContainer *>::Max)
		.def("Num", &TArray<UGBXCrossLevelReferenceContainer *>::Num)
		.def("__call__", (UGBXCrossLevelReferenceContainer*& (TArray<UGBXCrossLevelReferenceContainer *>::*)(int))&TArray<UGBXCrossLevelReferenceContainer *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshLookupCell> >(m, "TArray<FGBXNavMeshLookupCell>")

		.def_readwrite("Count", &TArray<FGBXNavMeshLookupCell>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshLookupCell>::Max)
		.def("Num", &TArray<FGBXNavMeshLookupCell>::Num)
		.def("__call__", (FGBXNavMeshLookupCell& (TArray<FGBXNavMeshLookupCell>::*)(int))&TArray<FGBXNavMeshLookupCell>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNetViewer> >(m, "TArray<FNetViewer>")

		.def_readwrite("Count", &TArray<FNetViewer>::Count)
		.def_readwrite("Max", &TArray<FNetViewer>::Max)
		.def("Num", &TArray<FNetViewer>::Num)
		.def("__call__", (FNetViewer& (TArray<FNetViewer>::*)(int))&TArray<FNetViewer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleSystemComponent *> >(m, "TArray<UParticleSystemComponent *>")

		.def_readwrite("Count", &TArray<UParticleSystemComponent *>::Count)
		.def_readwrite("Max", &TArray<UParticleSystemComponent *>::Max)
		.def("Num", &TArray<UParticleSystemComponent *>::Num)
		.def("__call__", (UParticleSystemComponent*& (TArray<UParticleSystemComponent *>::*)(int))&TArray<UParticleSystemComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEmitterBaseInfo> >(m, "TArray<FEmitterBaseInfo>")

		.def_readwrite("Count", &TArray<FEmitterBaseInfo>::Count)
		.def_readwrite("Max", &TArray<FEmitterBaseInfo>::Max)
		.def("Num", &TArray<FEmitterBaseInfo>::Num)
		.def("__call__", (FEmitterBaseInfo& (TArray<FEmitterBaseInfo>::*)(int))&TArray<FEmitterBaseInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMaterialInstanceConstant *> >(m, "TArray<UMaterialInstanceConstant *>")

		.def_readwrite("Count", &TArray<UMaterialInstanceConstant *>::Count)
		.def_readwrite("Max", &TArray<UMaterialInstanceConstant *>::Max)
		.def("Num", &TArray<UMaterialInstanceConstant *>::Num)
		.def("__call__", (UMaterialInstanceConstant*& (TArray<UMaterialInstanceConstant *>::*)(int))&TArray<UMaterialInstanceConstant *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActiveDecalInfo> >(m, "TArray<FActiveDecalInfo>")

		.def_readwrite("Count", &TArray<FActiveDecalInfo>::Count)
		.def_readwrite("Max", &TArray<FActiveDecalInfo>::Max)
		.def("Num", &TArray<FActiveDecalInfo>::Num)
		.def("__call__", (FActiveDecalInfo& (TArray<FActiveDecalInfo>::*)(int))&TArray<FActiveDecalInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCompartmentRunList> >(m, "TArray<FCompartmentRunList>")

		.def_readwrite("Count", &TArray<FCompartmentRunList>::Count)
		.def_readwrite("Max", &TArray<FCompartmentRunList>::Max)
		.def("Num", &TArray<FCompartmentRunList>::Num)
		.def("__call__", (FCompartmentRunList& (TArray<FCompartmentRunList>::*)(int))&TArray<FCompartmentRunList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScreenMessageString> >(m, "TArray<FScreenMessageString>")

		.def_readwrite("Count", &TArray<FScreenMessageString>::Count)
		.def_readwrite("Max", &TArray<FScreenMessageString>::Max)
		.def("Num", &TArray<FScreenMessageString>::Num)
		.def("__call__", (FScreenMessageString& (TArray<FScreenMessageString>::*)(int))&TArray<FScreenMessageString>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNavigationArea> >(m, "TArray<FNavigationArea>")

		.def_readwrite("Count", &TArray<FNavigationArea>::Count)
		.def_readwrite("Max", &TArray<FNavigationArea>::Max)
		.def("Num", &TArray<FNavigationArea>::Num)
		.def("__call__", (FNavigationArea& (TArray<FNavigationArea>::*)(int))&TArray<FNavigationArea>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTextureMovie *> >(m, "TArray<UTextureMovie *>")

		.def_readwrite("Count", &TArray<UTextureMovie *>::Count)
		.def_readwrite("Max", &TArray<UTextureMovie *>::Max)
		.def("Num", &TArray<UTextureMovie *>::Num)
		.def("__call__", (UTextureMovie*& (TArray<UTextureMovie *>::*)(int))&TArray<UTextureMovie *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ANavigationPoint *> >(m, "TArray<ANavigationPoint *>")

		.def_readwrite("Count", &TArray<ANavigationPoint *>::Count)
		.def_readwrite("Max", &TArray<ANavigationPoint *>::Max)
		.def("Num", &TArray<ANavigationPoint *>::Num)
		.def("__call__", (ANavigationPoint*& (TArray<ANavigationPoint *>::*)(int))&TArray<ANavigationPoint *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEdgePointer> >(m, "TArray<FEdgePointer>")

		.def_readwrite("Count", &TArray<FEdgePointer>::Count)
		.def_readwrite("Max", &TArray<FEdgePointer>::Max)
		.def("Num", &TArray<FEdgePointer>::Num)
		.def("__call__", (FEdgePointer& (TArray<FEdgePointer>::*)(int))&TArray<FEdgePointer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeqOpInputLink> >(m, "TArray<FSeqOpInputLink>")

		.def_readwrite("Count", &TArray<FSeqOpInputLink>::Count)
		.def_readwrite("Max", &TArray<FSeqOpInputLink>::Max)
		.def("Num", &TArray<FSeqOpInputLink>::Num)
		.def("__call__", (FSeqOpInputLink& (TArray<FSeqOpInputLink>::*)(int))&TArray<FSeqOpInputLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeqOpOutputLink> >(m, "TArray<FSeqOpOutputLink>")

		.def_readwrite("Count", &TArray<FSeqOpOutputLink>::Count)
		.def_readwrite("Max", &TArray<FSeqOpOutputLink>::Max)
		.def("Num", &TArray<FSeqOpOutputLink>::Num)
		.def("__call__", (FSeqOpOutputLink& (TArray<FSeqOpOutputLink>::*)(int))&TArray<FSeqOpOutputLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeqOpOutputInputLink> >(m, "TArray<FSeqOpOutputInputLink>")

		.def_readwrite("Count", &TArray<FSeqOpOutputInputLink>::Count)
		.def_readwrite("Max", &TArray<FSeqOpOutputInputLink>::Max)
		.def("Num", &TArray<FSeqOpOutputInputLink>::Num)
		.def("__call__", (FSeqOpOutputInputLink& (TArray<FSeqOpOutputInputLink>::*)(int))&TArray<FSeqOpOutputInputLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeqVarLink> >(m, "TArray<FSeqVarLink>")

		.def_readwrite("Count", &TArray<FSeqVarLink>::Count)
		.def_readwrite("Max", &TArray<FSeqVarLink>::Max)
		.def("Num", &TArray<FSeqVarLink>::Num)
		.def("__call__", (FSeqVarLink& (TArray<FSeqVarLink>::*)(int))&TArray<FSeqVarLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USequenceVariable *> >(m, "TArray<USequenceVariable *>")

		.def_readwrite("Count", &TArray<USequenceVariable *>::Count)
		.def_readwrite("Max", &TArray<USequenceVariable *>::Max)
		.def("Num", &TArray<USequenceVariable *>::Num)
		.def("__call__", (USequenceVariable*& (TArray<USequenceVariable *>::*)(int))&TArray<USequenceVariable *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeqEventLink> >(m, "TArray<FSeqEventLink>")

		.def_readwrite("Count", &TArray<FSeqEventLink>::Count)
		.def_readwrite("Max", &TArray<FSeqEventLink>::Max)
		.def("Num", &TArray<FSeqEventLink>::Num)
		.def("__call__", (FSeqEventLink& (TArray<FSeqEventLink>::*)(int))&TArray<FSeqEventLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInterpData *> >(m, "TArray<UInterpData *>")

		.def_readwrite("Count", &TArray<UInterpData *>::Count)
		.def_readwrite("Max", &TArray<UInterpData *>::Max)
		.def("Num", &TArray<UInterpData *>::Num)
		.def("__call__", (UInterpData*& (TArray<UInterpData *>::*)(int))&TArray<UInterpData *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInterpGroup *> >(m, "TArray<UInterpGroup *>")

		.def_readwrite("Count", &TArray<UInterpGroup *>::Count)
		.def_readwrite("Max", &TArray<UInterpGroup *>::Max)
		.def("Num", &TArray<UInterpGroup *>::Num)
		.def("__call__", (UInterpGroup*& (TArray<UInterpGroup *>::*)(int))&TArray<UInterpGroup *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCurveEdTab> >(m, "TArray<FCurveEdTab>")

		.def_readwrite("Count", &TArray<FCurveEdTab>::Count)
		.def_readwrite("Max", &TArray<FCurveEdTab>::Max)
		.def("Num", &TArray<FCurveEdTab>::Num)
		.def("__call__", (FCurveEdTab& (TArray<FCurveEdTab>::*)(int))&TArray<FCurveEdTab>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCurveEdEntry> >(m, "TArray<FCurveEdEntry>")

		.def_readwrite("Count", &TArray<FCurveEdEntry>::Count)
		.def_readwrite("Max", &TArray<FCurveEdEntry>::Max)
		.def("Num", &TArray<FCurveEdEntry>::Num)
		.def("__call__", (FCurveEdEntry& (TArray<FCurveEdEntry>::*)(int))&TArray<FCurveEdEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimSetBakeAndPruneStatus> >(m, "TArray<FAnimSetBakeAndPruneStatus>")

		.def_readwrite("Count", &TArray<FAnimSetBakeAndPruneStatus>::Count)
		.def_readwrite("Max", &TArray<FAnimSetBakeAndPruneStatus>::Max)
		.def("Num", &TArray<FAnimSetBakeAndPruneStatus>::Num)
		.def("__call__", (FAnimSetBakeAndPruneStatus& (TArray<FAnimSetBakeAndPruneStatus>::*)(int))&TArray<FAnimSetBakeAndPruneStatus>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APortalTeleporter *> >(m, "TArray<APortalTeleporter *>")

		.def_readwrite("Count", &TArray<APortalTeleporter *>::Count)
		.def_readwrite("Max", &TArray<APortalTeleporter *>::Max)
		.def("Num", &TArray<APortalTeleporter *>::Num)
		.def("__call__", (APortalTeleporter*& (TArray<APortalTeleporter *>::*)(int))&TArray<APortalTeleporter *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMorphNodeConn> >(m, "TArray<FMorphNodeConn>")

		.def_readwrite("Count", &TArray<FMorphNodeConn>::Count)
		.def_readwrite("Max", &TArray<FMorphNodeConn>::Max)
		.def("Num", &TArray<FMorphNodeConn>::Num)
		.def("__call__", (FMorphNodeConn& (TArray<FMorphNodeConn>::*)(int))&TArray<FMorphNodeConn>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FViewParticleEmitterInstanceMotionBlurInfo> >(m, "TArray<FViewParticleEmitterInstanceMotionBlurInfo>")

		.def_readwrite("Count", &TArray<FViewParticleEmitterInstanceMotionBlurInfo>::Count)
		.def_readwrite("Max", &TArray<FViewParticleEmitterInstanceMotionBlurInfo>::Max)
		.def("Num", &TArray<FViewParticleEmitterInstanceMotionBlurInfo>::Num)
		.def("__call__", (FViewParticleEmitterInstanceMotionBlurInfo& (TArray<FViewParticleEmitterInstanceMotionBlurInfo>::*)(int))&TArray<FViewParticleEmitterInstanceMotionBlurInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleSysParam> >(m, "TArray<FParticleSysParam>")

		.def_readwrite("Count", &TArray<FParticleSysParam>::Count)
		.def_readwrite("Max", &TArray<FParticleSysParam>::Max)
		.def("Num", &TArray<FParticleSysParam>::Num)
		.def("__call__", (FParticleSysParam& (TArray<FParticleSysParam>::*)(int))&TArray<FParticleSysParam>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMaterialViewRelevance> >(m, "TArray<FMaterialViewRelevance>")

		.def_readwrite("Count", &TArray<FMaterialViewRelevance>::Count)
		.def_readwrite("Max", &TArray<FMaterialViewRelevance>::Max)
		.def("Num", &TArray<FMaterialViewRelevance>::Num)
		.def("__call__", (FMaterialViewRelevance& (TArray<FMaterialViewRelevance>::*)(int))&TArray<FMaterialViewRelevance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleSystemReplay *> >(m, "TArray<UParticleSystemReplay *>")

		.def_readwrite("Count", &TArray<UParticleSystemReplay *>::Count)
		.def_readwrite("Max", &TArray<UParticleSystemReplay *>::Max)
		.def("Num", &TArray<UParticleSystemReplay *>::Num)
		.def("__call__", (UParticleSystemReplay*& (TArray<UParticleSystemReplay *>::*)(int))&TArray<UParticleSystemReplay *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleSystemReplayFrame> >(m, "TArray<FParticleSystemReplayFrame>")

		.def_readwrite("Count", &TArray<FParticleSystemReplayFrame>::Count)
		.def_readwrite("Max", &TArray<FParticleSystemReplayFrame>::Max)
		.def("Num", &TArray<FParticleSystemReplayFrame>::Num)
		.def("__call__", (FParticleSystemReplayFrame& (TArray<FParticleSystemReplayFrame>::*)(int))&TArray<FParticleSystemReplayFrame>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEmitterReplayFrame> >(m, "TArray<FParticleEmitterReplayFrame>")

		.def_readwrite("Count", &TArray<FParticleEmitterReplayFrame>::Count)
		.def_readwrite("Max", &TArray<FParticleEmitterReplayFrame>::Max)
		.def("Num", &TArray<FParticleEmitterReplayFrame>::Num)
		.def("__call__", (FParticleEmitterReplayFrame& (TArray<FParticleEmitterReplayFrame>::*)(int))&TArray<FParticleEmitterReplayFrame>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEventSpawnData> >(m, "TArray<FParticleEventSpawnData>")

		.def_readwrite("Count", &TArray<FParticleEventSpawnData>::Count)
		.def_readwrite("Max", &TArray<FParticleEventSpawnData>::Max)
		.def("Num", &TArray<FParticleEventSpawnData>::Num)
		.def("__call__", (FParticleEventSpawnData& (TArray<FParticleEventSpawnData>::*)(int))&TArray<FParticleEventSpawnData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEventDeathData> >(m, "TArray<FParticleEventDeathData>")

		.def_readwrite("Count", &TArray<FParticleEventDeathData>::Count)
		.def_readwrite("Max", &TArray<FParticleEventDeathData>::Max)
		.def("Num", &TArray<FParticleEventDeathData>::Num)
		.def("__call__", (FParticleEventDeathData& (TArray<FParticleEventDeathData>::*)(int))&TArray<FParticleEventDeathData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEventCollideData> >(m, "TArray<FParticleEventCollideData>")

		.def_readwrite("Count", &TArray<FParticleEventCollideData>::Count)
		.def_readwrite("Max", &TArray<FParticleEventCollideData>::Max)
		.def("Num", &TArray<FParticleEventCollideData>::Num)
		.def("__call__", (FParticleEventCollideData& (TArray<FParticleEventCollideData>::*)(int))&TArray<FParticleEventCollideData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEventTraceData> >(m, "TArray<FParticleEventTraceData>")

		.def_readwrite("Count", &TArray<FParticleEventTraceData>::Count)
		.def_readwrite("Max", &TArray<FParticleEventTraceData>::Max)
		.def("Num", &TArray<FParticleEventTraceData>::Num)
		.def("__call__", (FParticleEventTraceData& (TArray<FParticleEventTraceData>::*)(int))&TArray<FParticleEventTraceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleEventKismetData> >(m, "TArray<FParticleEventKismetData>")

		.def_readwrite("Count", &TArray<FParticleEventKismetData>::Count)
		.def_readwrite("Max", &TArray<FParticleEventKismetData>::Max)
		.def("Num", &TArray<FParticleEventKismetData>::Num)
		.def("__call__", (FParticleEventKismetData& (TArray<FParticleEventKismetData>::*)(int))&TArray<FParticleEventKismetData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleSystemLOD> >(m, "TArray<FParticleSystemLOD>")

		.def_readwrite("Count", &TArray<FParticleSystemLOD>::Count)
		.def_readwrite("Max", &TArray<FParticleSystemLOD>::Max)
		.def("Num", &TArray<FParticleSystemLOD>::Num)
		.def("__call__", (FParticleSystemLOD& (TArray<FParticleSystemLOD>::*)(int))&TArray<FParticleSystemLOD>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDecalReceiver> >(m, "TArray<FDecalReceiver>")

		.def_readwrite("Count", &TArray<FDecalReceiver>::Count)
		.def_readwrite("Max", &TArray<FDecalReceiver>::Max)
		.def("Num", &TArray<FDecalReceiver>::Num)
		.def("__call__", (FDecalReceiver& (TArray<FDecalReceiver>::*)(int))&TArray<FDecalReceiver>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UITargetable *> >(m, "TArray<UITargetable *>")

		.def_readwrite("Count", &TArray<UITargetable *>::Count)
		.def_readwrite("Max", &TArray<UITargetable *>::Max)
		.def("Num", &TArray<UITargetable *>::Num)
		.def("__call__", (UITargetable*& (TArray<UITargetable *>::*)(int))&TArray<UITargetable *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAnimNodeSlot *> >(m, "TArray<UAnimNodeSlot *>")

		.def_readwrite("Count", &TArray<UAnimNodeSlot *>::Count)
		.def_readwrite("Max", &TArray<UAnimNodeSlot *>::Max)
		.def("Num", &TArray<UAnimNodeSlot *>::Num)
		.def("__call__", (UAnimNodeSlot*& (TArray<UAnimNodeSlot *>::*)(int))&TArray<UAnimNodeSlot *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSynchGroup> >(m, "TArray<FSynchGroup>")

		.def_readwrite("Count", &TArray<FSynchGroup>::Count)
		.def_readwrite("Max", &TArray<FSynchGroup>::Max)
		.def("Num", &TArray<FSynchGroup>::Num)
		.def("__call__", (FSynchGroup& (TArray<FSynchGroup>::*)(int))&TArray<FSynchGroup>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScalarParameterInterpStruct> >(m, "TArray<FScalarParameterInterpStruct>")

		.def_readwrite("Count", &TArray<FScalarParameterInterpStruct>::Count)
		.def_readwrite("Max", &TArray<FScalarParameterInterpStruct>::Max)
		.def("Num", &TArray<FScalarParameterInterpStruct>::Num)
		.def("__call__", (FScalarParameterInterpStruct& (TArray<FScalarParameterInterpStruct>::*)(int))&TArray<FScalarParameterInterpStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UResourcePoolDefinition *> >(m, "TArray<UResourcePoolDefinition *>")

		.def_readwrite("Count", &TArray<UResourcePoolDefinition *>::Count)
		.def_readwrite("Max", &TArray<UResourcePoolDefinition *>::Max)
		.def("Num", &TArray<UResourcePoolDefinition *>::Num)
		.def("__call__", (UResourcePoolDefinition*& (TArray<UResourcePoolDefinition *>::*)(int))&TArray<UResourcePoolDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ACoverLink *> >(m, "TArray<ACoverLink *>")

		.def_readwrite("Count", &TArray<ACoverLink *>::Count)
		.def_readwrite("Max", &TArray<ACoverLink *>::Max)
		.def("Num", &TArray<ACoverLink *>::Num)
		.def("__call__", (ACoverLink*& (TArray<ACoverLink *>::*)(int))&TArray<ACoverLink *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInterpGroupInst *> >(m, "TArray<UInterpGroupInst *>")

		.def_readwrite("Count", &TArray<UInterpGroupInst *>::Count)
		.def_readwrite("Max", &TArray<UInterpGroupInst *>::Max)
		.def("Num", &TArray<UInterpGroupInst *>::Num)
		.def("__call__", (UInterpGroupInst*& (TArray<UInterpGroupInst *>::*)(int))&TArray<UInterpGroupInst *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCameraCutInfo> >(m, "TArray<FCameraCutInfo>")

		.def_readwrite("Count", &TArray<FCameraCutInfo>::Count)
		.def_readwrite("Max", &TArray<FCameraCutInfo>::Max)
		.def("Num", &TArray<FCameraCutInfo>::Num)
		.def("__call__", (FCameraCutInfo& (TArray<FCameraCutInfo>::*)(int))&TArray<FCameraCutInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimSlotInfo> >(m, "TArray<FAnimSlotInfo>")

		.def_readwrite("Count", &TArray<FAnimSlotInfo>::Count)
		.def_readwrite("Max", &TArray<FAnimSlotInfo>::Max)
		.def("Num", &TArray<FAnimSlotInfo>::Num)
		.def("__call__", (FAnimSlotInfo& (TArray<FAnimSlotInfo>::*)(int))&TArray<FAnimSlotInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USeqAct_Latent *> >(m, "TArray<USeqAct_Latent *>")

		.def_readwrite("Count", &TArray<USeqAct_Latent *>::Count)
		.def_readwrite("Max", &TArray<USeqAct_Latent *>::Max)
		.def("Num", &TArray<USeqAct_Latent *>::Num)
		.def("__call__", (USeqAct_Latent*& (TArray<USeqAct_Latent *>::*)(int))&TArray<USeqAct_Latent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTrailSamplePoint> >(m, "TArray<FTrailSamplePoint>")

		.def_readwrite("Count", &TArray<FTrailSamplePoint>::Count)
		.def_readwrite("Max", &TArray<FTrailSamplePoint>::Max)
		.def("Num", &TArray<FTrailSamplePoint>::Num)
		.def("__call__", (FTrailSamplePoint& (TArray<FTrailSamplePoint>::*)(int))&TArray<FTrailSamplePoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTrailSample> >(m, "TArray<FTrailSample>")

		.def_readwrite("Count", &TArray<FTrailSample>::Count)
		.def_readwrite("Max", &TArray<FTrailSample>::Max)
		.def("Num", &TArray<FTrailSample>::Num)
		.def("__call__", (FTrailSample& (TArray<FTrailSample>::*)(int))&TArray<FTrailSample>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USVehicleWheel *> >(m, "TArray<USVehicleWheel *>")

		.def_readwrite("Count", &TArray<USVehicleWheel *>::Count)
		.def_readwrite("Max", &TArray<USVehicleWheel *>::Max)
		.def("Num", &TArray<USVehicleWheel *>::Num)
		.def("__call__", (USVehicleWheel*& (TArray<USVehicleWheel *>::*)(int))&TArray<USVehicleWheel *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULightComponent *> >(m, "TArray<ULightComponent *>")

		.def_readwrite("Count", &TArray<ULightComponent *>::Count)
		.def_readwrite("Max", &TArray<ULightComponent *>::Max)
		.def("Num", &TArray<ULightComponent *>::Num)
		.def("__call__", (ULightComponent*& (TArray<ULightComponent *>::*)(int))&TArray<ULightComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVisiblePortalInfo> >(m, "TArray<FVisiblePortalInfo>")

		.def_readwrite("Count", &TArray<FVisiblePortalInfo>::Count)
		.def_readwrite("Max", &TArray<FVisiblePortalInfo>::Max)
		.def("Num", &TArray<FVisiblePortalInfo>::Num)
		.def("__call__", (FVisiblePortalInfo& (TArray<FVisiblePortalInfo>::*)(int))&TArray<FVisiblePortalInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInstanceDataUnion> >(m, "TArray<FInstanceDataUnion>")

		.def_readwrite("Count", &TArray<FInstanceDataUnion>::Count)
		.def_readwrite("Max", &TArray<FInstanceDataUnion>::Max)
		.def("Num", &TArray<FInstanceDataUnion>::Num)
		.def("__call__", (FInstanceDataUnion& (TArray<FInstanceDataUnion>::*)(int))&TArray<FInstanceDataUnion>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UCameraModifier *> >(m, "TArray<UCameraModifier *>")

		.def_readwrite("Count", &TArray<UCameraModifier *>::Count)
		.def_readwrite("Max", &TArray<UCameraModifier *>::Max)
		.def("Num", &TArray<UCameraModifier *>::Num)
		.def("__call__", (UCameraModifier*& (TArray<UCameraModifier *>::*)(int))&TArray<UCameraModifier *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AEmitterCameraLensEffectBase *> >(m, "TArray<AEmitterCameraLensEffectBase *>")

		.def_readwrite("Count", &TArray<AEmitterCameraLensEffectBase *>::Count)
		.def_readwrite("Max", &TArray<AEmitterCameraLensEffectBase *>::Max)
		.def("Num", &TArray<AEmitterCameraLensEffectBase *>::Num)
		.def("__call__", (AEmitterCameraLensEffectBase*& (TArray<AEmitterCameraLensEffectBase *>::*)(int))&TArray<AEmitterCameraLensEffectBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCameraShakeInstance> >(m, "TArray<FCameraShakeInstance>")

		.def_readwrite("Count", &TArray<FCameraShakeInstance>::Count)
		.def_readwrite("Max", &TArray<FCameraShakeInstance>::Max)
		.def("Num", &TArray<FCameraShakeInstance>::Num)
		.def("__call__", (FCameraShakeInstance& (TArray<FCameraShakeInstance>::*)(int))&TArray<FCameraShakeInstance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UCameraAnimInst *> >(m, "TArray<UCameraAnimInst *>")

		.def_readwrite("Count", &TArray<UCameraAnimInst *>::Count)
		.def_readwrite("Max", &TArray<UCameraAnimInst *>::Max)
		.def("Num", &TArray<UCameraAnimInst *>::Num)
		.def("__call__", (UCameraAnimInst*& (TArray<UCameraAnimInst *>::*)(int))&TArray<UCameraAnimInst *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUIDataProviderField> >(m, "TArray<FUIDataProviderField>")

		.def_readwrite("Count", &TArray<FUIDataProviderField>::Count)
		.def_readwrite("Max", &TArray<FUIDataProviderField>::Max)
		.def("Num", &TArray<FUIDataProviderField>::Num)
		.def("__call__", (FUIDataProviderField& (TArray<FUIDataProviderField>::*)(int))&TArray<FUIDataProviderField>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIDataProvider *> >(m, "TArray<UUIDataProvider *>")

		.def_readwrite("Count", &TArray<UUIDataProvider *>::Count)
		.def_readwrite("Max", &TArray<UUIDataProvider *>::Max)
		.def("Num", &TArray<UUIDataProvider *>::Num)
		.def("__call__", (UUIDataProvider*& (TArray<UUIDataProvider *>::*)(int))&TArray<UUIDataProvider *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIDataStore *> >(m, "TArray<UUIDataStore *>")

		.def_readwrite("Count", &TArray<UUIDataStore *>::Count)
		.def_readwrite("Max", &TArray<UUIDataStore *>::Max)
		.def("Num", &TArray<UUIDataStore *>::Num)
		.def("__call__", (UUIDataStore*& (TArray<UUIDataStore *>::*)(int))&TArray<UUIDataStore *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerDataStoreGroup> >(m, "TArray<FPlayerDataStoreGroup>")

		.def_readwrite("Count", &TArray<FPlayerDataStoreGroup>::Count)
		.def_readwrite("Max", &TArray<FPlayerDataStoreGroup>::Max)
		.def("Num", &TArray<FPlayerDataStoreGroup>::Num)
		.def("__call__", (FPlayerDataStoreGroup& (TArray<FPlayerDataStoreGroup>::*)(int))&TArray<FPlayerDataStoreGroup>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUIAxisEmulationDefinition> >(m, "TArray<FUIAxisEmulationDefinition>")

		.def_readwrite("Count", &TArray<FUIAxisEmulationDefinition>::Count)
		.def_readwrite("Max", &TArray<FUIAxisEmulationDefinition>::Max)
		.def("Num", &TArray<FUIAxisEmulationDefinition>::Num)
		.def("__call__", (FUIAxisEmulationDefinition& (TArray<FUIAxisEmulationDefinition>::*)(int))&TArray<FUIAxisEmulationDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKeyBind> >(m, "TArray<FKeyBind>")

		.def_readwrite("Count", &TArray<FKeyBind>::Count)
		.def_readwrite("Max", &TArray<FKeyBind>::Max)
		.def("Num", &TArray<FKeyBind>::Num)
		.def("__call__", (FKeyBind& (TArray<FKeyBind>::*)(int))&TArray<FKeyBind>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWaveformSample> >(m, "TArray<FWaveformSample>")

		.def_readwrite("Count", &TArray<FWaveformSample>::Count)
		.def_readwrite("Max", &TArray<FWaveformSample>::Max)
		.def("Num", &TArray<FWaveformSample>::Num)
		.def("__call__", (FWaveformSample& (TArray<FWaveformSample>::*)(int))&TArray<FWaveformSample>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInteraction *> >(m, "TArray<UInteraction *>")

		.def_readwrite("Count", &TArray<UInteraction *>::Count)
		.def_readwrite("Max", &TArray<UInteraction *>::Max)
		.def("Num", &TArray<UInteraction *>::Num)
		.def("__call__", (UInteraction*& (TArray<UInteraction *>::*)(int))&TArray<UInteraction *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConnectedPeerInfo> >(m, "TArray<FConnectedPeerInfo>")

		.def_readwrite("Count", &TArray<FConnectedPeerInfo>::Count)
		.def_readwrite("Max", &TArray<FConnectedPeerInfo>::Max)
		.def("Num", &TArray<FConnectedPeerInfo>::Num)
		.def("__call__", (FConnectedPeerInfo& (TArray<FConnectedPeerInfo>::*)(int))&TArray<FConnectedPeerInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerStorageArrayProvider> >(m, "TArray<FPlayerStorageArrayProvider>")

		.def_readwrite("Count", &TArray<FPlayerStorageArrayProvider>::Count)
		.def_readwrite("Max", &TArray<FPlayerStorageArrayProvider>::Max)
		.def("Num", &TArray<FPlayerStorageArrayProvider>::Num)
		.def("__call__", (FPlayerStorageArrayProvider& (TArray<FPlayerStorageArrayProvider>::*)(int))&TArray<FPlayerStorageArrayProvider>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUIMenuInputMap> >(m, "TArray<FUIMenuInputMap>")

		.def_readwrite("Count", &TArray<FUIMenuInputMap>::Count)
		.def_readwrite("Max", &TArray<FUIMenuInputMap>::Max)
		.def("Num", &TArray<FUIMenuInputMap>::Num)
		.def("__call__", (FUIMenuInputMap& (TArray<FUIMenuInputMap>::*)(int))&TArray<FUIMenuInputMap>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputMatchRequest> >(m, "TArray<FInputMatchRequest>")

		.def_readwrite("Count", &TArray<FInputMatchRequest>::Count)
		.def_readwrite("Max", &TArray<FInputMatchRequest>::Max)
		.def("Num", &TArray<FInputMatchRequest>::Num)
		.def("__call__", (FInputMatchRequest& (TArray<FInputMatchRequest>::*)(int))&TArray<FInputMatchRequest>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputEntry> >(m, "TArray<FInputEntry>")

		.def_readwrite("Count", &TArray<FInputEntry>::Count)
		.def_readwrite("Max", &TArray<FInputEntry>::Max)
		.def("Num", &TArray<FInputEntry>::Num)
		.def("__call__", (FInputEntry& (TArray<FInputEntry>::*)(int))&TArray<FInputEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugTextInfo> >(m, "TArray<FDebugTextInfo>")

		.def_readwrite("Count", &TArray<FDebugTextInfo>::Count)
		.def_readwrite("Max", &TArray<FDebugTextInfo>::Max)
		.def("Num", &TArray<FDebugTextInfo>::Num)
		.def("__call__", (FDebugTextInfo& (TArray<FDebugTextInfo>::*)(int))&TArray<FDebugTextInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UChildConnection *> >(m, "TArray<UChildConnection *>")

		.def_readwrite("Count", &TArray<UChildConnection *>::Count)
		.def_readwrite("Max", &TArray<UChildConnection *>::Max)
		.def("Num", &TArray<UChildConnection *>::Num)
		.def("__call__", (UChildConnection*& (TArray<UChildConnection *>::*)(int))&TArray<UChildConnection *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAudioComponent *> >(m, "TArray<UAudioComponent *>")

		.def_readwrite("Count", &TArray<UAudioComponent *>::Count)
		.def_readwrite("Max", &TArray<UAudioComponent *>::Max)
		.def("Num", &TArray<UAudioComponent *>::Num)
		.def("__call__", (UAudioComponent*& (TArray<UAudioComponent *>::*)(int))&TArray<UAudioComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSoundClassAdjuster> >(m, "TArray<FSoundClassAdjuster>")

		.def_readwrite("Count", &TArray<FSoundClassAdjuster>::Count)
		.def_readwrite("Max", &TArray<FSoundClassAdjuster>::Max)
		.def("Num", &TArray<FSoundClassAdjuster>::Num)
		.def("__call__", (FSoundClassAdjuster& (TArray<FSoundClassAdjuster>::*)(int))&TArray<FSoundClassAdjuster>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ATrigger *> >(m, "TArray<ATrigger *>")

		.def_readwrite("Count", &TArray<ATrigger *>::Count)
		.def_readwrite("Max", &TArray<ATrigger *>::Max)
		.def("Num", &TArray<ATrigger *>::Num)
		.def("__call__", (ATrigger*& (TArray<ATrigger *>::*)(int))&TArray<ATrigger *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAutoCompleteCommand> >(m, "TArray<FAutoCompleteCommand>")

		.def_readwrite("Count", &TArray<FAutoCompleteCommand>::Count)
		.def_readwrite("Max", &TArray<FAutoCompleteCommand>::Max)
		.def("Num", &TArray<FAutoCompleteCommand>::Num)
		.def("__call__", (FAutoCompleteCommand& (TArray<FAutoCompleteCommand>::*)(int))&TArray<FAutoCompleteCommand>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSplitscreenData> >(m, "TArray<FSplitscreenData>")

		.def_readwrite("Count", &TArray<FSplitscreenData>::Count)
		.def_readwrite("Max", &TArray<FSplitscreenData>::Max)
		.def("Num", &TArray<FSplitscreenData>::Num)
		.def("__call__", (FSplitscreenData& (TArray<FSplitscreenData>::*)(int))&TArray<FSplitscreenData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPerPlayerSplitscreenData> >(m, "TArray<FPerPlayerSplitscreenData>")

		.def_readwrite("Count", &TArray<FPerPlayerSplitscreenData>::Count)
		.def_readwrite("Max", &TArray<FPerPlayerSplitscreenData>::Max)
		.def("Num", &TArray<FPerPlayerSplitscreenData>::Num)
		.def("__call__", (FPerPlayerSplitscreenData& (TArray<FPerPlayerSplitscreenData>::*)(int))&TArray<FPerPlayerSplitscreenData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugDisplayProperty> >(m, "TArray<FDebugDisplayProperty>")

		.def_readwrite("Count", &TArray<FDebugDisplayProperty>::Count)
		.def_readwrite("Max", &TArray<FDebugDisplayProperty>::Max)
		.def("Num", &TArray<FDebugDisplayProperty>::Num)
		.def("__call__", (FDebugDisplayProperty& (TArray<FDebugDisplayProperty>::*)(int))&TArray<FDebugDisplayProperty>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPostProcessChain *> >(m, "TArray<UPostProcessChain *>")

		.def_readwrite("Count", &TArray<UPostProcessChain *>::Count)
		.def_readwrite("Max", &TArray<UPostProcessChain *>::Max)
		.def("Num", &TArray<UPostProcessChain *>::Num)
		.def("__call__", (UPostProcessChain*& (TArray<UPostProcessChain *>::*)(int))&TArray<UPostProcessChain *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPostProcessSettingsOverride> >(m, "TArray<FPostProcessSettingsOverride>")

		.def_readwrite("Count", &TArray<FPostProcessSettingsOverride>::Count)
		.def_readwrite("Max", &TArray<FPostProcessSettingsOverride>::Max)
		.def("Num", &TArray<FPostProcessSettingsOverride>::Num)
		.def("__call__", (FPostProcessSettingsOverride& (TArray<FPostProcessSettingsOverride>::*)(int))&TArray<FPostProcessSettingsOverride>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWorldLightingOverride> >(m, "TArray<FWorldLightingOverride>")

		.def_readwrite("Count", &TArray<FWorldLightingOverride>::Count)
		.def_readwrite("Max", &TArray<FWorldLightingOverride>::Max)
		.def("Num", &TArray<FWorldLightingOverride>::Num)
		.def("__call__", (FWorldLightingOverride& (TArray<FWorldLightingOverride>::*)(int))&TArray<FWorldLightingOverride>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInventoryGameStageGradeWeightData> >(m, "TArray<FInventoryGameStageGradeWeightData>")

		.def_readwrite("Count", &TArray<FInventoryGameStageGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FInventoryGameStageGradeWeightData>::Max)
		.def("Num", &TArray<FInventoryGameStageGradeWeightData>::Num)
		.def("__call__", (FInventoryGameStageGradeWeightData& (TArray<FInventoryGameStageGradeWeightData>::*)(int))&TArray<FInventoryGameStageGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInventoryManufacturerBalanceData> >(m, "TArray<FInventoryManufacturerBalanceData>")

		.def_readwrite("Count", &TArray<FInventoryManufacturerBalanceData>::Count)
		.def_readwrite("Max", &TArray<FInventoryManufacturerBalanceData>::Max)
		.def("Num", &TArray<FInventoryManufacturerBalanceData>::Num)
		.def("__call__", (FInventoryManufacturerBalanceData& (TArray<FInventoryManufacturerBalanceData>::*)(int))&TArray<FInventoryManufacturerBalanceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorKeyFrameEventData> >(m, "TArray<FBehaviorKeyFrameEventData>")

		.def_readwrite("Count", &TArray<FBehaviorKeyFrameEventData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorKeyFrameEventData>::Max)
		.def("Num", &TArray<FBehaviorKeyFrameEventData>::Num)
		.def("__call__", (FBehaviorKeyFrameEventData& (TArray<FBehaviorKeyFrameEventData>::*)(int))&TArray<FBehaviorKeyFrameEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGFxWidgetBinding> >(m, "TArray<FGFxWidgetBinding>")

		.def_readwrite("Count", &TArray<FGFxWidgetBinding>::Count)
		.def_readwrite("Max", &TArray<FGFxWidgetBinding>::Max)
		.def("Num", &TArray<FGFxWidgetBinding>::Num)
		.def("__call__", (FGFxWidgetBinding& (TArray<FGFxWidgetBinding>::*)(int))&TArray<FGFxWidgetBinding>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGFxObject *> >(m, "TArray<UGFxObject *>")

		.def_readwrite("Count", &TArray<UGFxObject *>::Count)
		.def_readwrite("Max", &TArray<UGFxObject *>::Max)
		.def("Num", &TArray<UGFxObject *>::Num)
		.def("__call__", (UGFxObject*& (TArray<UGFxObject *>::*)(int))&TArray<UGFxObject *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FASValue> >(m, "TArray<FASValue>")

		.def_readwrite("Count", &TArray<FASValue>::Count)
		.def_readwrite("Max", &TArray<FASValue>::Max)
		.def("Num", &TArray<FASValue>::Num)
		.def("__call__", (FASValue& (TArray<FASValue>::*)(int))&TArray<FASValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCreditsLine> >(m, "TArray<FCreditsLine>")

		.def_readwrite("Count", &TArray<FCreditsLine>::Count)
		.def_readwrite("Max", &TArray<FCreditsLine>::Max)
		.def("Num", &TArray<FCreditsLine>::Num)
		.def("__call__", (FCreditsLine& (TArray<FCreditsLine>::*)(int))&TArray<FCreditsLine>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAvailableTrackedSkill> >(m, "TArray<FAvailableTrackedSkill>")

		.def_readwrite("Count", &TArray<FAvailableTrackedSkill>::Count)
		.def_readwrite("Max", &TArray<FAvailableTrackedSkill>::Max)
		.def("Num", &TArray<FAvailableTrackedSkill>::Num)
		.def("__call__", (FAvailableTrackedSkill& (TArray<FAvailableTrackedSkill>::*)(int))&TArray<FAvailableTrackedSkill>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillEffectData> >(m, "TArray<FSkillEffectData>")

		.def_readwrite("Count", &TArray<FSkillEffectData>::Count)
		.def_readwrite("Max", &TArray<FSkillEffectData>::Max)
		.def("Num", &TArray<FSkillEffectData>::Num)
		.def("__call__", (FSkillEffectData& (TArray<FSkillEffectData>::*)(int))&TArray<FSkillEffectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBonusAttributeModifierUpgrade> >(m, "TArray<FBonusAttributeModifierUpgrade>")

		.def_readwrite("Count", &TArray<FBonusAttributeModifierUpgrade>::Count)
		.def_readwrite("Max", &TArray<FBonusAttributeModifierUpgrade>::Max)
		.def("Num", &TArray<FBonusAttributeModifierUpgrade>::Num)
		.def("__call__", (FBonusAttributeModifierUpgrade& (TArray<FBonusAttributeModifierUpgrade>::*)(int))&TArray<FBonusAttributeModifierUpgrade>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillConstraintData> >(m, "TArray<FSkillConstraintData>")

		.def_readwrite("Count", &TArray<FSkillConstraintData>::Count)
		.def_readwrite("Max", &TArray<FSkillConstraintData>::Max)
		.def("Num", &TArray<FSkillConstraintData>::Num)
		.def("__call__", (FSkillConstraintData& (TArray<FSkillConstraintData>::*)(int))&TArray<FSkillConstraintData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkillExpressionEvaluatorDefinition *> >(m, "TArray<USkillExpressionEvaluatorDefinition *>")

		.def_readwrite("Count", &TArray<USkillExpressionEvaluatorDefinition *>::Count)
		.def_readwrite("Max", &TArray<USkillExpressionEvaluatorDefinition *>::Max)
		.def("Num", &TArray<USkillExpressionEvaluatorDefinition *>::Num)
		.def("__call__", (USkillExpressionEvaluatorDefinition*& (TArray<USkillExpressionEvaluatorDefinition *>::*)(int))&TArray<USkillExpressionEvaluatorDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAttributePresentationDefinition *> >(m, "TArray<UAttributePresentationDefinition *>")

		.def_readwrite("Count", &TArray<UAttributePresentationDefinition *>::Count)
		.def_readwrite("Max", &TArray<UAttributePresentationDefinition *>::Max)
		.def("Num", &TArray<UAttributePresentationDefinition *>::Num)
		.def("__call__", (UAttributePresentationDefinition*& (TArray<UAttributePresentationDefinition *>::*)(int))&TArray<UAttributePresentationDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpecialMoveData> >(m, "TArray<FSpecialMoveData>")

		.def_readwrite("Count", &TArray<FSpecialMoveData>::Count)
		.def_readwrite("Max", &TArray<FSpecialMoveData>::Max)
		.def("Num", &TArray<FSpecialMoveData>::Num)
		.def("__call__", (FSpecialMoveData& (TArray<FSpecialMoveData>::*)(int))&TArray<FSpecialMoveData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSlotAnimParameters> >(m, "TArray<FSlotAnimParameters>")

		.def_readwrite("Count", &TArray<FSlotAnimParameters>::Count)
		.def_readwrite("Max", &TArray<FSlotAnimParameters>::Max)
		.def("Num", &TArray<FSlotAnimParameters>::Num)
		.def("__call__", (FSlotAnimParameters& (TArray<FSlotAnimParameters>::*)(int))&TArray<FSlotAnimParameters>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFeatherBoneBlendData> >(m, "TArray<FFeatherBoneBlendData>")

		.def_readwrite("Count", &TArray<FFeatherBoneBlendData>::Count)
		.def_readwrite("Max", &TArray<FFeatherBoneBlendData>::Max)
		.def("Num", &TArray<FFeatherBoneBlendData>::Num)
		.def("__call__", (FFeatherBoneBlendData& (TArray<FFeatherBoneBlendData>::*)(int))&TArray<FFeatherBoneBlendData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSMBehavior> >(m, "TArray<FSMBehavior>")

		.def_readwrite("Count", &TArray<FSMBehavior>::Count)
		.def_readwrite("Max", &TArray<FSMBehavior>::Max)
		.def("Num", &TArray<FSMBehavior>::Num)
		.def("__call__", (FSMBehavior& (TArray<FSMBehavior>::*)(int))&TArray<FSMBehavior>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSMNotify> >(m, "TArray<FSMNotify>")

		.def_readwrite("Count", &TArray<FSMNotify>::Count)
		.def_readwrite("Max", &TArray<FSMNotify>::Max)
		.def("Num", &TArray<FSMNotify>::Num)
		.def("__call__", (FSMNotify& (TArray<FSMNotify>::*)(int))&TArray<FSMNotify>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTimedAnimBehaviorEvent> >(m, "TArray<FTimedAnimBehaviorEvent>")

		.def_readwrite("Count", &TArray<FTimedAnimBehaviorEvent>::Count)
		.def_readwrite("Max", &TArray<FTimedAnimBehaviorEvent>::Max)
		.def("Num", &TArray<FTimedAnimBehaviorEvent>::Num)
		.def("__call__", (FTimedAnimBehaviorEvent& (TArray<FTimedAnimBehaviorEvent>::*)(int))&TArray<FTimedAnimBehaviorEvent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorSequenceData> >(m, "TArray<FBehaviorSequenceData>")

		.def_readwrite("Count", &TArray<FBehaviorSequenceData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorSequenceData>::Max)
		.def("Num", &TArray<FBehaviorSequenceData>::Num)
		.def("__call__", (FBehaviorSequenceData& (TArray<FBehaviorSequenceData>::*)(int))&TArray<FBehaviorSequenceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorEventData> >(m, "TArray<FBehaviorEventData>")

		.def_readwrite("Count", &TArray<FBehaviorEventData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorEventData>::Max)
		.def("Num", &TArray<FBehaviorEventData>::Num)
		.def("__call__", (FBehaviorEventData& (TArray<FBehaviorEventData>::*)(int))&TArray<FBehaviorEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorVariableLinkData> >(m, "TArray<FBehaviorVariableLinkData>")

		.def_readwrite("Count", &TArray<FBehaviorVariableLinkData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorVariableLinkData>::Max)
		.def("Num", &TArray<FBehaviorVariableLinkData>::Num)
		.def("__call__", (FBehaviorVariableLinkData& (TArray<FBehaviorVariableLinkData>::*)(int))&TArray<FBehaviorVariableLinkData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorOutputLinkData> >(m, "TArray<FBehaviorOutputLinkData>")

		.def_readwrite("Count", &TArray<FBehaviorOutputLinkData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorOutputLinkData>::Max)
		.def("Num", &TArray<FBehaviorOutputLinkData>::Num)
		.def("__call__", (FBehaviorOutputLinkData& (TArray<FBehaviorOutputLinkData>::*)(int))&TArray<FBehaviorOutputLinkData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorActionLinkData> >(m, "TArray<FBehaviorActionLinkData>")

		.def_readwrite("Count", &TArray<FBehaviorActionLinkData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorActionLinkData>::Max)
		.def("Num", &TArray<FBehaviorActionLinkData>::Num)
		.def("__call__", (FBehaviorActionLinkData& (TArray<FBehaviorActionLinkData>::*)(int))&TArray<FBehaviorActionLinkData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorEventData2> >(m, "TArray<FBehaviorEventData2>")

		.def_readwrite("Count", &TArray<FBehaviorEventData2>::Count)
		.def_readwrite("Max", &TArray<FBehaviorEventData2>::Max)
		.def("Num", &TArray<FBehaviorEventData2>::Num)
		.def("__call__", (FBehaviorEventData2& (TArray<FBehaviorEventData2>::*)(int))&TArray<FBehaviorEventData2>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorSequenceActionData> >(m, "TArray<FBehaviorSequenceActionData>")

		.def_readwrite("Count", &TArray<FBehaviorSequenceActionData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorSequenceActionData>::Max)
		.def("Num", &TArray<FBehaviorSequenceActionData>::Num)
		.def("__call__", (FBehaviorSequenceActionData& (TArray<FBehaviorSequenceActionData>::*)(int))&TArray<FBehaviorSequenceActionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorSequenceActionData2> >(m, "TArray<FBehaviorSequenceActionData2>")

		.def_readwrite("Count", &TArray<FBehaviorSequenceActionData2>::Count)
		.def_readwrite("Max", &TArray<FBehaviorSequenceActionData2>::Max)
		.def("Num", &TArray<FBehaviorSequenceActionData2>::Num)
		.def("__call__", (FBehaviorSequenceActionData2& (TArray<FBehaviorSequenceActionData2>::*)(int))&TArray<FBehaviorSequenceActionData2>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorVariableData> >(m, "TArray<FBehaviorVariableData>")

		.def_readwrite("Count", &TArray<FBehaviorVariableData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorVariableData>::Max)
		.def("Num", &TArray<FBehaviorVariableData>::Num)
		.def("__call__", (FBehaviorVariableData& (TArray<FBehaviorVariableData>::*)(int))&TArray<FBehaviorVariableData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorOutputLinkData2> >(m, "TArray<FBehaviorOutputLinkData2>")

		.def_readwrite("Count", &TArray<FBehaviorOutputLinkData2>::Count)
		.def_readwrite("Max", &TArray<FBehaviorOutputLinkData2>::Max)
		.def("Num", &TArray<FBehaviorOutputLinkData2>::Num)
		.def("__call__", (FBehaviorOutputLinkData2& (TArray<FBehaviorOutputLinkData2>::*)(int))&TArray<FBehaviorOutputLinkData2>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorVariableLinkData2> >(m, "TArray<FBehaviorVariableLinkData2>")

		.def_readwrite("Count", &TArray<FBehaviorVariableLinkData2>::Count)
		.def_readwrite("Max", &TArray<FBehaviorVariableLinkData2>::Max)
		.def("Num", &TArray<FBehaviorVariableLinkData2>::Num)
		.def("__call__", (FBehaviorVariableLinkData2& (TArray<FBehaviorVariableLinkData2>::*)(int))&TArray<FBehaviorVariableLinkData2>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverDebugPriority> >(m, "TArray<FCoverDebugPriority>")

		.def_readwrite("Count", &TArray<FCoverDebugPriority>::Count)
		.def_readwrite("Max", &TArray<FCoverDebugPriority>::Max)
		.def("Num", &TArray<FCoverDebugPriority>::Num)
		.def("__call__", (FCoverDebugPriority& (TArray<FCoverDebugPriority>::*)(int))&TArray<FCoverDebugPriority>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverDebugScoringInfo> >(m, "TArray<FCoverDebugScoringInfo>")

		.def_readwrite("Count", &TArray<FCoverDebugScoringInfo>::Count)
		.def_readwrite("Max", &TArray<FCoverDebugScoringInfo>::Max)
		.def("Num", &TArray<FCoverDebugScoringInfo>::Num)
		.def("__call__", (FCoverDebugScoringInfo& (TArray<FCoverDebugScoringInfo>::*)(int))&TArray<FCoverDebugScoringInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKnowledgeRecordStruct> >(m, "TArray<FKnowledgeRecordStruct>")

		.def_readwrite("Count", &TArray<FKnowledgeRecordStruct>::Count)
		.def_readwrite("Max", &TArray<FKnowledgeRecordStruct>::Max)
		.def("Num", &TArray<FKnowledgeRecordStruct>::Num)
		.def("__call__", (FKnowledgeRecordStruct& (TArray<FKnowledgeRecordStruct>::*)(int))&TArray<FKnowledgeRecordStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRuleSetRecord> >(m, "TArray<FRuleSetRecord>")

		.def_readwrite("Count", &TArray<FRuleSetRecord>::Count)
		.def_readwrite("Max", &TArray<FRuleSetRecord>::Max)
		.def("Num", &TArray<FRuleSetRecord>::Num)
		.def("__call__", (FRuleSetRecord& (TArray<FRuleSetRecord>::*)(int))&TArray<FRuleSetRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URule *> >(m, "TArray<URule *>")

		.def_readwrite("Count", &TArray<URule *>::Count)
		.def_readwrite("Max", &TArray<URule *>::Max)
		.def("Num", &TArray<URule *>::Num)
		.def("__call__", (URule*& (TArray<URule *>::*)(int))&TArray<URule *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFlagDefinitionInitialization> >(m, "TArray<FFlagDefinitionInitialization>")

		.def_readwrite("Count", &TArray<FFlagDefinitionInitialization>::Count)
		.def_readwrite("Max", &TArray<FFlagDefinitionInitialization>::Max)
		.def("Num", &TArray<FFlagDefinitionInitialization>::Num)
		.def("__call__", (FFlagDefinitionInitialization& (TArray<FFlagDefinitionInitialization>::*)(int))&TArray<FFlagDefinitionInitialization>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAITreeData> >(m, "TArray<FAITreeData>")

		.def_readwrite("Count", &TArray<FAITreeData>::Count)
		.def_readwrite("Max", &TArray<FAITreeData>::Max)
		.def("Num", &TArray<FAITreeData>::Num)
		.def("__call__", (FAITreeData& (TArray<FAITreeData>::*)(int))&TArray<FAITreeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIResourceRestriction> >(m, "TArray<FAIResourceRestriction>")

		.def_readwrite("Count", &TArray<FAIResourceRestriction>::Count)
		.def_readwrite("Max", &TArray<FAIResourceRestriction>::Max)
		.def("Num", &TArray<FAIResourceRestriction>::Num)
		.def("__call__", (FAIResourceRestriction& (TArray<FAIResourceRestriction>::*)(int))&TArray<FAIResourceRestriction>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UExpressionEvaluator *> >(m, "TArray<UExpressionEvaluator *>")

		.def_readwrite("Count", &TArray<UExpressionEvaluator *>::Count)
		.def_readwrite("Max", &TArray<UExpressionEvaluator *>::Max)
		.def("Num", &TArray<UExpressionEvaluator *>::Num)
		.def("__call__", (UExpressionEvaluator*& (TArray<UExpressionEvaluator *>::*)(int))&TArray<UExpressionEvaluator *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTI_Calc *> >(m, "TArray<UTI_Calc *>")

		.def_readwrite("Count", &TArray<UTI_Calc *>::Count)
		.def_readwrite("Max", &TArray<UTI_Calc *>::Max)
		.def("Num", &TArray<UTI_Calc *>::Num)
		.def("__call__", (UTI_Calc*& (TArray<UTI_Calc *>::*)(int))&TArray<UTI_Calc *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTI_Prioritize *> >(m, "TArray<UTI_Prioritize *>")

		.def_readwrite("Count", &TArray<UTI_Prioritize *>::Count)
		.def_readwrite("Max", &TArray<UTI_Prioritize *>::Max)
		.def("Num", &TArray<UTI_Prioritize *>::Num)
		.def("__call__", (UTI_Prioritize*& (TArray<UTI_Prioritize *>::*)(int))&TArray<UTI_Prioritize *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIResourceData> >(m, "TArray<FAIResourceData>")

		.def_readwrite("Count", &TArray<FAIResourceData>::Count)
		.def_readwrite("Max", &TArray<FAIResourceData>::Max)
		.def("Num", &TArray<FAIResourceData>::Num)
		.def("__call__", (FAIResourceData& (TArray<FAIResourceData>::*)(int))&TArray<FAIResourceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMindTargetInfo *> >(m, "TArray<UMindTargetInfo *>")

		.def_readwrite("Count", &TArray<UMindTargetInfo *>::Count)
		.def_readwrite("Max", &TArray<UMindTargetInfo *>::Max)
		.def("Num", &TArray<UMindTargetInfo *>::Num)
		.def("__call__", (UMindTargetInfo*& (TArray<UMindTargetInfo *>::*)(int))&TArray<UMindTargetInfo *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHitTargetRecord> >(m, "TArray<FHitTargetRecord>")

		.def_readwrite("Count", &TArray<FHitTargetRecord>::Count)
		.def_readwrite("Max", &TArray<FHitTargetRecord>::Max)
		.def("Num", &TArray<FHitTargetRecord>::Num)
		.def("__call__", (FHitTargetRecord& (TArray<FHitTargetRecord>::*)(int))&TArray<FHitTargetRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPriorityDebugStruct> >(m, "TArray<FPriorityDebugStruct>")

		.def_readwrite("Count", &TArray<FPriorityDebugStruct>::Count)
		.def_readwrite("Max", &TArray<FPriorityDebugStruct>::Max)
		.def("Num", &TArray<FPriorityDebugStruct>::Num)
		.def("__call__", (FPriorityDebugStruct& (TArray<FPriorityDebugStruct>::*)(int))&TArray<FPriorityDebugStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIHoldData> >(m, "TArray<FAIHoldData>")

		.def_readwrite("Count", &TArray<FAIHoldData>::Count)
		.def_readwrite("Max", &TArray<FAIHoldData>::Max)
		.def("Num", &TArray<FAIHoldData>::Num)
		.def("__call__", (FAIHoldData& (TArray<FAIHoldData>::*)(int))&TArray<FAIHoldData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFlagEvalORConnector> >(m, "TArray<FFlagEvalORConnector>")

		.def_readwrite("Count", &TArray<FFlagEvalORConnector>::Count)
		.def_readwrite("Max", &TArray<FFlagEvalORConnector>::Max)
		.def("Num", &TArray<FFlagEvalORConnector>::Num)
		.def("__call__", (FFlagEvalORConnector& (TArray<FFlagEvalORConnector>::*)(int))&TArray<FFlagEvalORConnector>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFlagEvalConditional> >(m, "TArray<FFlagEvalConditional>")

		.def_readwrite("Count", &TArray<FFlagEvalConditional>::Count)
		.def_readwrite("Max", &TArray<FFlagEvalConditional>::Max)
		.def("Num", &TArray<FFlagEvalConditional>::Num)
		.def("__call__", (FFlagEvalConditional& (TArray<FFlagEvalConditional>::*)(int))&TArray<FFlagEvalConditional>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URulePlaceholder *> >(m, "TArray<URulePlaceholder *>")

		.def_readwrite("Count", &TArray<URulePlaceholder *>::Count)
		.def_readwrite("Max", &TArray<URulePlaceholder *>::Max)
		.def("Num", &TArray<URulePlaceholder *>::Num)
		.def("__call__", (URulePlaceholder*& (TArray<URulePlaceholder *>::*)(int))&TArray<URulePlaceholder *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<URuleSet *> >(m, "TArray<URuleSet *>")

		.def_readwrite("Count", &TArray<URuleSet *>::Count)
		.def_readwrite("Max", &TArray<URuleSet *>::Max)
		.def("Num", &TArray<URuleSet *>::Num)
		.def("__call__", (URuleSet*& (TArray<URuleSet *>::*)(int))&TArray<URuleSet *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRuleRecord> >(m, "TArray<FRuleRecord>")

		.def_readwrite("Count", &TArray<FRuleRecord>::Count)
		.def_readwrite("Max", &TArray<FRuleRecord>::Max)
		.def("Num", &TArray<FRuleRecord>::Num)
		.def("__call__", (FRuleRecord& (TArray<FRuleRecord>::*)(int))&TArray<FRuleRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActionSequenceRecord> >(m, "TArray<FActionSequenceRecord>")

		.def_readwrite("Count", &TArray<FActionSequenceRecord>::Count)
		.def_readwrite("Max", &TArray<FActionSequenceRecord>::Max)
		.def("Num", &TArray<FActionSequenceRecord>::Num)
		.def("__call__", (FActionSequenceRecord& (TArray<FActionSequenceRecord>::*)(int))&TArray<FActionSequenceRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTargetInfoRecord> >(m, "TArray<FTargetInfoRecord>")

		.def_readwrite("Count", &TArray<FTargetInfoRecord>::Count)
		.def_readwrite("Max", &TArray<FTargetInfoRecord>::Max)
		.def("Num", &TArray<FTargetInfoRecord>::Num)
		.def("__call__", (FTargetInfoRecord& (TArray<FTargetInfoRecord>::*)(int))&TArray<FTargetInfoRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIDefinitionRecord> >(m, "TArray<FAIDefinitionRecord>")

		.def_readwrite("Count", &TArray<FAIDefinitionRecord>::Count)
		.def_readwrite("Max", &TArray<FAIDefinitionRecord>::Max)
		.def("Num", &TArray<FAIDefinitionRecord>::Num)
		.def("__call__", (FAIDefinitionRecord& (TArray<FAIDefinitionRecord>::*)(int))&TArray<FAIDefinitionRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UKnowledgeRecord *> >(m, "TArray<UKnowledgeRecord *>")

		.def_readwrite("Count", &TArray<UKnowledgeRecord *>::Count)
		.def_readwrite("Max", &TArray<UKnowledgeRecord *>::Max)
		.def("Num", &TArray<UKnowledgeRecord *>::Num)
		.def("__call__", (UKnowledgeRecord*& (TArray<UKnowledgeRecord *>::*)(int))&TArray<UKnowledgeRecord *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFlagDefinition *> >(m, "TArray<UFlagDefinition *>")

		.def_readwrite("Count", &TArray<UFlagDefinition *>::Count)
		.def_readwrite("Max", &TArray<UFlagDefinition *>::Max)
		.def("Num", &TArray<UFlagDefinition *>::Num)
		.def("__call__", (UFlagDefinition*& (TArray<UFlagDefinition *>::*)(int))&TArray<UFlagDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDynamicFlagInstanceData> >(m, "TArray<FDynamicFlagInstanceData>")

		.def_readwrite("Count", &TArray<FDynamicFlagInstanceData>::Count)
		.def_readwrite("Max", &TArray<FDynamicFlagInstanceData>::Max)
		.def("Num", &TArray<FDynamicFlagInstanceData>::Num)
		.def("__call__", (FDynamicFlagInstanceData& (TArray<FDynamicFlagInstanceData>::*)(int))&TArray<FDynamicFlagInstanceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRuleInfo> >(m, "TArray<FRuleInfo>")

		.def_readwrite("Count", &TArray<FRuleInfo>::Count)
		.def_readwrite("Max", &TArray<FRuleInfo>::Max)
		.def("Num", &TArray<FRuleInfo>::Num)
		.def("__call__", (FRuleInfo& (TArray<FRuleInfo>::*)(int))&TArray<FRuleInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEventRecord> >(m, "TArray<FEventRecord>")

		.def_readwrite("Count", &TArray<FEventRecord>::Count)
		.def_readwrite("Max", &TArray<FEventRecord>::Max)
		.def("Num", &TArray<FEventRecord>::Num)
		.def("__call__", (FEventRecord& (TArray<FEventRecord>::*)(int))&TArray<FEventRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRuleSetReference> >(m, "TArray<FRuleSetReference>")

		.def_readwrite("Count", &TArray<FRuleSetReference>::Count)
		.def_readwrite("Max", &TArray<FRuleSetReference>::Max)
		.def("Num", &TArray<FRuleSetReference>::Num)
		.def("__call__", (FRuleSetReference& (TArray<FRuleSetReference>::*)(int))&TArray<FRuleSetReference>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AGearboxPawn *> >(m, "TArray<AGearboxPawn *>")

		.def_readwrite("Count", &TArray<AGearboxPawn *>::Count)
		.def_readwrite("Max", &TArray<AGearboxPawn *>::Max)
		.def("Num", &TArray<AGearboxPawn *>::Num)
		.def("__call__", (AGearboxPawn*& (TArray<AGearboxPawn *>::*)(int))&TArray<AGearboxPawn *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAwarenessZoneDefinition *> >(m, "TArray<UAwarenessZoneDefinition *>")

		.def_readwrite("Count", &TArray<UAwarenessZoneDefinition *>::Count)
		.def_readwrite("Max", &TArray<UAwarenessZoneDefinition *>::Max)
		.def("Num", &TArray<UAwarenessZoneDefinition *>::Num)
		.def("__call__", (UAwarenessZoneDefinition*& (TArray<UAwarenessZoneDefinition *>::*)(int))&TArray<UAwarenessZoneDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNounAttributeState> >(m, "TArray<FNounAttributeState>")

		.def_readwrite("Count", &TArray<FNounAttributeState>::Count)
		.def_readwrite("Max", &TArray<FNounAttributeState>::Max)
		.def("Num", &TArray<FNounAttributeState>::Num)
		.def("__call__", (FNounAttributeState& (TArray<FNounAttributeState>::*)(int))&TArray<FNounAttributeState>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGBXNavMeshPathPoint> >(m, "TArray<FGBXNavMeshPathPoint>")

		.def_readwrite("Count", &TArray<FGBXNavMeshPathPoint>::Count)
		.def_readwrite("Max", &TArray<FGBXNavMeshPathPoint>::Max)
		.def("Num", &TArray<FGBXNavMeshPathPoint>::Num)
		.def("__call__", (FGBXNavMeshPathPoint& (TArray<FGBXNavMeshPathPoint>::*)(int))&TArray<FGBXNavMeshPathPoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FIGBXNavMeshObstaclePointer> >(m, "TArray<FIGBXNavMeshObstaclePointer>")

		.def_readwrite("Count", &TArray<FIGBXNavMeshObstaclePointer>::Count)
		.def_readwrite("Max", &TArray<FIGBXNavMeshObstaclePointer>::Max)
		.def("Num", &TArray<FIGBXNavMeshObstaclePointer>::Num)
		.def("__call__", (FIGBXNavMeshObstaclePointer& (TArray<FIGBXNavMeshObstaclePointer>::*)(int))&TArray<FIGBXNavMeshObstaclePointer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGBXNavMeshPathModifier *> >(m, "TArray<UGBXNavMeshPathModifier *>")

		.def_readwrite("Count", &TArray<UGBXNavMeshPathModifier *>::Count)
		.def_readwrite("Max", &TArray<UGBXNavMeshPathModifier *>::Max)
		.def("Num", &TArray<UGBXNavMeshPathModifier *>::Num)
		.def("__call__", (UGBXNavMeshPathModifier*& (TArray<UGBXNavMeshPathModifier *>::*)(int))&TArray<UGBXNavMeshPathModifier *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOutputLink> >(m, "TArray<FOutputLink>")

		.def_readwrite("Count", &TArray<FOutputLink>::Count)
		.def_readwrite("Max", &TArray<FOutputLink>::Max)
		.def("Num", &TArray<FOutputLink>::Num)
		.def("__call__", (FOutputLink& (TArray<FOutputLink>::*)(int))&TArray<FOutputLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxEditorNode *> >(m, "TArray<UGearboxEditorNode *>")

		.def_readwrite("Count", &TArray<UGearboxEditorNode *>::Count)
		.def_readwrite("Max", &TArray<UGearboxEditorNode *>::Max)
		.def("Num", &TArray<UGearboxEditorNode *>::Num)
		.def("__call__", (UGearboxEditorNode*& (TArray<UGearboxEditorNode *>::*)(int))&TArray<UGearboxEditorNode *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVariableLink> >(m, "TArray<FVariableLink>")

		.def_readwrite("Count", &TArray<FVariableLink>::Count)
		.def_readwrite("Max", &TArray<FVariableLink>::Max)
		.def("Num", &TArray<FVariableLink>::Num)
		.def("__call__", (FVariableLink& (TArray<FVariableLink>::*)(int))&TArray<FVariableLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGearboxDialogData> >(m, "TArray<FGearboxDialogData>")

		.def_readwrite("Count", &TArray<FGearboxDialogData>::Count)
		.def_readwrite("Max", &TArray<FGearboxDialogData>::Max)
		.def("Num", &TArray<FGearboxDialogData>::Num)
		.def("__call__", (FGearboxDialogData& (TArray<FGearboxDialogData>::*)(int))&TArray<FGearboxDialogData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPackage *> >(m, "TArray<UPackage *>")

		.def_readwrite("Count", &TArray<UPackage *>::Count)
		.def_readwrite("Max", &TArray<UPackage *>::Max)
		.def("Num", &TArray<UPackage *>::Num)
		.def("__call__", (UPackage*& (TArray<UPackage *>::*)(int))&TArray<UPackage *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxDialogNameTag *> >(m, "TArray<UGearboxDialogNameTag *>")

		.def_readwrite("Count", &TArray<UGearboxDialogNameTag *>::Count)
		.def_readwrite("Max", &TArray<UGearboxDialogNameTag *>::Max)
		.def("Num", &TArray<UGearboxDialogNameTag *>::Num)
		.def("__call__", (UGearboxDialogNameTag*& (TArray<UGearboxDialogNameTag *>::*)(int))&TArray<UGearboxDialogNameTag *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxDialogEventTag *> >(m, "TArray<UGearboxDialogEventTag *>")

		.def_readwrite("Count", &TArray<UGearboxDialogEventTag *>::Count)
		.def_readwrite("Max", &TArray<UGearboxDialogEventTag *>::Max)
		.def("Num", &TArray<UGearboxDialogEventTag *>::Num)
		.def("__call__", (UGearboxDialogEventTag*& (TArray<UGearboxDialogEventTag *>::*)(int))&TArray<UGearboxDialogEventTag *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxDialogNode *> >(m, "TArray<UGearboxDialogNode *>")

		.def_readwrite("Count", &TArray<UGearboxDialogNode *>::Count)
		.def_readwrite("Max", &TArray<UGearboxDialogNode *>::Max)
		.def("Num", &TArray<UGearboxDialogNode *>::Num)
		.def("__call__", (UGearboxDialogNode*& (TArray<UGearboxDialogNode *>::*)(int))&TArray<UGearboxDialogNode *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOutputLinkToStruct> >(m, "TArray<FOutputLinkToStruct>")

		.def_readwrite("Count", &TArray<FOutputLinkToStruct>::Count)
		.def_readwrite("Max", &TArray<FOutputLinkToStruct>::Max)
		.def("Num", &TArray<FOutputLinkToStruct>::Num)
		.def("__call__", (FOutputLinkToStruct& (TArray<FOutputLinkToStruct>::*)(int))&TArray<FOutputLinkToStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDialogEventData> >(m, "TArray<FDialogEventData>")

		.def_readwrite("Count", &TArray<FDialogEventData>::Count)
		.def_readwrite("Max", &TArray<FDialogEventData>::Max)
		.def("Num", &TArray<FDialogEventData>::Num)
		.def("__call__", (FDialogEventData& (TArray<FDialogEventData>::*)(int))&TArray<FDialogEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTalkActData> >(m, "TArray<FTalkActData>")

		.def_readwrite("Count", &TArray<FTalkActData>::Count)
		.def_readwrite("Max", &TArray<FTalkActData>::Max)
		.def("Num", &TArray<FTalkActData>::Num)
		.def("__call__", (FTalkActData& (TArray<FTalkActData>::*)(int))&TArray<FTalkActData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxDialogGroup *> >(m, "TArray<UGearboxDialogGroup *>")

		.def_readwrite("Count", &TArray<UGearboxDialogGroup *>::Count)
		.def_readwrite("Max", &TArray<UGearboxDialogGroup *>::Max)
		.def("Num", &TArray<UGearboxDialogGroup *>::Num)
		.def("__call__", (UGearboxDialogGroup*& (TArray<UGearboxDialogGroup *>::*)(int))&TArray<UGearboxDialogGroup *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTechDeathData> >(m, "TArray<FTechDeathData>")

		.def_readwrite("Count", &TArray<FTechDeathData>::Count)
		.def_readwrite("Max", &TArray<FTechDeathData>::Max)
		.def("Num", &TArray<FTechDeathData>::Num)
		.def("__call__", (FTechDeathData& (TArray<FTechDeathData>::*)(int))&TArray<FTechDeathData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGoreTriggerData> >(m, "TArray<FGoreTriggerData>")

		.def_readwrite("Count", &TArray<FGoreTriggerData>::Count)
		.def_readwrite("Max", &TArray<FGoreTriggerData>::Max)
		.def("Num", &TArray<FGoreTriggerData>::Num)
		.def("__call__", (FGoreTriggerData& (TArray<FGoreTriggerData>::*)(int))&TArray<FGoreTriggerData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRtpcParameterValue> >(m, "TArray<FRtpcParameterValue>")

		.def_readwrite("Count", &TArray<FRtpcParameterValue>::Count)
		.def_readwrite("Max", &TArray<FRtpcParameterValue>::Max)
		.def("Num", &TArray<FRtpcParameterValue>::Num)
		.def("__call__", (FRtpcParameterValue& (TArray<FRtpcParameterValue>::*)(int))&TArray<FRtpcParameterValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UItemNamePartDefinition *> >(m, "TArray<UItemNamePartDefinition *>")

		.def_readwrite("Count", &TArray<UItemNamePartDefinition *>::Count)
		.def_readwrite("Max", &TArray<UItemNamePartDefinition *>::Max)
		.def("Num", &TArray<UItemNamePartDefinition *>::Num)
		.def("__call__", (UItemNamePartDefinition*& (TArray<UItemNamePartDefinition *>::*)(int))&TArray<UItemNamePartDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeEffectData> >(m, "TArray<FAttributeEffectData>")

		.def_readwrite("Count", &TArray<FAttributeEffectData>::Count)
		.def_readwrite("Max", &TArray<FAttributeEffectData>::Max)
		.def("Num", &TArray<FAttributeEffectData>::Num)
		.def("__call__", (FAttributeEffectData& (TArray<FAttributeEffectData>::*)(int))&TArray<FAttributeEffectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributePriorityData> >(m, "TArray<FAttributePriorityData>")

		.def_readwrite("Count", &TArray<FAttributePriorityData>::Count)
		.def_readwrite("Max", &TArray<FAttributePriorityData>::Max)
		.def("Num", &TArray<FAttributePriorityData>::Num)
		.def("__call__", (FAttributePriorityData& (TArray<FAttributePriorityData>::*)(int))&TArray<FAttributePriorityData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltInfo> >(m, "TArray<FGestaltInfo>")

		.def_readwrite("Count", &TArray<FGestaltInfo>::Count)
		.def_readwrite("Max", &TArray<FGestaltInfo>::Max)
		.def("Num", &TArray<FGestaltInfo>::Num)
		.def("__call__", (FGestaltInfo& (TArray<FGestaltInfo>::*)(int))&TArray<FGestaltInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltPart> >(m, "TArray<FGestaltPart>")

		.def_readwrite("Count", &TArray<FGestaltPart>::Count)
		.def_readwrite("Max", &TArray<FGestaltPart>::Max)
		.def("Num", &TArray<FGestaltPart>::Num)
		.def("__call__", (FGestaltPart& (TArray<FGestaltPart>::*)(int))&TArray<FGestaltPart>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltAccessoryNameEntry> >(m, "TArray<FGestaltAccessoryNameEntry>")

		.def_readwrite("Count", &TArray<FGestaltAccessoryNameEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltAccessoryNameEntry>::Max)
		.def("Num", &TArray<FGestaltAccessoryNameEntry>::Num)
		.def("__call__", (FGestaltAccessoryNameEntry& (TArray<FGestaltAccessoryNameEntry>::*)(int))&TArray<FGestaltAccessoryNameEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltSocketRemapEntry> >(m, "TArray<FGestaltSocketRemapEntry>")

		.def_readwrite("Count", &TArray<FGestaltSocketRemapEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltSocketRemapEntry>::Max)
		.def("Num", &TArray<FGestaltSocketRemapEntry>::Num)
		.def("__call__", (FGestaltSocketRemapEntry& (TArray<FGestaltSocketRemapEntry>::*)(int))&TArray<FGestaltSocketRemapEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltPartBoundsEntry> >(m, "TArray<FGestaltPartBoundsEntry>")

		.def_readwrite("Count", &TArray<FGestaltPartBoundsEntry>::Count)
		.def_readwrite("Max", &TArray<FGestaltPartBoundsEntry>::Max)
		.def("Num", &TArray<FGestaltPartBoundsEntry>::Num)
		.def("__call__", (FGestaltPartBoundsEntry& (TArray<FGestaltPartBoundsEntry>::*)(int))&TArray<FGestaltPartBoundsEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGestaltPartPermutation> >(m, "TArray<FGestaltPartPermutation>")

		.def_readwrite("Count", &TArray<FGestaltPartPermutation>::Count)
		.def_readwrite("Max", &TArray<FGestaltPartPermutation>::Max)
		.def("Num", &TArray<FGestaltPartPermutation>::Num)
		.def("__call__", (FGestaltPartPermutation& (TArray<FGestaltPartPermutation>::*)(int))&TArray<FGestaltPartPermutation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FItemPartGradeWeightData> >(m, "TArray<FItemPartGradeWeightData>")

		.def_readwrite("Count", &TArray<FItemPartGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FItemPartGradeWeightData>::Max)
		.def("Num", &TArray<FItemPartGradeWeightData>::Num)
		.def("__call__", (FItemPartGradeWeightData& (TArray<FItemPartGradeWeightData>::*)(int))&TArray<FItemPartGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FManufacturerCustomGradeWeightData> >(m, "TArray<FManufacturerCustomGradeWeightData>")

		.def_readwrite("Count", &TArray<FManufacturerCustomGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FManufacturerCustomGradeWeightData>::Max)
		.def("Num", &TArray<FManufacturerCustomGradeWeightData>::Num)
		.def("__call__", (FManufacturerCustomGradeWeightData& (TArray<FManufacturerCustomGradeWeightData>::*)(int))&TArray<FManufacturerCustomGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeInitializationData> >(m, "TArray<FAttributeInitializationData>")

		.def_readwrite("Count", &TArray<FAttributeInitializationData>::Count)
		.def_readwrite("Max", &TArray<FAttributeInitializationData>::Max)
		.def("Num", &TArray<FAttributeInitializationData>::Num)
		.def("__call__", (FAttributeInitializationData& (TArray<FAttributeInitializationData>::*)(int))&TArray<FAttributeInitializationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadablePackageLicenseItem *> >(m, "TArray<UDownloadablePackageLicenseItem *>")

		.def_readwrite("Count", &TArray<UDownloadablePackageLicenseItem *>::Count)
		.def_readwrite("Max", &TArray<UDownloadablePackageLicenseItem *>::Max)
		.def("Num", &TArray<UDownloadablePackageLicenseItem *>::Num)
		.def("__call__", (UDownloadablePackageLicenseItem*& (TArray<UDownloadablePackageLicenseItem *>::*)(int))&TArray<UDownloadablePackageLicenseItem *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBalancedInventoryData> >(m, "TArray<FBalancedInventoryData>")

		.def_readwrite("Count", &TArray<FBalancedInventoryData>::Count)
		.def_readwrite("Max", &TArray<FBalancedInventoryData>::Max)
		.def("Num", &TArray<FBalancedInventoryData>::Num)
		.def("__call__", (FBalancedInventoryData& (TArray<FBalancedInventoryData>::*)(int))&TArray<FBalancedInventoryData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCustomizationItemData> >(m, "TArray<FCustomizationItemData>")

		.def_readwrite("Count", &TArray<FCustomizationItemData>::Count)
		.def_readwrite("Max", &TArray<FCustomizationItemData>::Max)
		.def("Num", &TArray<FCustomizationItemData>::Num)
		.def("__call__", (FCustomizationItemData& (TArray<FCustomizationItemData>::*)(int))&TArray<FCustomizationItemData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugListItem> >(m, "TArray<FDebugListItem>")

		.def_readwrite("Count", &TArray<FDebugListItem>::Count)
		.def_readwrite("Max", &TArray<FDebugListItem>::Max)
		.def("Num", &TArray<FDebugListItem>::Num)
		.def("__call__", (FDebugListItem& (TArray<FDebugListItem>::*)(int))&TArray<FDebugListItem>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColumnDataStruct> >(m, "TArray<FColumnDataStruct>")

		.def_readwrite("Count", &TArray<FColumnDataStruct>::Count)
		.def_readwrite("Max", &TArray<FColumnDataStruct>::Max)
		.def("Num", &TArray<FColumnDataStruct>::Num)
		.def("__call__", (FColumnDataStruct& (TArray<FColumnDataStruct>::*)(int))&TArray<FColumnDataStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FProfileDefinition> >(m, "TArray<FProfileDefinition>")

		.def_readwrite("Count", &TArray<FProfileDefinition>::Count)
		.def_readwrite("Max", &TArray<FProfileDefinition>::Max)
		.def("Num", &TArray<FProfileDefinition>::Num)
		.def("__call__", (FProfileDefinition& (TArray<FProfileDefinition>::*)(int))&TArray<FProfileDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeBaseValueData> >(m, "TArray<FAttributeBaseValueData>")

		.def_readwrite("Count", &TArray<FAttributeBaseValueData>::Count)
		.def_readwrite("Max", &TArray<FAttributeBaseValueData>::Max)
		.def("Num", &TArray<FAttributeBaseValueData>::Num)
		.def("__call__", (FAttributeBaseValueData& (TArray<FAttributeBaseValueData>::*)(int))&TArray<FAttributeBaseValueData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeCategory> >(m, "TArray<FAttributeCategory>")

		.def_readwrite("Count", &TArray<FAttributeCategory>::Count)
		.def_readwrite("Max", &TArray<FAttributeCategory>::Max)
		.def("Num", &TArray<FAttributeCategory>::Num)
		.def("__call__", (FAttributeCategory& (TArray<FAttributeCategory>::*)(int))&TArray<FAttributeCategory>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeathByWeaponStatID> >(m, "TArray<FDeathByWeaponStatID>")

		.def_readwrite("Count", &TArray<FDeathByWeaponStatID>::Count)
		.def_readwrite("Max", &TArray<FDeathByWeaponStatID>::Max)
		.def("Num", &TArray<FDeathByWeaponStatID>::Num)
		.def("__call__", (FDeathByWeaponStatID& (TArray<FDeathByWeaponStatID>::*)(int))&TArray<FDeathByWeaponStatID>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeathByDamageTypeStatID> >(m, "TArray<FDeathByDamageTypeStatID>")

		.def_readwrite("Count", &TArray<FDeathByDamageTypeStatID>::Count)
		.def_readwrite("Max", &TArray<FDeathByDamageTypeStatID>::Max)
		.def("Num", &TArray<FDeathByDamageTypeStatID>::Num)
		.def("__call__", (FDeathByDamageTypeStatID& (TArray<FDeathByDamageTypeStatID>::*)(int))&TArray<FDeathByDamageTypeStatID>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeathByWeaponDamageStatID> >(m, "TArray<FDeathByWeaponDamageStatID>")

		.def_readwrite("Count", &TArray<FDeathByWeaponDamageStatID>::Count)
		.def_readwrite("Max", &TArray<FDeathByWeaponDamageStatID>::Max)
		.def("Num", &TArray<FDeathByWeaponDamageStatID>::Num)
		.def("__call__", (FDeathByWeaponDamageStatID& (TArray<FDeathByWeaponDamageStatID>::*)(int))&TArray<FDeathByWeaponDamageStatID>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExternalTexture> >(m, "TArray<FExternalTexture>")

		.def_readwrite("Count", &TArray<FExternalTexture>::Count)
		.def_readwrite("Max", &TArray<FExternalTexture>::Max)
		.def("Num", &TArray<FExternalTexture>::Num)
		.def("__call__", (FExternalTexture& (TArray<FExternalTexture>::*)(int))&TArray<FExternalTexture>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSoundThemeBinding> >(m, "TArray<FSoundThemeBinding>")

		.def_readwrite("Count", &TArray<FSoundThemeBinding>::Count)
		.def_readwrite("Max", &TArray<FSoundThemeBinding>::Max)
		.def("Num", &TArray<FSoundThemeBinding>::Num)
		.def("__call__", (FSoundThemeBinding& (TArray<FSoundThemeBinding>::*)(int))&TArray<FSoundThemeBinding>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSoundEventMapping> >(m, "TArray<FSoundEventMapping>")

		.def_readwrite("Count", &TArray<FSoundEventMapping>::Count)
		.def_readwrite("Max", &TArray<FSoundEventMapping>::Max)
		.def("Num", &TArray<FSoundEventMapping>::Num)
		.def("__call__", (FSoundEventMapping& (TArray<FSoundEventMapping>::*)(int))&TArray<FSoundEventMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGFxDataStoreBinding> >(m, "TArray<FGFxDataStoreBinding>")

		.def_readwrite("Count", &TArray<FGFxDataStoreBinding>::Count)
		.def_readwrite("Max", &TArray<FGFxDataStoreBinding>::Max)
		.def("Num", &TArray<FGFxDataStoreBinding>::Num)
		.def("__call__", (FGFxDataStoreBinding& (TArray<FGFxDataStoreBinding>::*)(int))&TArray<FGFxDataStoreBinding>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAkEventResolver> >(m, "TArray<FAkEventResolver>")

		.def_readwrite("Count", &TArray<FAkEventResolver>::Count)
		.def_readwrite("Max", &TArray<FAkEventResolver>::Max)
		.def("Num", &TArray<FAkEventResolver>::Num)
		.def("__call__", (FAkEventResolver& (TArray<FAkEventResolver>::*)(int))&TArray<FAkEventResolver>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGFxMovieDrawStyle *> >(m, "TArray<UGFxMovieDrawStyle *>")

		.def_readwrite("Count", &TArray<UGFxMovieDrawStyle *>::Count)
		.def_readwrite("Max", &TArray<UGFxMovieDrawStyle *>::Max)
		.def("Num", &TArray<UGFxMovieDrawStyle *>::Num)
		.def("__call__", (UGFxMovieDrawStyle*& (TArray<UGFxMovieDrawStyle *>::*)(int))&TArray<UGFxMovieDrawStyle *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMovieInstanceArray> >(m, "TArray<FMovieInstanceArray>")

		.def_readwrite("Count", &TArray<FMovieInstanceArray>::Count)
		.def_readwrite("Max", &TArray<FMovieInstanceArray>::Max)
		.def("Num", &TArray<FMovieInstanceArray>::Num)
		.def("__call__", (FMovieInstanceArray& (TArray<FMovieInstanceArray>::*)(int))&TArray<FMovieInstanceArray>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxGFxMovie *> >(m, "TArray<UGearboxGFxMovie *>")

		.def_readwrite("Count", &TArray<UGearboxGFxMovie *>::Count)
		.def_readwrite("Max", &TArray<UGearboxGFxMovie *>::Max)
		.def("Num", &TArray<UGearboxGFxMovie *>::Num)
		.def("__call__", (UGearboxGFxMovie*& (TArray<UGearboxGFxMovie *>::*)(int))&TArray<UGearboxGFxMovie *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIGFxActorMovie *> >(m, "TArray<UIGFxActorMovie *>")

		.def_readwrite("Count", &TArray<UIGFxActorMovie *>::Count)
		.def_readwrite("Max", &TArray<UIGFxActorMovie *>::Max)
		.def("Num", &TArray<UIGFxActorMovie *>::Num)
		.def("__call__", (UIGFxActorMovie*& (TArray<UIGFxActorMovie *>::*)(int))&TArray<UIGFxActorMovie *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AGearboxPlayerController *> >(m, "TArray<AGearboxPlayerController *>")

		.def_readwrite("Count", &TArray<AGearboxPlayerController *>::Count)
		.def_readwrite("Max", &TArray<AGearboxPlayerController *>::Max)
		.def("Num", &TArray<AGearboxPlayerController *>::Num)
		.def("__call__", (AGearboxPlayerController*& (TArray<AGearboxPlayerController *>::*)(int))&TArray<AGearboxPlayerController *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGFxMovieState *> >(m, "TArray<UGFxMovieState *>")

		.def_readwrite("Count", &TArray<UGFxMovieState *>::Count)
		.def_readwrite("Max", &TArray<UGFxMovieState *>::Max)
		.def("Num", &TArray<UGFxMovieState *>::Num)
		.def("__call__", (UGFxMovieState*& (TArray<UGFxMovieState *>::*)(int))&TArray<UGFxMovieState *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMovieStateData> >(m, "TArray<FMovieStateData>")

		.def_readwrite("Count", &TArray<FMovieStateData>::Count)
		.def_readwrite("Max", &TArray<FMovieStateData>::Max)
		.def("Num", &TArray<FMovieStateData>::Num)
		.def("__call__", (FMovieStateData& (TArray<FMovieStateData>::*)(int))&TArray<FMovieStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGFxMenuLink> >(m, "TArray<FGFxMenuLink>")

		.def_readwrite("Count", &TArray<FGFxMenuLink>::Count)
		.def_readwrite("Max", &TArray<FGFxMenuLink>::Max)
		.def("Num", &TArray<FGFxMenuLink>::Num)
		.def("__call__", (FGFxMenuLink& (TArray<FGFxMenuLink>::*)(int))&TArray<FGFxMenuLink>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillSaveGameData> >(m, "TArray<FSkillSaveGameData>")

		.def_readwrite("Count", &TArray<FSkillSaveGameData>::Count)
		.def_readwrite("Max", &TArray<FSkillSaveGameData>::Max)
		.def("Num", &TArray<FSkillSaveGameData>::Num)
		.def("__call__", (FSkillSaveGameData& (TArray<FSkillSaveGameData>::*)(int))&TArray<FSkillSaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FResourceSaveGameData> >(m, "TArray<FResourceSaveGameData>")

		.def_readwrite("Count", &TArray<FResourceSaveGameData>::Count)
		.def_readwrite("Max", &TArray<FResourceSaveGameData>::Max)
		.def("Num", &TArray<FResourceSaveGameData>::Num)
		.def("__call__", (FResourceSaveGameData& (TArray<FResourceSaveGameData>::*)(int))&TArray<FResourceSaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInventorySaveGameData> >(m, "TArray<FInventorySaveGameData>")

		.def_readwrite("Count", &TArray<FInventorySaveGameData>::Count)
		.def_readwrite("Max", &TArray<FInventorySaveGameData>::Max)
		.def("Num", &TArray<FInventorySaveGameData>::Num)
		.def("__call__", (FInventorySaveGameData& (TArray<FInventorySaveGameData>::*)(int))&TArray<FInventorySaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcItemSaveGameData> >(m, "TArray<FUnloadableDlcItemSaveGameData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcItemSaveGameData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcItemSaveGameData>::Max)
		.def("Num", &TArray<FUnloadableDlcItemSaveGameData>::Num)
		.def("__call__", (FUnloadableDlcItemSaveGameData& (TArray<FUnloadableDlcItemSaveGameData>::*)(int))&TArray<FUnloadableDlcItemSaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponSaveGameData> >(m, "TArray<FWeaponSaveGameData>")

		.def_readwrite("Count", &TArray<FWeaponSaveGameData>::Count)
		.def_readwrite("Max", &TArray<FWeaponSaveGameData>::Max)
		.def("Num", &TArray<FWeaponSaveGameData>::Num)
		.def("__call__", (FWeaponSaveGameData& (TArray<FWeaponSaveGameData>::*)(int))&TArray<FWeaponSaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageSurfaceTypeModifier> >(m, "TArray<FDamageSurfaceTypeModifier>")

		.def_readwrite("Count", &TArray<FDamageSurfaceTypeModifier>::Count)
		.def_readwrite("Max", &TArray<FDamageSurfaceTypeModifier>::Max)
		.def("Num", &TArray<FDamageSurfaceTypeModifier>::Num)
		.def("__call__", (FDamageSurfaceTypeModifier& (TArray<FDamageSurfaceTypeModifier>::*)(int))&TArray<FDamageSurfaceTypeModifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScreenParticleModifier> >(m, "TArray<FScreenParticleModifier>")

		.def_readwrite("Count", &TArray<FScreenParticleModifier>::Count)
		.def_readwrite("Max", &TArray<FScreenParticleModifier>::Max)
		.def("Num", &TArray<FScreenParticleModifier>::Num)
		.def("__call__", (FScreenParticleModifier& (TArray<FScreenParticleModifier>::*)(int))&TArray<FScreenParticleModifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributeScalarParam> >(m, "TArray<FAttributeScalarParam>")

		.def_readwrite("Count", &TArray<FAttributeScalarParam>::Count)
		.def_readwrite("Max", &TArray<FAttributeScalarParam>::Max)
		.def("Num", &TArray<FAttributeScalarParam>::Num)
		.def("__call__", (FAttributeScalarParam& (TArray<FAttributeScalarParam>::*)(int))&TArray<FAttributeScalarParam>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScreenParticleScalarParamOverTime> >(m, "TArray<FScreenParticleScalarParamOverTime>")

		.def_readwrite("Count", &TArray<FScreenParticleScalarParamOverTime>::Count)
		.def_readwrite("Max", &TArray<FScreenParticleScalarParamOverTime>::Max)
		.def("Num", &TArray<FScreenParticleScalarParamOverTime>::Num)
		.def("__call__", (FScreenParticleScalarParamOverTime& (TArray<FScreenParticleScalarParamOverTime>::*)(int))&TArray<FScreenParticleScalarParamOverTime>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScreenParticleVectorParamOverTime> >(m, "TArray<FScreenParticleVectorParamOverTime>")

		.def_readwrite("Count", &TArray<FScreenParticleVectorParamOverTime>::Count)
		.def_readwrite("Max", &TArray<FScreenParticleVectorParamOverTime>::Max)
		.def("Num", &TArray<FScreenParticleVectorParamOverTime>::Num)
		.def("__call__", (FScreenParticleVectorParamOverTime& (TArray<FScreenParticleVectorParamOverTime>::*)(int))&TArray<FScreenParticleVectorParamOverTime>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalAnimationData> >(m, "TArray<FConditionalAnimationData>")

		.def_readwrite("Count", &TArray<FConditionalAnimationData>::Count)
		.def_readwrite("Max", &TArray<FConditionalAnimationData>::Max)
		.def("Num", &TArray<FConditionalAnimationData>::Num)
		.def("__call__", (FConditionalAnimationData& (TArray<FConditionalAnimationData>::*)(int))&TArray<FConditionalAnimationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExplosionScaleData> >(m, "TArray<FExplosionScaleData>")

		.def_readwrite("Count", &TArray<FExplosionScaleData>::Count)
		.def_readwrite("Max", &TArray<FExplosionScaleData>::Max)
		.def("Num", &TArray<FExplosionScaleData>::Num)
		.def("__call__", (FExplosionScaleData& (TArray<FExplosionScaleData>::*)(int))&TArray<FExplosionScaleData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRecentExplosion> >(m, "TArray<FRecentExplosion>")

		.def_readwrite("Count", &TArray<FRecentExplosion>::Count)
		.def_readwrite("Max", &TArray<FRecentExplosion>::Max)
		.def("Num", &TArray<FRecentExplosion>::Num)
		.def("__call__", (FRecentExplosion& (TArray<FRecentExplosion>::*)(int))&TArray<FRecentExplosion>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHomingRadiusThreshold> >(m, "TArray<FHomingRadiusThreshold>")

		.def_readwrite("Count", &TArray<FHomingRadiusThreshold>::Count)
		.def_readwrite("Max", &TArray<FHomingRadiusThreshold>::Max)
		.def("Num", &TArray<FHomingRadiusThreshold>::Num)
		.def("__call__", (FHomingRadiusThreshold& (TArray<FHomingRadiusThreshold>::*)(int))&TArray<FHomingRadiusThreshold>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBodyInstanceDataUnion> >(m, "TArray<FBodyInstanceDataUnion>")

		.def_readwrite("Count", &TArray<FBodyInstanceDataUnion>::Count)
		.def_readwrite("Max", &TArray<FBodyInstanceDataUnion>::Max)
		.def("Num", &TArray<FBodyInstanceDataUnion>::Num)
		.def("__call__", (FBodyInstanceDataUnion& (TArray<FBodyInstanceDataUnion>::*)(int))&TArray<FBodyInstanceDataUnion>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalExplosionData> >(m, "TArray<FConditionalExplosionData>")

		.def_readwrite("Count", &TArray<FConditionalExplosionData>::Count)
		.def_readwrite("Max", &TArray<FConditionalExplosionData>::Max)
		.def("Num", &TArray<FConditionalExplosionData>::Num)
		.def("__call__", (FConditionalExplosionData& (TArray<FConditionalExplosionData>::*)(int))&TArray<FConditionalExplosionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalParticleEffectData> >(m, "TArray<FConditionalParticleEffectData>")

		.def_readwrite("Count", &TArray<FConditionalParticleEffectData>::Count)
		.def_readwrite("Max", &TArray<FConditionalParticleEffectData>::Max)
		.def("Num", &TArray<FConditionalParticleEffectData>::Num)
		.def("__call__", (FConditionalParticleEffectData& (TArray<FConditionalParticleEffectData>::*)(int))&TArray<FConditionalParticleEffectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBulletImpactEventData> >(m, "TArray<FBulletImpactEventData>")

		.def_readwrite("Count", &TArray<FBulletImpactEventData>::Count)
		.def_readwrite("Max", &TArray<FBulletImpactEventData>::Max)
		.def("Num", &TArray<FBulletImpactEventData>::Num)
		.def("__call__", (FBulletImpactEventData& (TArray<FBulletImpactEventData>::*)(int))&TArray<FBulletImpactEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBulletTimerEvent> >(m, "TArray<FBulletTimerEvent>")

		.def_readwrite("Count", &TArray<FBulletTimerEvent>::Count)
		.def_readwrite("Max", &TArray<FBulletTimerEvent>::Max)
		.def("Num", &TArray<FBulletTimerEvent>::Num)
		.def("__call__", (FBulletTimerEvent& (TArray<FBulletTimerEvent>::*)(int))&TArray<FBulletTimerEvent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFiringPatternLine> >(m, "TArray<FFiringPatternLine>")

		.def_readwrite("Count", &TArray<FFiringPatternLine>::Count)
		.def_readwrite("Max", &TArray<FFiringPatternLine>::Max)
		.def("Num", &TArray<FFiringPatternLine>::Num)
		.def("__call__", (FFiringPatternLine& (TArray<FFiringPatternLine>::*)(int))&TArray<FFiringPatternLine>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLightValues> >(m, "TArray<FLightValues>")

		.def_readwrite("Count", &TArray<FLightValues>::Count)
		.def_readwrite("Max", &TArray<FLightValues>::Max)
		.def("Num", &TArray<FLightValues>::Num)
		.def("__call__", (FLightValues& (TArray<FLightValues>::*)(int))&TArray<FLightValues>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWeaponNamePartDefinition *> >(m, "TArray<UWeaponNamePartDefinition *>")

		.def_readwrite("Count", &TArray<UWeaponNamePartDefinition *>::Count)
		.def_readwrite("Max", &TArray<UWeaponNamePartDefinition *>::Max)
		.def("Num", &TArray<UWeaponNamePartDefinition *>::Num)
		.def("__call__", (UWeaponNamePartDefinition*& (TArray<UWeaponNamePartDefinition *>::*)(int))&TArray<UWeaponNamePartDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponBoneControllerData> >(m, "TArray<FWeaponBoneControllerData>")

		.def_readwrite("Count", &TArray<FWeaponBoneControllerData>::Count)
		.def_readwrite("Max", &TArray<FWeaponBoneControllerData>::Max)
		.def("Num", &TArray<FWeaponBoneControllerData>::Num)
		.def("__call__", (FWeaponBoneControllerData& (TArray<FWeaponBoneControllerData>::*)(int))&TArray<FWeaponBoneControllerData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPartGradeWeightData> >(m, "TArray<FPartGradeWeightData>")

		.def_readwrite("Count", &TArray<FPartGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FPartGradeWeightData>::Max)
		.def("Num", &TArray<FPartGradeWeightData>::Num)
		.def("__call__", (FPartGradeWeightData& (TArray<FPartGradeWeightData>::*)(int))&TArray<FPartGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcWeaponSaveGameData> >(m, "TArray<FUnloadableDlcWeaponSaveGameData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcWeaponSaveGameData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcWeaponSaveGameData>::Max)
		.def("Num", &TArray<FUnloadableDlcWeaponSaveGameData>::Num)
		.def("__call__", (FUnloadableDlcWeaponSaveGameData& (TArray<FUnloadableDlcWeaponSaveGameData>::*)(int))&TArray<FUnloadableDlcWeaponSaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionPlaythroughSaveGameData> >(m, "TArray<FMissionPlaythroughSaveGameData>")

		.def_readwrite("Count", &TArray<FMissionPlaythroughSaveGameData>::Count)
		.def_readwrite("Max", &TArray<FMissionPlaythroughSaveGameData>::Max)
		.def("Num", &TArray<FMissionPlaythroughSaveGameData>::Num)
		.def("__call__", (FMissionPlaythroughSaveGameData& (TArray<FMissionPlaythroughSaveGameData>::*)(int))&TArray<FMissionPlaythroughSaveGameData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionStatusPlayerData> >(m, "TArray<FMissionStatusPlayerData>")

		.def_readwrite("Count", &TArray<FMissionStatusPlayerData>::Count)
		.def_readwrite("Max", &TArray<FMissionStatusPlayerData>::Max)
		.def("Num", &TArray<FMissionStatusPlayerData>::Num)
		.def("__call__", (FMissionStatusPlayerData& (TArray<FMissionStatusPlayerData>::*)(int))&TArray<FMissionStatusPlayerData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDlcLevelTravelPair> >(m, "TArray<FDlcLevelTravelPair>")

		.def_readwrite("Count", &TArray<FDlcLevelTravelPair>::Count)
		.def_readwrite("Max", &TArray<FDlcLevelTravelPair>::Max)
		.def("Num", &TArray<FDlcLevelTravelPair>::Num)
		.def("__call__", (FDlcLevelTravelPair& (TArray<FDlcLevelTravelPair>::*)(int))&TArray<FDlcLevelTravelPair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPersistentMapDependencies> >(m, "TArray<FPersistentMapDependencies>")

		.def_readwrite("Count", &TArray<FPersistentMapDependencies>::Count)
		.def_readwrite("Max", &TArray<FPersistentMapDependencies>::Max)
		.def("Num", &TArray<FPersistentMapDependencies>::Num)
		.def("__call__", (FPersistentMapDependencies& (TArray<FPersistentMapDependencies>::*)(int))&TArray<FPersistentMapDependencies>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UChallengeDefinition *> >(m, "TArray<UChallengeDefinition *>")

		.def_readwrite("Count", &TArray<UChallengeDefinition *>::Count)
		.def_readwrite("Max", &TArray<UChallengeDefinition *>::Max)
		.def("Num", &TArray<UChallengeDefinition *>::Num)
		.def("__call__", (UChallengeDefinition*& (TArray<UChallengeDefinition *>::*)(int))&TArray<UChallengeDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionLevel> >(m, "TArray<FConditionLevel>")

		.def_readwrite("Count", &TArray<FConditionLevel>::Count)
		.def_readwrite("Max", &TArray<FConditionLevel>::Max)
		.def("Num", &TArray<FConditionLevel>::Num)
		.def("__call__", (FConditionLevel& (TArray<FConditionLevel>::*)(int))&TArray<FConditionLevel>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UChallengeConditionDefinition *> >(m, "TArray<UChallengeConditionDefinition *>")

		.def_readwrite("Count", &TArray<UChallengeConditionDefinition *>::Count)
		.def_readwrite("Max", &TArray<UChallengeConditionDefinition *>::Max)
		.def("Num", &TArray<UChallengeConditionDefinition *>::Num)
		.def("__call__", (UChallengeConditionDefinition*& (TArray<UChallengeConditionDefinition *>::*)(int))&TArray<UChallengeConditionDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBalanceModification> >(m, "TArray<FBalanceModification>")

		.def_readwrite("Count", &TArray<FBalanceModification>::Count)
		.def_readwrite("Max", &TArray<FBalanceModification>::Max)
		.def("Num", &TArray<FBalanceModification>::Num)
		.def("__call__", (FBalanceModification& (TArray<FBalanceModification>::*)(int))&TArray<FBalanceModification>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelBasedStatusEffectChanceScale> >(m, "TArray<FLevelBasedStatusEffectChanceScale>")

		.def_readwrite("Count", &TArray<FLevelBasedStatusEffectChanceScale>::Count)
		.def_readwrite("Max", &TArray<FLevelBasedStatusEffectChanceScale>::Max)
		.def("Num", &TArray<FLevelBasedStatusEffectChanceScale>::Num)
		.def("__call__", (FLevelBasedStatusEffectChanceScale& (TArray<FLevelBasedStatusEffectChanceScale>::*)(int))&TArray<FLevelBasedStatusEffectChanceScale>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelBasedDamageScale> >(m, "TArray<FLevelBasedDamageScale>")

		.def_readwrite("Count", &TArray<FLevelBasedDamageScale>::Count)
		.def_readwrite("Max", &TArray<FLevelBasedDamageScale>::Max)
		.def("Num", &TArray<FLevelBasedDamageScale>::Num)
		.def("__call__", (FLevelBasedDamageScale& (TArray<FLevelBasedDamageScale>::*)(int))&TArray<FLevelBasedDamageScale>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBlackMarketPostLaunchUpgradeData> >(m, "TArray<FBlackMarketPostLaunchUpgradeData>")

		.def_readwrite("Count", &TArray<FBlackMarketPostLaunchUpgradeData>::Count)
		.def_readwrite("Max", &TArray<FBlackMarketPostLaunchUpgradeData>::Max)
		.def("Num", &TArray<FBlackMarketPostLaunchUpgradeData>::Num)
		.def("__call__", (FBlackMarketPostLaunchUpgradeData& (TArray<FBlackMarketPostLaunchUpgradeData>::*)(int))&TArray<FBlackMarketPostLaunchUpgradeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMapSpecificBalanceModificationList> >(m, "TArray<FMapSpecificBalanceModificationList>")

		.def_readwrite("Count", &TArray<FMapSpecificBalanceModificationList>::Count)
		.def_readwrite("Max", &TArray<FMapSpecificBalanceModificationList>::Max)
		.def("Num", &TArray<FMapSpecificBalanceModificationList>::Num)
		.def("__call__", (FMapSpecificBalanceModificationList& (TArray<FMapSpecificBalanceModificationList>::*)(int))&TArray<FMapSpecificBalanceModificationList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAIPawnBalanceModifierDefinition *> >(m, "TArray<UAIPawnBalanceModifierDefinition *>")

		.def_readwrite("Count", &TArray<UAIPawnBalanceModifierDefinition *>::Count)
		.def_readwrite("Max", &TArray<UAIPawnBalanceModifierDefinition *>::Max)
		.def("Num", &TArray<UAIPawnBalanceModifierDefinition *>::Num)
		.def("__call__", (UAIPawnBalanceModifierDefinition*& (TArray<UAIPawnBalanceModifierDefinition *>::*)(int))&TArray<UAIPawnBalanceModifierDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIPawnPlaythroughThreeData> >(m, "TArray<FAIPawnPlaythroughThreeData>")

		.def_readwrite("Count", &TArray<FAIPawnPlaythroughThreeData>::Count)
		.def_readwrite("Max", &TArray<FAIPawnPlaythroughThreeData>::Max)
		.def("Num", &TArray<FAIPawnPlaythroughThreeData>::Num)
		.def("__call__", (FAIPawnPlaythroughThreeData& (TArray<FAIPawnPlaythroughThreeData>::*)(int))&TArray<FAIPawnPlaythroughThreeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAITransformedName> >(m, "TArray<FAITransformedName>")

		.def_readwrite("Count", &TArray<FAITransformedName>::Count)
		.def_readwrite("Max", &TArray<FAITransformedName>::Max)
		.def("Num", &TArray<FAITransformedName>::Num)
		.def("__call__", (FAITransformedName& (TArray<FAITransformedName>::*)(int))&TArray<FAITransformedName>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWeaponShotDebug *> >(m, "TArray<AWeaponShotDebug *>")

		.def_readwrite("Count", &TArray<AWeaponShotDebug *>::Count)
		.def_readwrite("Max", &TArray<AWeaponShotDebug *>::Max)
		.def("Num", &TArray<AWeaponShotDebug *>::Num)
		.def("__call__", (AWeaponShotDebug*& (TArray<AWeaponShotDebug *>::*)(int))&TArray<AWeaponShotDebug *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExtraWeaponSlot> >(m, "TArray<FExtraWeaponSlot>")

		.def_readwrite("Count", &TArray<FExtraWeaponSlot>::Count)
		.def_readwrite("Max", &TArray<FExtraWeaponSlot>::Max)
		.def("Num", &TArray<FExtraWeaponSlot>::Num)
		.def("__call__", (FExtraWeaponSlot& (TArray<FExtraWeaponSlot>::*)(int))&TArray<FExtraWeaponSlot>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FModifierValuePresentationData> >(m, "TArray<FModifierValuePresentationData>")

		.def_readwrite("Count", &TArray<FModifierValuePresentationData>::Count)
		.def_readwrite("Max", &TArray<FModifierValuePresentationData>::Max)
		.def("Num", &TArray<FModifierValuePresentationData>::Num)
		.def("__call__", (FModifierValuePresentationData& (TArray<FModifierValuePresentationData>::*)(int))&TArray<FModifierValuePresentationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponBoneControllerInstance> >(m, "TArray<FWeaponBoneControllerInstance>")

		.def_readwrite("Count", &TArray<FWeaponBoneControllerInstance>::Count)
		.def_readwrite("Max", &TArray<FWeaponBoneControllerInstance>::Max)
		.def("Num", &TArray<FWeaponBoneControllerInstance>::Num)
		.def("__call__", (FWeaponBoneControllerInstance& (TArray<FWeaponBoneControllerInstance>::*)(int))&TArray<FWeaponBoneControllerInstance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FShellCasingImpact> >(m, "TArray<FShellCasingImpact>")

		.def_readwrite("Count", &TArray<FShellCasingImpact>::Count)
		.def_readwrite("Max", &TArray<FShellCasingImpact>::Max)
		.def("Num", &TArray<FShellCasingImpact>::Num)
		.def("__call__", (FShellCasingImpact& (TArray<FShellCasingImpact>::*)(int))&TArray<FShellCasingImpact>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPersistentSequenceData *> >(m, "TArray<UPersistentSequenceData *>")

		.def_readwrite("Count", &TArray<UPersistentSequenceData *>::Count)
		.def_readwrite("Max", &TArray<UPersistentSequenceData *>::Max)
		.def("Num", &TArray<UPersistentSequenceData *>::Num)
		.def("__call__", (UPersistentSequenceData*& (TArray<UPersistentSequenceData *>::*)(int))&TArray<UPersistentSequenceData *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerOwnedComponent> >(m, "TArray<FPlayerOwnedComponent>")

		.def_readwrite("Count", &TArray<FPlayerOwnedComponent>::Count)
		.def_readwrite("Max", &TArray<FPlayerOwnedComponent>::Max)
		.def("Num", &TArray<FPlayerOwnedComponent>::Num)
		.def("__call__", (FPlayerOwnedComponent& (TArray<FPlayerOwnedComponent>::*)(int))&TArray<FPlayerOwnedComponent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAkCallBackGetRTPC> >(m, "TArray<FAkCallBackGetRTPC>")

		.def_readwrite("Count", &TArray<FAkCallBackGetRTPC>::Count)
		.def_readwrite("Max", &TArray<FAkCallBackGetRTPC>::Max)
		.def("Num", &TArray<FAkCallBackGetRTPC>::Num)
		.def("__call__", (FAkCallBackGetRTPC& (TArray<FAkCallBackGetRTPC>::*)(int))&TArray<FAkCallBackGetRTPC>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxDialogPriority *> >(m, "TArray<UGearboxDialogPriority *>")

		.def_readwrite("Count", &TArray<UGearboxDialogPriority *>::Count)
		.def_readwrite("Max", &TArray<UGearboxDialogPriority *>::Max)
		.def("Num", &TArray<UGearboxDialogPriority *>::Num)
		.def("__call__", (UGearboxDialogPriority*& (TArray<UGearboxDialogPriority *>::*)(int))&TArray<UGearboxDialogPriority *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRuleEngineLoadBalanceStruct> >(m, "TArray<FRuleEngineLoadBalanceStruct>")

		.def_readwrite("Count", &TArray<FRuleEngineLoadBalanceStruct>::Count)
		.def_readwrite("Max", &TArray<FRuleEngineLoadBalanceStruct>::Max)
		.def("Num", &TArray<FRuleEngineLoadBalanceStruct>::Num)
		.def("__call__", (FRuleEngineLoadBalanceStruct& (TArray<FRuleEngineLoadBalanceStruct>::*)(int))&TArray<FRuleEngineLoadBalanceStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugLoadBalance> >(m, "TArray<FDebugLoadBalance>")

		.def_readwrite("Count", &TArray<FDebugLoadBalance>::Count)
		.def_readwrite("Max", &TArray<FDebugLoadBalance>::Max)
		.def("Num", &TArray<FDebugLoadBalance>::Num)
		.def("__call__", (FDebugLoadBalance& (TArray<FDebugLoadBalance>::*)(int))&TArray<FDebugLoadBalance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRELBManagerStats> >(m, "TArray<FRELBManagerStats>")

		.def_readwrite("Count", &TArray<FRELBManagerStats>::Count)
		.def_readwrite("Max", &TArray<FRELBManagerStats>::Max)
		.def("Num", &TArray<FRELBManagerStats>::Num)
		.def("__call__", (FRELBManagerStats& (TArray<FRELBManagerStats>::*)(int))&TArray<FRELBManagerStats>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<Fs_actorList> >(m, "TArray<Fs_actorList>")

		.def_readwrite("Count", &TArray<Fs_actorList>::Count)
		.def_readwrite("Max", &TArray<Fs_actorList>::Max)
		.def("Num", &TArray<Fs_actorList>::Num)
		.def("__call__", (Fs_actorList& (TArray<Fs_actorList>::*)(int))&TArray<Fs_actorList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FValidNameRange> >(m, "TArray<FValidNameRange>")

		.def_readwrite("Count", &TArray<FValidNameRange>::Count)
		.def_readwrite("Max", &TArray<FValidNameRange>::Max)
		.def("Num", &TArray<FValidNameRange>::Num)
		.def("__call__", (FValidNameRange& (TArray<FValidNameRange>::*)(int))&TArray<FValidNameRange>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIGbxMessageListener *> >(m, "TArray<UIGbxMessageListener *>")

		.def_readwrite("Count", &TArray<UIGbxMessageListener *>::Count)
		.def_readwrite("Max", &TArray<UIGbxMessageListener *>::Max)
		.def("Num", &TArray<UIGbxMessageListener *>::Num)
		.def("__call__", (UIGbxMessageListener*& (TArray<UIGbxMessageListener *>::*)(int))&TArray<UIGbxMessageListener *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGbxMessage *> >(m, "TArray<UGbxMessage *>")

		.def_readwrite("Count", &TArray<UGbxMessage *>::Count)
		.def_readwrite("Max", &TArray<UGbxMessage *>::Max)
		.def("Num", &TArray<UGbxMessage *>::Num)
		.def("__call__", (UGbxMessage*& (TArray<UGbxMessage *>::*)(int))&TArray<UGbxMessage *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationOpportunityTracker> >(m, "TArray<FPopulationOpportunityTracker>")

		.def_readwrite("Count", &TArray<FPopulationOpportunityTracker>::Count)
		.def_readwrite("Max", &TArray<FPopulationOpportunityTracker>::Max)
		.def("Num", &TArray<FPopulationOpportunityTracker>::Num)
		.def("__call__", (FPopulationOpportunityTracker& (TArray<FPopulationOpportunityTracker>::*)(int))&TArray<FPopulationOpportunityTracker>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APopulationPoint *> >(m, "TArray<APopulationPoint *>")

		.def_readwrite("Count", &TArray<APopulationPoint *>::Count)
		.def_readwrite("Max", &TArray<APopulationPoint *>::Max)
		.def("Num", &TArray<APopulationPoint *>::Num)
		.def("__call__", (APopulationPoint*& (TArray<APopulationPoint *>::*)(int))&TArray<APopulationPoint *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPopulationSpawnedActorTagDefinition *> >(m, "TArray<UPopulationSpawnedActorTagDefinition *>")

		.def_readwrite("Count", &TArray<UPopulationSpawnedActorTagDefinition *>::Count)
		.def_readwrite("Max", &TArray<UPopulationSpawnedActorTagDefinition *>::Max)
		.def("Num", &TArray<UPopulationSpawnedActorTagDefinition *>::Num)
		.def("__call__", (UPopulationSpawnedActorTagDefinition*& (TArray<UPopulationSpawnedActorTagDefinition *>::*)(int))&TArray<UPopulationSpawnedActorTagDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APopulationOpportunity *> >(m, "TArray<APopulationOpportunity *>")

		.def_readwrite("Count", &TArray<APopulationOpportunity *>::Count)
		.def_readwrite("Max", &TArray<APopulationOpportunity *>::Max)
		.def("Num", &TArray<APopulationOpportunity *>::Num)
		.def("__call__", (APopulationOpportunity*& (TArray<APopulationOpportunity *>::*)(int))&TArray<APopulationOpportunity *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpawnedPopulationActor> >(m, "TArray<FSpawnedPopulationActor>")

		.def_readwrite("Count", &TArray<FSpawnedPopulationActor>::Count)
		.def_readwrite("Max", &TArray<FSpawnedPopulationActor>::Max)
		.def("Num", &TArray<FSpawnedPopulationActor>::Num)
		.def("__call__", (FSpawnedPopulationActor& (TArray<FSpawnedPopulationActor>::*)(int))&TArray<FSpawnedPopulationActor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRemovedPopulationActor> >(m, "TArray<FRemovedPopulationActor>")

		.def_readwrite("Count", &TArray<FRemovedPopulationActor>::Count)
		.def_readwrite("Max", &TArray<FRemovedPopulationActor>::Max)
		.def("Num", &TArray<FRemovedPopulationActor>::Num)
		.def("__call__", (FRemovedPopulationActor& (TArray<FRemovedPopulationActor>::*)(int))&TArray<FRemovedPopulationActor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationMasterStat> >(m, "TArray<FPopulationMasterStat>")

		.def_readwrite("Count", &TArray<FPopulationMasterStat>::Count)
		.def_readwrite("Max", &TArray<FPopulationMasterStat>::Max)
		.def("Num", &TArray<FPopulationMasterStat>::Num)
		.def("__call__", (FPopulationMasterStat& (TArray<FPopulationMasterStat>::*)(int))&TArray<FPopulationMasterStat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEncounterTracker> >(m, "TArray<FEncounterTracker>")

		.def_readwrite("Count", &TArray<FEncounterTracker>::Count)
		.def_readwrite("Max", &TArray<FEncounterTracker>::Max)
		.def("Num", &TArray<FEncounterTracker>::Num)
		.def("__call__", (FEncounterTracker& (TArray<FEncounterTracker>::*)(int))&TArray<FEncounterTracker>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationActor> >(m, "TArray<FPopulationActor>")

		.def_readwrite("Count", &TArray<FPopulationActor>::Count)
		.def_readwrite("Max", &TArray<FPopulationActor>::Max)
		.def("Num", &TArray<FPopulationActor>::Num)
		.def("__call__", (FPopulationActor& (TArray<FPopulationActor>::*)(int))&TArray<FPopulationActor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEncounterLimitData> >(m, "TArray<FEncounterLimitData>")

		.def_readwrite("Count", &TArray<FEncounterLimitData>::Count)
		.def_readwrite("Max", &TArray<FEncounterLimitData>::Max)
		.def("Num", &TArray<FEncounterLimitData>::Num)
		.def("__call__", (FEncounterLimitData& (TArray<FEncounterLimitData>::*)(int))&TArray<FEncounterLimitData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEncounterWaveData> >(m, "TArray<FEncounterWaveData>")

		.def_readwrite("Count", &TArray<FEncounterWaveData>::Count)
		.def_readwrite("Max", &TArray<FEncounterWaveData>::Max)
		.def("Num", &TArray<FEncounterWaveData>::Num)
		.def("__call__", (FEncounterWaveData& (TArray<FEncounterWaveData>::*)(int))&TArray<FEncounterWaveData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEncounterWaveTracker> >(m, "TArray<FEncounterWaveTracker>")

		.def_readwrite("Count", &TArray<FEncounterWaveTracker>::Count)
		.def_readwrite("Max", &TArray<FEncounterWaveTracker>::Max)
		.def("Num", &TArray<FEncounterWaveTracker>::Num)
		.def("__call__", (FEncounterWaveTracker& (TArray<FEncounterWaveTracker>::*)(int))&TArray<FEncounterWaveTracker>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPopulationFactory *> >(m, "TArray<UPopulationFactory *>")

		.def_readwrite("Count", &TArray<UPopulationFactory *>::Count)
		.def_readwrite("Max", &TArray<UPopulationFactory *>::Max)
		.def("Num", &TArray<UPopulationFactory *>::Num)
		.def("__call__", (UPopulationFactory*& (TArray<UPopulationFactory *>::*)(int))&TArray<UPopulationFactory *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FProviderRecord> >(m, "TArray<FProviderRecord>")

		.def_readwrite("Count", &TArray<FProviderRecord>::Count)
		.def_readwrite("Max", &TArray<FProviderRecord>::Max)
		.def("Num", &TArray<FProviderRecord>::Num)
		.def("__call__", (FProviderRecord& (TArray<FProviderRecord>::*)(int))&TArray<FProviderRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBehaviorProviderDefinition *> >(m, "TArray<UBehaviorProviderDefinition *>")

		.def_readwrite("Count", &TArray<UBehaviorProviderDefinition *>::Count)
		.def_readwrite("Max", &TArray<UBehaviorProviderDefinition *>::Max)
		.def("Num", &TArray<UBehaviorProviderDefinition *>::Num)
		.def("__call__", (UBehaviorProviderDefinition*& (TArray<UBehaviorProviderDefinition *>::*)(int))&TArray<UBehaviorProviderDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorVariableValue> >(m, "TArray<FBehaviorVariableValue>")

		.def_readwrite("Count", &TArray<FBehaviorVariableValue>::Count)
		.def_readwrite("Max", &TArray<FBehaviorVariableValue>::Max)
		.def("Num", &TArray<FBehaviorVariableValue>::Num)
		.def("__call__", (FBehaviorVariableValue& (TArray<FBehaviorVariableValue>::*)(int))&TArray<FBehaviorVariableValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGFxActorMoviePool *> >(m, "TArray<UGFxActorMoviePool *>")

		.def_readwrite("Count", &TArray<UGFxActorMoviePool *>::Count)
		.def_readwrite("Max", &TArray<UGFxActorMoviePool *>::Max)
		.def("Num", &TArray<UGFxActorMoviePool *>::Num)
		.def("__call__", (UGFxActorMoviePool*& (TArray<UGFxActorMoviePool *>::*)(int))&TArray<UGFxActorMoviePool *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTextureRenderTarget2D *> >(m, "TArray<UTextureRenderTarget2D *>")

		.def_readwrite("Count", &TArray<UTextureRenderTarget2D *>::Count)
		.def_readwrite("Max", &TArray<UTextureRenderTarget2D *>::Max)
		.def("Num", &TArray<UTextureRenderTarget2D *>::Num)
		.def("__call__", (UTextureRenderTarget2D*& (TArray<UTextureRenderTarget2D *>::*)(int))&TArray<UTextureRenderTarget2D *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FThumbnailRenderData> >(m, "TArray<FThumbnailRenderData>")

		.def_readwrite("Count", &TArray<FThumbnailRenderData>::Count)
		.def_readwrite("Max", &TArray<FThumbnailRenderData>::Max)
		.def("Num", &TArray<FThumbnailRenderData>::Num)
		.def("__call__", (FThumbnailRenderData& (TArray<FThumbnailRenderData>::*)(int))&TArray<FThumbnailRenderData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FThumbnailLightData> >(m, "TArray<FThumbnailLightData>")

		.def_readwrite("Count", &TArray<FThumbnailLightData>::Count)
		.def_readwrite("Max", &TArray<FThumbnailLightData>::Max)
		.def("Num", &TArray<FThumbnailLightData>::Num)
		.def("__call__", (FThumbnailLightData& (TArray<FThumbnailLightData>::*)(int))&TArray<FThumbnailLightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelStateRecord> >(m, "TArray<FLevelStateRecord>")

		.def_readwrite("Count", &TArray<FLevelStateRecord>::Count)
		.def_readwrite("Max", &TArray<FLevelStateRecord>::Max)
		.def("Num", &TArray<FLevelStateRecord>::Num)
		.def("__call__", (FLevelStateRecord& (TArray<FLevelStateRecord>::*)(int))&TArray<FLevelStateRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FObjectKey> >(m, "TArray<FObjectKey>")

		.def_readwrite("Count", &TArray<FObjectKey>::Count)
		.def_readwrite("Max", &TArray<FObjectKey>::Max)
		.def("Num", &TArray<FObjectKey>::Num)
		.def("__call__", (FObjectKey& (TArray<FObjectKey>::*)(int))&TArray<FObjectKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxDialogEventData *> >(m, "TArray<UGearboxDialogEventData *>")

		.def_readwrite("Count", &TArray<UGearboxDialogEventData *>::Count)
		.def_readwrite("Max", &TArray<UGearboxDialogEventData *>::Max)
		.def("Num", &TArray<UGearboxDialogEventData *>::Num)
		.def("__call__", (UGearboxDialogEventData*& (TArray<UGearboxDialogEventData *>::*)(int))&TArray<UGearboxDialogEventData *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPlayerClassIdentifierDefinition *> >(m, "TArray<UPlayerClassIdentifierDefinition *>")

		.def_readwrite("Count", &TArray<UPlayerClassIdentifierDefinition *>::Count)
		.def_readwrite("Max", &TArray<UPlayerClassIdentifierDefinition *>::Max)
		.def("Num", &TArray<UPlayerClassIdentifierDefinition *>::Num)
		.def("__call__", (UPlayerClassIdentifierDefinition*& (TArray<UPlayerClassIdentifierDefinition *>::*)(int))&TArray<UPlayerClassIdentifierDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPlayerNameIdentifierDefinition *> >(m, "TArray<UPlayerNameIdentifierDefinition *>")

		.def_readwrite("Count", &TArray<UPlayerNameIdentifierDefinition *>::Count)
		.def_readwrite("Max", &TArray<UPlayerNameIdentifierDefinition *>::Max)
		.def("Num", &TArray<UPlayerNameIdentifierDefinition *>::Num)
		.def("__call__", (UPlayerNameIdentifierDefinition*& (TArray<UPlayerNameIdentifierDefinition *>::*)(int))&TArray<UPlayerNameIdentifierDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDamagePipeline *> >(m, "TArray<UDamagePipeline *>")

		.def_readwrite("Count", &TArray<UDamagePipeline *>::Count)
		.def_readwrite("Max", &TArray<UDamagePipeline *>::Max)
		.def("Num", &TArray<UDamagePipeline *>::Num)
		.def("__call__", (UDamagePipeline*& (TArray<UDamagePipeline *>::*)(int))&TArray<UDamagePipeline *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTrainingMessageDefinition *> >(m, "TArray<UTrainingMessageDefinition *>")

		.def_readwrite("Count", &TArray<UTrainingMessageDefinition *>::Count)
		.def_readwrite("Max", &TArray<UTrainingMessageDefinition *>::Max)
		.def("Num", &TArray<UTrainingMessageDefinition *>::Num)
		.def("__call__", (UTrainingMessageDefinition*& (TArray<UTrainingMessageDefinition *>::*)(int))&TArray<UTrainingMessageDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFastTravelStationDefinition *> >(m, "TArray<UFastTravelStationDefinition *>")

		.def_readwrite("Count", &TArray<UFastTravelStationDefinition *>::Count)
		.def_readwrite("Max", &TArray<UFastTravelStationDefinition *>::Max)
		.def("Num", &TArray<UFastTravelStationDefinition *>::Num)
		.def("__call__", (UFastTravelStationDefinition*& (TArray<UFastTravelStationDefinition *>::*)(int))&TArray<UFastTravelStationDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULevelTravelStationDefinition *> >(m, "TArray<ULevelTravelStationDefinition *>")

		.def_readwrite("Count", &TArray<ULevelTravelStationDefinition *>::Count)
		.def_readwrite("Max", &TArray<ULevelTravelStationDefinition *>::Max)
		.def("Num", &TArray<ULevelTravelStationDefinition *>::Num)
		.def("__call__", (ULevelTravelStationDefinition*& (TArray<ULevelTravelStationDefinition *>::*)(int))&TArray<ULevelTravelStationDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowInteractiveObject *> >(m, "TArray<AWillowInteractiveObject *>")

		.def_readwrite("Count", &TArray<AWillowInteractiveObject *>::Count)
		.def_readwrite("Max", &TArray<AWillowInteractiveObject *>::Max)
		.def("Num", &TArray<AWillowInteractiveObject *>::Num)
		.def("__call__", (AWillowInteractiveObject*& (TArray<AWillowInteractiveObject *>::*)(int))&TArray<AWillowInteractiveObject *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBodyHitRegionDefinition *> >(m, "TArray<UBodyHitRegionDefinition *>")

		.def_readwrite("Count", &TArray<UBodyHitRegionDefinition *>::Count)
		.def_readwrite("Max", &TArray<UBodyHitRegionDefinition *>::Max)
		.def("Num", &TArray<UBodyHitRegionDefinition *>::Num)
		.def("__call__", (UBodyHitRegionDefinition*& (TArray<UBodyHitRegionDefinition *>::*)(int))&TArray<UBodyHitRegionDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageReactionData> >(m, "TArray<FDamageReactionData>")

		.def_readwrite("Count", &TArray<FDamageReactionData>::Count)
		.def_readwrite("Max", &TArray<FDamageReactionData>::Max)
		.def("Num", &TArray<FDamageReactionData>::Num)
		.def("__call__", (FDamageReactionData& (TArray<FDamageReactionData>::*)(int))&TArray<FDamageReactionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInstancedDesignerAttribute *> >(m, "TArray<UInstancedDesignerAttribute *>")

		.def_readwrite("Count", &TArray<UInstancedDesignerAttribute *>::Count)
		.def_readwrite("Max", &TArray<UInstancedDesignerAttribute *>::Max)
		.def("Num", &TArray<UInstancedDesignerAttribute *>::Num)
		.def("__call__", (UInstancedDesignerAttribute*& (TArray<UInstancedDesignerAttribute *>::*)(int))&TArray<UInstancedDesignerAttribute *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActiveStatusEffect> >(m, "TArray<FActiveStatusEffect>")

		.def_readwrite("Count", &TArray<FActiveStatusEffect>::Count)
		.def_readwrite("Max", &TArray<FActiveStatusEffect>::Max)
		.def("Num", &TArray<FActiveStatusEffect>::Num)
		.def("__call__", (FActiveStatusEffect& (TArray<FActiveStatusEffect>::*)(int))&TArray<FActiveStatusEffect>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIStatusEffectTarget *> >(m, "TArray<UIStatusEffectTarget *>")

		.def_readwrite("Count", &TArray<UIStatusEffectTarget *>::Count)
		.def_readwrite("Max", &TArray<UIStatusEffectTarget *>::Max)
		.def("Num", &TArray<UIStatusEffectTarget *>::Num)
		.def("__call__", (UIStatusEffectTarget*& (TArray<UIStatusEffectTarget *>::*)(int))&TArray<UIStatusEffectTarget *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHitRegionEmitters> >(m, "TArray<FHitRegionEmitters>")

		.def_readwrite("Count", &TArray<FHitRegionEmitters>::Count)
		.def_readwrite("Max", &TArray<FHitRegionEmitters>::Max)
		.def("Num", &TArray<FHitRegionEmitters>::Num)
		.def("__call__", (FHitRegionEmitters& (TArray<FHitRegionEmitters>::*)(int))&TArray<FHitRegionEmitters>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSocketEmitter> >(m, "TArray<FSocketEmitter>")

		.def_readwrite("Count", &TArray<FSocketEmitter>::Count)
		.def_readwrite("Max", &TArray<FSocketEmitter>::Max)
		.def("Num", &TArray<FSocketEmitter>::Num)
		.def("__call__", (FSocketEmitter& (TArray<FSocketEmitter>::*)(int))&TArray<FSocketEmitter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEffectSoundData> >(m, "TArray<FEffectSoundData>")

		.def_readwrite("Count", &TArray<FEffectSoundData>::Count)
		.def_readwrite("Max", &TArray<FEffectSoundData>::Max)
		.def("Num", &TArray<FEffectSoundData>::Num)
		.def("__call__", (FEffectSoundData& (TArray<FEffectSoundData>::*)(int))&TArray<FEffectSoundData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AStatusEffectReplicatedEmitter *> >(m, "TArray<AStatusEffectReplicatedEmitter *>")

		.def_readwrite("Count", &TArray<AStatusEffectReplicatedEmitter *>::Count)
		.def_readwrite("Max", &TArray<AStatusEffectReplicatedEmitter *>::Max)
		.def("Num", &TArray<AStatusEffectReplicatedEmitter *>::Num)
		.def("__call__", (AStatusEffectReplicatedEmitter*& (TArray<AStatusEffectReplicatedEmitter *>::*)(int))&TArray<AStatusEffectReplicatedEmitter *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOngoingEffectInfo> >(m, "TArray<FOngoingEffectInfo>")

		.def_readwrite("Count", &TArray<FOngoingEffectInfo>::Count)
		.def_readwrite("Max", &TArray<FOngoingEffectInfo>::Max)
		.def("Num", &TArray<FOngoingEffectInfo>::Num)
		.def("__call__", (FOngoingEffectInfo& (TArray<FOngoingEffectInfo>::*)(int))&TArray<FOngoingEffectInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UStatusEffectDefinition *> >(m, "TArray<UStatusEffectDefinition *>")

		.def_readwrite("Count", &TArray<UStatusEffectDefinition *>::Count)
		.def_readwrite("Max", &TArray<UStatusEffectDefinition *>::Max)
		.def("Num", &TArray<UStatusEffectDefinition *>::Num)
		.def("__call__", (UStatusEffectDefinition*& (TArray<UStatusEffectDefinition *>::*)(int))&TArray<UStatusEffectDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionDirectorData> >(m, "TArray<FMissionDirectorData>")

		.def_readwrite("Count", &TArray<FMissionDirectorData>::Count)
		.def_readwrite("Max", &TArray<FMissionDirectorData>::Max)
		.def("Num", &TArray<FMissionDirectorData>::Num)
		.def("__call__", (FMissionDirectorData& (TArray<FMissionDirectorData>::*)(int))&TArray<FMissionDirectorData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionData> >(m, "TArray<FMissionData>")

		.def_readwrite("Count", &TArray<FMissionData>::Count)
		.def_readwrite("Max", &TArray<FMissionData>::Max)
		.def("Num", &TArray<FMissionData>::Num)
		.def("__call__", (FMissionData& (TArray<FMissionData>::*)(int))&TArray<FMissionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMissionObjectiveDefinition *> >(m, "TArray<UMissionObjectiveDefinition *>")

		.def_readwrite("Count", &TArray<UMissionObjectiveDefinition *>::Count)
		.def_readwrite("Max", &TArray<UMissionObjectiveDefinition *>::Max)
		.def("Num", &TArray<UMissionObjectiveDefinition *>::Num)
		.def("__call__", (UMissionObjectiveDefinition*& (TArray<UMissionObjectiveDefinition *>::*)(int))&TArray<UMissionObjectiveDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMissionObjectiveSetDefinition *> >(m, "TArray<UMissionObjectiveSetDefinition *>")

		.def_readwrite("Count", &TArray<UMissionObjectiveSetDefinition *>::Count)
		.def_readwrite("Max", &TArray<UMissionObjectiveSetDefinition *>::Max)
		.def("Num", &TArray<UMissionObjectiveSetDefinition *>::Num)
		.def("__call__", (UMissionObjectiveSetDefinition*& (TArray<UMissionObjectiveSetDefinition *>::*)(int))&TArray<UMissionObjectiveSetDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionObserversData> >(m, "TArray<FMissionObserversData>")

		.def_readwrite("Count", &TArray<FMissionObserversData>::Count)
		.def_readwrite("Max", &TArray<FMissionObserversData>::Max)
		.def("Num", &TArray<FMissionObserversData>::Num)
		.def("__call__", (FMissionObserversData& (TArray<FMissionObserversData>::*)(int))&TArray<FMissionObserversData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIMission *> >(m, "TArray<UIMission *>")

		.def_readwrite("Count", &TArray<UIMission *>::Count)
		.def_readwrite("Max", &TArray<UIMission *>::Max)
		.def("Num", &TArray<UIMission *>::Num)
		.def("__call__", (UIMission*& (TArray<UIMission *>::*)(int))&TArray<UIMission *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIMissionDirector *> >(m, "TArray<UIMissionDirector *>")

		.def_readwrite("Count", &TArray<UIMissionDirector *>::Count)
		.def_readwrite("Max", &TArray<UIMissionDirector *>::Max)
		.def("Num", &TArray<UIMissionDirector *>::Num)
		.def("__call__", (UIMissionDirector*& (TArray<UIMissionDirector *>::*)(int))&TArray<UIMissionDirector *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMissionDefinition *> >(m, "TArray<UMissionDefinition *>")

		.def_readwrite("Count", &TArray<UMissionDefinition *>::Count)
		.def_readwrite("Max", &TArray<UMissionDefinition *>::Max)
		.def("Num", &TArray<UMissionDefinition *>::Num)
		.def("__call__", (UMissionDefinition*& (TArray<UMissionDefinition *>::*)(int))&TArray<UMissionDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionWaypointsData> >(m, "TArray<FMissionWaypointsData>")

		.def_readwrite("Count", &TArray<FMissionWaypointsData>::Count)
		.def_readwrite("Max", &TArray<FMissionWaypointsData>::Max)
		.def("Num", &TArray<FMissionWaypointsData>::Num)
		.def("__call__", (FMissionWaypointsData& (TArray<FMissionWaypointsData>::*)(int))&TArray<FMissionWaypointsData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWaypointComponent *> >(m, "TArray<UWaypointComponent *>")

		.def_readwrite("Count", &TArray<UWaypointComponent *>::Count)
		.def_readwrite("Max", &TArray<UWaypointComponent *>::Max)
		.def("Num", &TArray<UWaypointComponent *>::Num)
		.def("__call__", (UWaypointComponent*& (TArray<UWaypointComponent *>::*)(int))&TArray<UWaypointComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelTransitionData> >(m, "TArray<FLevelTransitionData>")

		.def_readwrite("Count", &TArray<FLevelTransitionData>::Count)
		.def_readwrite("Max", &TArray<FLevelTransitionData>::Max)
		.def("Num", &TArray<FLevelTransitionData>::Num)
		.def("__call__", (FLevelTransitionData& (TArray<FLevelTransitionData>::*)(int))&TArray<FLevelTransitionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTimedMissionData> >(m, "TArray<FTimedMissionData>")

		.def_readwrite("Count", &TArray<FTimedMissionData>::Count)
		.def_readwrite("Max", &TArray<FTimedMissionData>::Max)
		.def("Num", &TArray<FTimedMissionData>::Num)
		.def("__call__", (FTimedMissionData& (TArray<FTimedMissionData>::*)(int))&TArray<FTimedMissionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDefendMissionData> >(m, "TArray<FDefendMissionData>")

		.def_readwrite("Count", &TArray<FDefendMissionData>::Count)
		.def_readwrite("Max", &TArray<FDefendMissionData>::Max)
		.def("Num", &TArray<FDefendMissionData>::Num)
		.def("__call__", (FDefendMissionData& (TArray<FDefendMissionData>::*)(int))&TArray<FDefendMissionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMissionWeaponBalanceDefinition *> >(m, "TArray<UMissionWeaponBalanceDefinition *>")

		.def_readwrite("Count", &TArray<UMissionWeaponBalanceDefinition *>::Count)
		.def_readwrite("Max", &TArray<UMissionWeaponBalanceDefinition *>::Max)
		.def("Num", &TArray<UMissionWeaponBalanceDefinition *>::Num)
		.def("__call__", (UMissionWeaponBalanceDefinition*& (TArray<UMissionWeaponBalanceDefinition *>::*)(int))&TArray<UMissionWeaponBalanceDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBlockedMissionData> >(m, "TArray<FBlockedMissionData>")

		.def_readwrite("Count", &TArray<FBlockedMissionData>::Count)
		.def_readwrite("Max", &TArray<FBlockedMissionData>::Max)
		.def("Num", &TArray<FBlockedMissionData>::Num)
		.def("__call__", (FBlockedMissionData& (TArray<FBlockedMissionData>::*)(int))&TArray<FBlockedMissionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FObjectiveUpdateData> >(m, "TArray<FObjectiveUpdateData>")

		.def_readwrite("Count", &TArray<FObjectiveUpdateData>::Count)
		.def_readwrite("Max", &TArray<FObjectiveUpdateData>::Max)
		.def("Num", &TArray<FObjectiveUpdateData>::Num)
		.def("__call__", (FObjectiveUpdateData& (TArray<FObjectiveUpdateData>::*)(int))&TArray<FObjectiveUpdateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpawnedDroppedLootData> >(m, "TArray<FSpawnedDroppedLootData>")

		.def_readwrite("Count", &TArray<FSpawnedDroppedLootData>::Count)
		.def_readwrite("Max", &TArray<FSpawnedDroppedLootData>::Max)
		.def("Num", &TArray<FSpawnedDroppedLootData>::Num)
		.def("__call__", (FSpawnedDroppedLootData& (TArray<FSpawnedDroppedLootData>::*)(int))&TArray<FSpawnedDroppedLootData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHitActorData> >(m, "TArray<FHitActorData>")

		.def_readwrite("Count", &TArray<FHitActorData>::Count)
		.def_readwrite("Max", &TArray<FHitActorData>::Max)
		.def("Num", &TArray<FHitActorData>::Num)
		.def("__call__", (FHitActorData& (TArray<FHitActorData>::*)(int))&TArray<FHitActorData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLootConfigurationData> >(m, "TArray<FLootConfigurationData>")

		.def_readwrite("Count", &TArray<FLootConfigurationData>::Count)
		.def_readwrite("Max", &TArray<FLootConfigurationData>::Max)
		.def("Num", &TArray<FLootConfigurationData>::Num)
		.def("__call__", (FLootConfigurationData& (TArray<FLootConfigurationData>::*)(int))&TArray<FLootConfigurationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLootAttachmentData> >(m, "TArray<FLootAttachmentData>")

		.def_readwrite("Count", &TArray<FLootAttachmentData>::Count)
		.def_readwrite("Max", &TArray<FLootAttachmentData>::Max)
		.def("Num", &TArray<FLootAttachmentData>::Num)
		.def("__call__", (FLootAttachmentData& (TArray<FLootAttachmentData>::*)(int))&TArray<FLootAttachmentData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHitRegionDamage> >(m, "TArray<FHitRegionDamage>")

		.def_readwrite("Count", &TArray<FHitRegionDamage>::Count)
		.def_readwrite("Max", &TArray<FHitRegionDamage>::Max)
		.def("Num", &TArray<FHitRegionDamage>::Num)
		.def("__call__", (FHitRegionDamage& (TArray<FHitRegionDamage>::*)(int))&TArray<FHitRegionDamage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSimpleAnimData> >(m, "TArray<FSimpleAnimData>")

		.def_readwrite("Count", &TArray<FSimpleAnimData>::Count)
		.def_readwrite("Max", &TArray<FSimpleAnimData>::Max)
		.def("Num", &TArray<FSimpleAnimData>::Num)
		.def("__call__", (FSimpleAnimData& (TArray<FSimpleAnimData>::*)(int))&TArray<FSimpleAnimData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWillowAnimNode_Simple *> >(m, "TArray<UWillowAnimNode_Simple *>")

		.def_readwrite("Count", &TArray<UWillowAnimNode_Simple *>::Count)
		.def_readwrite("Max", &TArray<UWillowAnimNode_Simple *>::Max)
		.def("Num", &TArray<UWillowAnimNode_Simple *>::Num)
		.def("__call__", (UWillowAnimNode_Simple*& (TArray<UWillowAnimNode_Simple *>::*)(int))&TArray<UWillowAnimNode_Simple *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpawnedAttachedLootData> >(m, "TArray<FSpawnedAttachedLootData>")

		.def_readwrite("Count", &TArray<FSpawnedAttachedLootData>::Count)
		.def_readwrite("Max", &TArray<FSpawnedAttachedLootData>::Max)
		.def("Num", &TArray<FSpawnedAttachedLootData>::Num)
		.def("__call__", (FSpawnedAttachedLootData& (TArray<FSpawnedAttachedLootData>::*)(int))&TArray<FSpawnedAttachedLootData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLoadingMovieExceptionInfo> >(m, "TArray<FLoadingMovieExceptionInfo>")

		.def_readwrite("Count", &TArray<FLoadingMovieExceptionInfo>::Count)
		.def_readwrite("Max", &TArray<FLoadingMovieExceptionInfo>::Max)
		.def("Num", &TArray<FLoadingMovieExceptionInfo>::Num)
		.def("__call__", (FLoadingMovieExceptionInfo& (TArray<FLoadingMovieExceptionInfo>::*)(int))&TArray<FLoadingMovieExceptionInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoordinatedEffectProcess> >(m, "TArray<FCoordinatedEffectProcess>")

		.def_readwrite("Count", &TArray<FCoordinatedEffectProcess>::Count)
		.def_readwrite("Max", &TArray<FCoordinatedEffectProcess>::Max)
		.def("Num", &TArray<FCoordinatedEffectProcess>::Num)
		.def("__call__", (FCoordinatedEffectProcess& (TArray<FCoordinatedEffectProcess>::*)(int))&TArray<FCoordinatedEffectProcess>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoordinatedEffectThread> >(m, "TArray<FCoordinatedEffectThread>")

		.def_readwrite("Count", &TArray<FCoordinatedEffectThread>::Count)
		.def_readwrite("Max", &TArray<FCoordinatedEffectThread>::Max)
		.def("Num", &TArray<FCoordinatedEffectThread>::Num)
		.def("__call__", (FCoordinatedEffectThread& (TArray<FCoordinatedEffectThread>::*)(int))&TArray<FCoordinatedEffectThread>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoordinatedParticleSystemDefinition> >(m, "TArray<FCoordinatedParticleSystemDefinition>")

		.def_readwrite("Count", &TArray<FCoordinatedParticleSystemDefinition>::Count)
		.def_readwrite("Max", &TArray<FCoordinatedParticleSystemDefinition>::Max)
		.def("Num", &TArray<FCoordinatedParticleSystemDefinition>::Num)
		.def("__call__", (FCoordinatedParticleSystemDefinition& (TArray<FCoordinatedParticleSystemDefinition>::*)(int))&TArray<FCoordinatedParticleSystemDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoordinatedScalarParameter> >(m, "TArray<FCoordinatedScalarParameter>")

		.def_readwrite("Count", &TArray<FCoordinatedScalarParameter>::Count)
		.def_readwrite("Max", &TArray<FCoordinatedScalarParameter>::Max)
		.def("Num", &TArray<FCoordinatedScalarParameter>::Num)
		.def("__call__", (FCoordinatedScalarParameter& (TArray<FCoordinatedScalarParameter>::*)(int))&TArray<FCoordinatedScalarParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoordinatedVectorParameter> >(m, "TArray<FCoordinatedVectorParameter>")

		.def_readwrite("Count", &TArray<FCoordinatedVectorParameter>::Count)
		.def_readwrite("Max", &TArray<FCoordinatedVectorParameter>::Max)
		.def("Num", &TArray<FCoordinatedVectorParameter>::Num)
		.def("__call__", (FCoordinatedVectorParameter& (TArray<FCoordinatedVectorParameter>::*)(int))&TArray<FCoordinatedVectorParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoordinatedAudioDefinition> >(m, "TArray<FCoordinatedAudioDefinition>")

		.def_readwrite("Count", &TArray<FCoordinatedAudioDefinition>::Count)
		.def_readwrite("Max", &TArray<FCoordinatedAudioDefinition>::Max)
		.def("Num", &TArray<FCoordinatedAudioDefinition>::Num)
		.def("__call__", (FCoordinatedAudioDefinition& (TArray<FCoordinatedAudioDefinition>::*)(int))&TArray<FCoordinatedAudioDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FObstacleData> >(m, "TArray<FObstacleData>")

		.def_readwrite("Count", &TArray<FObstacleData>::Count)
		.def_readwrite("Max", &TArray<FObstacleData>::Max)
		.def("Num", &TArray<FObstacleData>::Num)
		.def("__call__", (FObstacleData& (TArray<FObstacleData>::*)(int))&TArray<FObstacleData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FObstaclePoint> >(m, "TArray<FObstaclePoint>")

		.def_readwrite("Count", &TArray<FObstaclePoint>::Count)
		.def_readwrite("Max", &TArray<FObstaclePoint>::Max)
		.def("Num", &TArray<FObstaclePoint>::Num)
		.def("__call__", (FObstaclePoint& (TArray<FObstaclePoint>::*)(int))&TArray<FObstaclePoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingCustomization> >(m, "TArray<FPendingCustomization>")

		.def_readwrite("Count", &TArray<FPendingCustomization>::Count)
		.def_readwrite("Max", &TArray<FPendingCustomization>::Max)
		.def("Num", &TArray<FPendingCustomization>::Num)
		.def("__call__", (FPendingCustomization& (TArray<FPendingCustomization>::*)(int))&TArray<FPendingCustomization>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UCustomizationDefinition *> >(m, "TArray<UCustomizationDefinition *>")

		.def_readwrite("Count", &TArray<UCustomizationDefinition *>::Count)
		.def_readwrite("Max", &TArray<UCustomizationDefinition *>::Max)
		.def("Num", &TArray<UCustomizationDefinition *>::Num)
		.def("__call__", (UCustomizationDefinition*& (TArray<UCustomizationDefinition *>::*)(int))&TArray<UCustomizationDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UVSSUIDefinition *> >(m, "TArray<UVSSUIDefinition *>")

		.def_readwrite("Count", &TArray<UVSSUIDefinition *>::Count)
		.def_readwrite("Max", &TArray<UVSSUIDefinition *>::Max)
		.def("Num", &TArray<UVSSUIDefinition *>::Num)
		.def("__call__", (UVSSUIDefinition*& (TArray<UVSSUIDefinition *>::*)(int))&TArray<UVSSUIDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UICustomizable *> >(m, "TArray<UICustomizable *>")

		.def_readwrite("Count", &TArray<UICustomizable *>::Count)
		.def_readwrite("Max", &TArray<UICustomizable *>::Max)
		.def("Num", &TArray<UICustomizable *>::Num)
		.def("__call__", (UICustomizable*& (TArray<UICustomizable *>::*)(int))&TArray<UICustomizable *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FProductCustomizationInfo> >(m, "TArray<FProductCustomizationInfo>")

		.def_readwrite("Count", &TArray<FProductCustomizationInfo>::Count)
		.def_readwrite("Max", &TArray<FProductCustomizationInfo>::Max)
		.def("Num", &TArray<FProductCustomizationInfo>::Num)
		.def("__call__", (FProductCustomizationInfo& (TArray<FProductCustomizationInfo>::*)(int))&TArray<FProductCustomizationInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCustomizationSizeMapping> >(m, "TArray<FCustomizationSizeMapping>")

		.def_readwrite("Count", &TArray<FCustomizationSizeMapping>::Count)
		.def_readwrite("Max", &TArray<FCustomizationSizeMapping>::Max)
		.def("Num", &TArray<FCustomizationSizeMapping>::Num)
		.def("__call__", (FCustomizationSizeMapping& (TArray<FCustomizationSizeMapping>::*)(int))&TArray<FCustomizationSizeMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpeedTravelData> >(m, "TArray<FSpeedTravelData>")

		.def_readwrite("Count", &TArray<FSpeedTravelData>::Count)
		.def_readwrite("Max", &TArray<FSpeedTravelData>::Max)
		.def("Num", &TArray<FSpeedTravelData>::Num)
		.def("__call__", (FSpeedTravelData& (TArray<FSpeedTravelData>::*)(int))&TArray<FSpeedTravelData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UCylinderComponent *> >(m, "TArray<UCylinderComponent *>")

		.def_readwrite("Count", &TArray<UCylinderComponent *>::Count)
		.def_readwrite("Max", &TArray<UCylinderComponent *>::Max)
		.def("Num", &TArray<UCylinderComponent *>::Num)
		.def("__call__", (UCylinderComponent*& (TArray<UCylinderComponent *>::*)(int))&TArray<UCylinderComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkillDefinition *> >(m, "TArray<USkillDefinition *>")

		.def_readwrite("Count", &TArray<USkillDefinition *>::Count)
		.def_readwrite("Max", &TArray<USkillDefinition *>::Max)
		.def("Num", &TArray<USkillDefinition *>::Num)
		.def("__call__", (USkillDefinition*& (TArray<USkillDefinition *>::*)(int))&TArray<USkillDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowMind *> >(m, "TArray<AWillowMind *>")

		.def_readwrite("Count", &TArray<AWillowMind *>::Count)
		.def_readwrite("Max", &TArray<AWillowMind *>::Max)
		.def("Num", &TArray<AWillowMind *>::Num)
		.def("__call__", (AWillowMind*& (TArray<AWillowMind *>::*)(int))&TArray<AWillowMind *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APopulationOpportunityDen *> >(m, "TArray<APopulationOpportunityDen *>")

		.def_readwrite("Count", &TArray<APopulationOpportunityDen *>::Count)
		.def_readwrite("Max", &TArray<APopulationOpportunityDen *>::Max)
		.def("Num", &TArray<APopulationOpportunityDen *>::Num)
		.def("__call__", (APopulationOpportunityDen*& (TArray<APopulationOpportunityDen *>::*)(int))&TArray<APopulationOpportunityDen *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowPawn *> >(m, "TArray<AWillowPawn *>")

		.def_readwrite("Count", &TArray<AWillowPawn *>::Count)
		.def_readwrite("Max", &TArray<AWillowPawn *>::Max)
		.def("Num", &TArray<AWillowPawn *>::Num)
		.def("__call__", (AWillowPawn*& (TArray<AWillowPawn *>::*)(int))&TArray<AWillowPawn *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APerch *> >(m, "TArray<APerch *>")

		.def_readwrite("Count", &TArray<APerch *>::Count)
		.def_readwrite("Max", &TArray<APerch *>::Max)
		.def("Num", &TArray<APerch *>::Num)
		.def("__call__", (APerch*& (TArray<APerch *>::*)(int))&TArray<APerch *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNodeData> >(m, "TArray<FNodeData>")

		.def_readwrite("Count", &TArray<FNodeData>::Count)
		.def_readwrite("Max", &TArray<FNodeData>::Max)
		.def("Num", &TArray<FNodeData>::Num)
		.def("__call__", (FNodeData& (TArray<FNodeData>::*)(int))&TArray<FNodeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AGearboxAIMoveNode *> >(m, "TArray<AGearboxAIMoveNode *>")

		.def_readwrite("Count", &TArray<AGearboxAIMoveNode *>::Count)
		.def_readwrite("Max", &TArray<AGearboxAIMoveNode *>::Max)
		.def("Num", &TArray<AGearboxAIMoveNode *>::Num)
		.def("__call__", (AGearboxAIMoveNode*& (TArray<AGearboxAIMoveNode *>::*)(int))&TArray<AGearboxAIMoveNode *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USpecialMoveDefinition *> >(m, "TArray<USpecialMoveDefinition *>")

		.def_readwrite("Count", &TArray<USpecialMoveDefinition *>::Count)
		.def_readwrite("Max", &TArray<USpecialMoveDefinition *>::Max)
		.def("Num", &TArray<USpecialMoveDefinition *>::Num)
		.def("__call__", (USpecialMoveDefinition*& (TArray<USpecialMoveDefinition *>::*)(int))&TArray<USpecialMoveDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPerchAnimData> >(m, "TArray<FPerchAnimData>")

		.def_readwrite("Count", &TArray<FPerchAnimData>::Count)
		.def_readwrite("Max", &TArray<FPerchAnimData>::Max)
		.def("Num", &TArray<FPerchAnimData>::Num)
		.def("__call__", (FPerchAnimData& (TArray<FPerchAnimData>::*)(int))&TArray<FPerchAnimData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxAnimDefinition *> >(m, "TArray<UGearboxAnimDefinition *>")

		.def_readwrite("Count", &TArray<UGearboxAnimDefinition *>::Count)
		.def_readwrite("Max", &TArray<UGearboxAnimDefinition *>::Max)
		.def("Num", &TArray<UGearboxAnimDefinition *>::Num)
		.def("__call__", (UGearboxAnimDefinition*& (TArray<UGearboxAnimDefinition *>::*)(int))&TArray<UGearboxAnimDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ARallyPoint *> >(m, "TArray<ARallyPoint *>")

		.def_readwrite("Count", &TArray<ARallyPoint *>::Count)
		.def_readwrite("Max", &TArray<ARallyPoint *>::Max)
		.def("Num", &TArray<ARallyPoint *>::Num)
		.def("__call__", (ARallyPoint*& (TArray<ARallyPoint *>::*)(int))&TArray<ARallyPoint *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAttackLocation *> >(m, "TArray<UAttackLocation *>")

		.def_readwrite("Count", &TArray<UAttackLocation *>::Count)
		.def_readwrite("Max", &TArray<UAttackLocation *>::Max)
		.def("Num", &TArray<UAttackLocation *>::Num)
		.def("__call__", (UAttackLocation*& (TArray<UAttackLocation *>::*)(int))&TArray<UAttackLocation *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FClanMaterialData> >(m, "TArray<FClanMaterialData>")

		.def_readwrite("Count", &TArray<FClanMaterialData>::Count)
		.def_readwrite("Max", &TArray<FClanMaterialData>::Max)
		.def("Num", &TArray<FClanMaterialData>::Num)
		.def("__call__", (FClanMaterialData& (TArray<FClanMaterialData>::*)(int))&TArray<FClanMaterialData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FClanSwitchData> >(m, "TArray<FClanSwitchData>")

		.def_readwrite("Count", &TArray<FClanSwitchData>::Count)
		.def_readwrite("Max", &TArray<FClanSwitchData>::Max)
		.def("Num", &TArray<FClanSwitchData>::Num)
		.def("__call__", (FClanSwitchData& (TArray<FClanSwitchData>::*)(int))&TArray<FClanSwitchData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRagdollDeathImpulseStruct> >(m, "TArray<FRagdollDeathImpulseStruct>")

		.def_readwrite("Count", &TArray<FRagdollDeathImpulseStruct>::Count)
		.def_readwrite("Max", &TArray<FRagdollDeathImpulseStruct>::Max)
		.def("Num", &TArray<FRagdollDeathImpulseStruct>::Num)
		.def("__call__", (FRagdollDeathImpulseStruct& (TArray<FRagdollDeathImpulseStruct>::*)(int))&TArray<FRagdollDeathImpulseStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSplineConnection> >(m, "TArray<FSplineConnection>")

		.def_readwrite("Count", &TArray<FSplineConnection>::Count)
		.def_readwrite("Max", &TArray<FSplineConnection>::Max)
		.def("Num", &TArray<FSplineConnection>::Num)
		.def("__call__", (FSplineConnection& (TArray<FSplineConnection>::*)(int))&TArray<FSplineConnection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ASplineActor *> >(m, "TArray<ASplineActor *>")

		.def_readwrite("Count", &TArray<ASplineActor *>::Count)
		.def_readwrite("Max", &TArray<ASplineActor *>::Max)
		.def("Num", &TArray<ASplineActor *>::Num)
		.def("__call__", (ASplineActor*& (TArray<ASplineActor *>::*)(int))&TArray<ASplineActor *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UStanceTypeDefinition *> >(m, "TArray<UStanceTypeDefinition *>")

		.def_readwrite("Count", &TArray<UStanceTypeDefinition *>::Count)
		.def_readwrite("Max", &TArray<UStanceTypeDefinition *>::Max)
		.def("Num", &TArray<UStanceTypeDefinition *>::Num)
		.def("__call__", (UStanceTypeDefinition*& (TArray<UStanceTypeDefinition *>::*)(int))&TArray<UStanceTypeDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USpecialMove_Motion *> >(m, "TArray<USpecialMove_Motion *>")

		.def_readwrite("Count", &TArray<USpecialMove_Motion *>::Count)
		.def_readwrite("Max", &TArray<USpecialMove_Motion *>::Max)
		.def("Num", &TArray<USpecialMove_Motion *>::Num)
		.def("__call__", (USpecialMove_Motion*& (TArray<USpecialMove_Motion *>::*)(int))&TArray<USpecialMove_Motion *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWillowImpactDefinition *> >(m, "TArray<UWillowImpactDefinition *>")

		.def_readwrite("Count", &TArray<UWillowImpactDefinition *>::Count)
		.def_readwrite("Max", &TArray<UWillowImpactDefinition *>::Max)
		.def("Num", &TArray<UWillowImpactDefinition *>::Num)
		.def("__call__", (UWillowImpactDefinition*& (TArray<UWillowImpactDefinition *>::*)(int))&TArray<UWillowImpactDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorAliasReference> >(m, "TArray<FBehaviorAliasReference>")

		.def_readwrite("Count", &TArray<FBehaviorAliasReference>::Count)
		.def_readwrite("Max", &TArray<FBehaviorAliasReference>::Max)
		.def("Num", &TArray<FBehaviorAliasReference>::Num)
		.def("__call__", (FBehaviorAliasReference& (TArray<FBehaviorAliasReference>::*)(int))&TArray<FBehaviorAliasReference>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBodyWeaponActionPostureData> >(m, "TArray<FBodyWeaponActionPostureData>")

		.def_readwrite("Count", &TArray<FBodyWeaponActionPostureData>::Count)
		.def_readwrite("Max", &TArray<FBodyWeaponActionPostureData>::Max)
		.def("Num", &TArray<FBodyWeaponActionPostureData>::Num)
		.def("__call__", (FBodyWeaponActionPostureData& (TArray<FBodyWeaponActionPostureData>::*)(int))&TArray<FBodyWeaponActionPostureData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBodyWeaponActionData> >(m, "TArray<FBodyWeaponActionData>")

		.def_readwrite("Count", &TArray<FBodyWeaponActionData>::Count)
		.def_readwrite("Max", &TArray<FBodyWeaponActionData>::Max)
		.def("Num", &TArray<FBodyWeaponActionData>::Num)
		.def("__call__", (FBodyWeaponActionData& (TArray<FBodyWeaponActionData>::*)(int))&TArray<FBodyWeaponActionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalAnimData> >(m, "TArray<FConditionalAnimData>")

		.def_readwrite("Count", &TArray<FConditionalAnimData>::Count)
		.def_readwrite("Max", &TArray<FConditionalAnimData>::Max)
		.def("Num", &TArray<FConditionalAnimData>::Num)
		.def("__call__", (FConditionalAnimData& (TArray<FConditionalAnimData>::*)(int))&TArray<FConditionalAnimData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCustomBodyHandIKHoldData> >(m, "TArray<FCustomBodyHandIKHoldData>")

		.def_readwrite("Count", &TArray<FCustomBodyHandIKHoldData>::Count)
		.def_readwrite("Max", &TArray<FCustomBodyHandIKHoldData>::Max)
		.def("Num", &TArray<FCustomBodyHandIKHoldData>::Num)
		.def("__call__", (FCustomBodyHandIKHoldData& (TArray<FCustomBodyHandIKHoldData>::*)(int))&TArray<FCustomBodyHandIKHoldData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBodyWeaponHoldDefinition *> >(m, "TArray<UBodyWeaponHoldDefinition *>")

		.def_readwrite("Count", &TArray<UBodyWeaponHoldDefinition *>::Count)
		.def_readwrite("Max", &TArray<UBodyWeaponHoldDefinition *>::Max)
		.def("Num", &TArray<UBodyWeaponHoldDefinition *>::Num)
		.def("__call__", (UBodyWeaponHoldDefinition*& (TArray<UBodyWeaponHoldDefinition *>::*)(int))&TArray<UBodyWeaponHoldDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPainDialogLine> >(m, "TArray<FPainDialogLine>")

		.def_readwrite("Count", &TArray<FPainDialogLine>::Count)
		.def_readwrite("Max", &TArray<FPainDialogLine>::Max)
		.def("Num", &TArray<FPainDialogLine>::Num)
		.def("__call__", (FPainDialogLine& (TArray<FPainDialogLine>::*)(int))&TArray<FPainDialogLine>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USpecialMove_Cringe *> >(m, "TArray<USpecialMove_Cringe *>")

		.def_readwrite("Count", &TArray<USpecialMove_Cringe *>::Count)
		.def_readwrite("Max", &TArray<USpecialMove_Cringe *>::Max)
		.def("Num", &TArray<USpecialMove_Cringe *>::Num)
		.def("__call__", (USpecialMove_Cringe*& (TArray<USpecialMove_Cringe *>::*)(int))&TArray<USpecialMove_Cringe *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCustomCringeData> >(m, "TArray<FCustomCringeData>")

		.def_readwrite("Count", &TArray<FCustomCringeData>::Count)
		.def_readwrite("Max", &TArray<FCustomCringeData>::Max)
		.def("Num", &TArray<FCustomCringeData>::Num)
		.def("__call__", (FCustomCringeData& (TArray<FCustomCringeData>::*)(int))&TArray<FCustomCringeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USpecialMove_Dodge *> >(m, "TArray<USpecialMove_Dodge *>")

		.def_readwrite("Count", &TArray<USpecialMove_Dodge *>::Count)
		.def_readwrite("Max", &TArray<USpecialMove_Dodge *>::Max)
		.def("Num", &TArray<USpecialMove_Dodge *>::Num)
		.def("__call__", (USpecialMove_Dodge*& (TArray<USpecialMove_Dodge *>::*)(int))&TArray<USpecialMove_Dodge *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBreathingLoopInfo> >(m, "TArray<FBreathingLoopInfo>")

		.def_readwrite("Count", &TArray<FBreathingLoopInfo>::Count)
		.def_readwrite("Max", &TArray<FBreathingLoopInfo>::Max)
		.def("Num", &TArray<FBreathingLoopInfo>::Num)
		.def("__call__", (FBreathingLoopInfo& (TArray<FBreathingLoopInfo>::*)(int))&TArray<FBreathingLoopInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInjuredLoopOverride> >(m, "TArray<FInjuredLoopOverride>")

		.def_readwrite("Count", &TArray<FInjuredLoopOverride>::Count)
		.def_readwrite("Max", &TArray<FInjuredLoopOverride>::Max)
		.def("Num", &TArray<FInjuredLoopOverride>::Num)
		.def("__call__", (FInjuredLoopOverride& (TArray<FInjuredLoopOverride>::*)(int))&TArray<FInjuredLoopOverride>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEmotePortraitInfo> >(m, "TArray<FEmotePortraitInfo>")

		.def_readwrite("Count", &TArray<FEmotePortraitInfo>::Count)
		.def_readwrite("Max", &TArray<FEmotePortraitInfo>::Max)
		.def("Num", &TArray<FEmotePortraitInfo>::Num)
		.def("__call__", (FEmotePortraitInfo& (TArray<FEmotePortraitInfo>::*)(int))&TArray<FEmotePortraitInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEmoteStance> >(m, "TArray<FEmoteStance>")

		.def_readwrite("Count", &TArray<FEmoteStance>::Count)
		.def_readwrite("Max", &TArray<FEmoteStance>::Max)
		.def("Num", &TArray<FEmoteStance>::Num)
		.def("__call__", (FEmoteStance& (TArray<FEmoteStance>::*)(int))&TArray<FEmoteStance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USpecialMove_Cloak *> >(m, "TArray<USpecialMove_Cloak *>")

		.def_readwrite("Count", &TArray<USpecialMove_Cloak *>::Count)
		.def_readwrite("Max", &TArray<USpecialMove_Cloak *>::Max)
		.def("Num", &TArray<USpecialMove_Cloak *>::Num)
		.def("__call__", (USpecialMove_Cloak*& (TArray<USpecialMove_Cloak *>::*)(int))&TArray<USpecialMove_Cloak *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleCrewMappingStruct> >(m, "TArray<FVehicleCrewMappingStruct>")

		.def_readwrite("Count", &TArray<FVehicleCrewMappingStruct>::Count)
		.def_readwrite("Max", &TArray<FVehicleCrewMappingStruct>::Max)
		.def("Num", &TArray<FVehicleCrewMappingStruct>::Num)
		.def("__call__", (FVehicleCrewMappingStruct& (TArray<FVehicleCrewMappingStruct>::*)(int))&TArray<FVehicleCrewMappingStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFadePickupParticle> >(m, "TArray<FFadePickupParticle>")

		.def_readwrite("Count", &TArray<FFadePickupParticle>::Count)
		.def_readwrite("Max", &TArray<FFadePickupParticle>::Max)
		.def("Num", &TArray<FFadePickupParticle>::Num)
		.def("__call__", (FFadePickupParticle& (TArray<FFadePickupParticle>::*)(int))&TArray<FFadePickupParticle>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCriticalTextMessage> >(m, "TArray<FCriticalTextMessage>")

		.def_readwrite("Count", &TArray<FCriticalTextMessage>::Count)
		.def_readwrite("Max", &TArray<FCriticalTextMessage>::Max)
		.def("Num", &TArray<FCriticalTextMessage>::Num)
		.def("__call__", (FCriticalTextMessage& (TArray<FCriticalTextMessage>::*)(int))&TArray<FCriticalTextMessage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCellContentData> >(m, "TArray<FCellContentData>")

		.def_readwrite("Count", &TArray<FCellContentData>::Count)
		.def_readwrite("Max", &TArray<FCellContentData>::Max)
		.def("Num", &TArray<FCellContentData>::Num)
		.def("__call__", (FCellContentData& (TArray<FCellContentData>::*)(int))&TArray<FCellContentData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionWidgetMessage> >(m, "TArray<FMissionWidgetMessage>")

		.def_readwrite("Count", &TArray<FMissionWidgetMessage>::Count)
		.def_readwrite("Max", &TArray<FMissionWidgetMessage>::Max)
		.def("Num", &TArray<FMissionWidgetMessage>::Num)
		.def("__call__", (FMissionWidgetMessage& (TArray<FMissionWidgetMessage>::*)(int))&TArray<FMissionWidgetMessage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMinimapObjectiveIconClip> >(m, "TArray<FMinimapObjectiveIconClip>")

		.def_readwrite("Count", &TArray<FMinimapObjectiveIconClip>::Count)
		.def_readwrite("Max", &TArray<FMinimapObjectiveIconClip>::Max)
		.def("Num", &TArray<FMinimapObjectiveIconClip>::Num)
		.def("__call__", (FMinimapObjectiveIconClip& (TArray<FMinimapObjectiveIconClip>::*)(int))&TArray<FMinimapObjectiveIconClip>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMinimapIconClip> >(m, "TArray<FMinimapIconClip>")

		.def_readwrite("Count", &TArray<FMinimapIconClip>::Count)
		.def_readwrite("Max", &TArray<FMinimapIconClip>::Max)
		.def("Num", &TArray<FMinimapIconClip>::Num)
		.def("__call__", (FMinimapIconClip& (TArray<FMinimapIconClip>::*)(int))&TArray<FMinimapIconClip>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPawnAllegiance *> >(m, "TArray<UPawnAllegiance *>")

		.def_readwrite("Count", &TArray<UPawnAllegiance *>::Count)
		.def_readwrite("Max", &TArray<UPawnAllegiance *>::Max)
		.def("Num", &TArray<UPawnAllegiance *>::Num)
		.def("__call__", (UPawnAllegiance*& (TArray<UPawnAllegiance *>::*)(int))&TArray<UPawnAllegiance *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScaledHUDElement> >(m, "TArray<FScaledHUDElement>")

		.def_readwrite("Count", &TArray<FScaledHUDElement>::Count)
		.def_readwrite("Max", &TArray<FScaledHUDElement>::Max)
		.def("Num", &TArray<FScaledHUDElement>::Num)
		.def("__call__", (FScaledHUDElement& (TArray<FScaledHUDElement>::*)(int))&TArray<FScaledHUDElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInjuredStringReplacementSet> >(m, "TArray<FInjuredStringReplacementSet>")

		.def_readwrite("Count", &TArray<FInjuredStringReplacementSet>::Count)
		.def_readwrite("Max", &TArray<FInjuredStringReplacementSet>::Max)
		.def("Num", &TArray<FInjuredStringReplacementSet>::Num)
		.def("__call__", (FInjuredStringReplacementSet& (TArray<FInjuredStringReplacementSet>::*)(int))&TArray<FInjuredStringReplacementSet>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FObjectiveIcon> >(m, "TArray<FObjectiveIcon>")

		.def_readwrite("Count", &TArray<FObjectiveIcon>::Count)
		.def_readwrite("Max", &TArray<FObjectiveIcon>::Max)
		.def("Num", &TArray<FObjectiveIcon>::Num)
		.def("__call__", (FObjectiveIcon& (TArray<FObjectiveIcon>::*)(int))&TArray<FObjectiveIcon>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerIcon> >(m, "TArray<FPlayerIcon>")

		.def_readwrite("Count", &TArray<FPlayerIcon>::Count)
		.def_readwrite("Max", &TArray<FPlayerIcon>::Max)
		.def("Num", &TArray<FPlayerIcon>::Num)
		.def("__call__", (FPlayerIcon& (TArray<FPlayerIcon>::*)(int))&TArray<FPlayerIcon>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDuelTeamPair> >(m, "TArray<FDuelTeamPair>")

		.def_readwrite("Count", &TArray<FDuelTeamPair>::Count)
		.def_readwrite("Max", &TArray<FDuelTeamPair>::Max)
		.def("Num", &TArray<FDuelTeamPair>::Num)
		.def("__call__", (FDuelTeamPair& (TArray<FDuelTeamPair>::*)(int))&TArray<FDuelTeamPair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTempWeaponStruct> >(m, "TArray<FTempWeaponStruct>")

		.def_readwrite("Count", &TArray<FTempWeaponStruct>::Count)
		.def_readwrite("Max", &TArray<FTempWeaponStruct>::Max)
		.def("Num", &TArray<FTempWeaponStruct>::Num)
		.def("__call__", (FTempWeaponStruct& (TArray<FTempWeaponStruct>::*)(int))&TArray<FTempWeaponStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTopStatData> >(m, "TArray<FTopStatData>")

		.def_readwrite("Count", &TArray<FTopStatData>::Count)
		.def_readwrite("Max", &TArray<FTopStatData>::Max)
		.def("Num", &TArray<FTopStatData>::Num)
		.def("__call__", (FTopStatData& (TArray<FTopStatData>::*)(int))&TArray<FTopStatData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLabelToLinkageMapping> >(m, "TArray<FLabelToLinkageMapping>")

		.def_readwrite("Count", &TArray<FLabelToLinkageMapping>::Count)
		.def_readwrite("Max", &TArray<FLabelToLinkageMapping>::Max)
		.def("Num", &TArray<FLabelToLinkageMapping>::Num)
		.def("__call__", (FLabelToLinkageMapping& (TArray<FLabelToLinkageMapping>::*)(int))&TArray<FLabelToLinkageMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FThirdPersonMenuView> >(m, "TArray<FThirdPersonMenuView>")

		.def_readwrite("Count", &TArray<FThirdPersonMenuView>::Count)
		.def_readwrite("Max", &TArray<FThirdPersonMenuView>::Max)
		.def("Num", &TArray<FThirdPersonMenuView>::Num)
		.def("__call__", (FThirdPersonMenuView& (TArray<FThirdPersonMenuView>::*)(int))&TArray<FThirdPersonMenuView>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPanelInfo> >(m, "TArray<FPanelInfo>")

		.def_readwrite("Count", &TArray<FPanelInfo>::Count)
		.def_readwrite("Max", &TArray<FPanelInfo>::Max)
		.def("Num", &TArray<FPanelInfo>::Num)
		.def("__call__", (FPanelInfo& (TArray<FPanelInfo>::*)(int))&TArray<FPanelInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCardInfo> >(m, "TArray<FCardInfo>")

		.def_readwrite("Count", &TArray<FCardInfo>::Count)
		.def_readwrite("Max", &TArray<FCardInfo>::Max)
		.def("Num", &TArray<FCardInfo>::Num)
		.def("__call__", (FCardInfo& (TArray<FCardInfo>::*)(int))&TArray<FCardInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCardInfoRelativeToPanel> >(m, "TArray<FCardInfoRelativeToPanel>")

		.def_readwrite("Count", &TArray<FCardInfoRelativeToPanel>::Count)
		.def_readwrite("Max", &TArray<FCardInfoRelativeToPanel>::Max)
		.def("Num", &TArray<FCardInfoRelativeToPanel>::Num)
		.def("__call__", (FCardInfoRelativeToPanel& (TArray<FCardInfoRelativeToPanel>::*)(int))&TArray<FCardInfoRelativeToPanel>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AInventory *> >(m, "TArray<AInventory *>")

		.def_readwrite("Count", &TArray<AInventory *>::Count)
		.def_readwrite("Max", &TArray<AInventory *>::Max)
		.def("Num", &TArray<AInventory *>::Num)
		.def("__call__", (AInventory*& (TArray<AInventory *>::*)(int))&TArray<AInventory *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowInventory *> >(m, "TArray<AWillowInventory *>")

		.def_readwrite("Count", &TArray<AWillowInventory *>::Count)
		.def_readwrite("Max", &TArray<AWillowInventory *>::Max)
		.def("Num", &TArray<AWillowInventory *>::Num)
		.def("__call__", (AWillowInventory*& (TArray<AWillowInventory *>::*)(int))&TArray<AWillowInventory *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FChestData> >(m, "TArray<FChestData>")

		.def_readwrite("Count", &TArray<FChestData>::Count)
		.def_readwrite("Max", &TArray<FChestData>::Max)
		.def("Num", &TArray<FChestData>::Num)
		.def("__call__", (FChestData& (TArray<FChestData>::*)(int))&TArray<FChestData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInventorySerialNumber> >(m, "TArray<FInventorySerialNumber>")

		.def_readwrite("Count", &TArray<FInventorySerialNumber>::Count)
		.def_readwrite("Max", &TArray<FInventorySerialNumber>::Max)
		.def("Num", &TArray<FInventorySerialNumber>::Num)
		.def("__call__", (FInventorySerialNumber& (TArray<FInventorySerialNumber>::*)(int))&TArray<FInventorySerialNumber>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowItem *> >(m, "TArray<AWillowItem *>")

		.def_readwrite("Count", &TArray<AWillowItem *>::Count)
		.def_readwrite("Max", &TArray<AWillowItem *>::Max)
		.def("Num", &TArray<AWillowItem *>::Num)
		.def("__call__", (AWillowItem*& (TArray<AWillowItem *>::*)(int))&TArray<AWillowItem *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowWeapon *> >(m, "TArray<AWillowWeapon *>")

		.def_readwrite("Count", &TArray<AWillowWeapon *>::Count)
		.def_readwrite("Max", &TArray<AWillowWeapon *>::Max)
		.def("Num", &TArray<AWillowWeapon *>::Num)
		.def("__call__", (AWillowWeapon*& (TArray<AWillowWeapon *>::*)(int))&TArray<AWillowWeapon *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FItemCardInfo> >(m, "TArray<FItemCardInfo>")

		.def_readwrite("Count", &TArray<FItemCardInfo>::Count)
		.def_readwrite("Max", &TArray<FItemCardInfo>::Max)
		.def("Num", &TArray<FItemCardInfo>::Num)
		.def("__call__", (FItemCardInfo& (TArray<FItemCardInfo>::*)(int))&TArray<FItemCardInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHeavyInventoryElement> >(m, "TArray<FHeavyInventoryElement>")

		.def_readwrite("Count", &TArray<FHeavyInventoryElement>::Count)
		.def_readwrite("Max", &TArray<FHeavyInventoryElement>::Max)
		.def("Num", &TArray<FHeavyInventoryElement>::Num)
		.def("__call__", (FHeavyInventoryElement& (TArray<FHeavyInventoryElement>::*)(int))&TArray<FHeavyInventoryElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSortableDataElement> >(m, "TArray<FSortableDataElement>")

		.def_readwrite("Count", &TArray<FSortableDataElement>::Count)
		.def_readwrite("Max", &TArray<FSortableDataElement>::Max)
		.def("Num", &TArray<FSortableDataElement>::Num)
		.def("__call__", (FSortableDataElement& (TArray<FSortableDataElement>::*)(int))&TArray<FSortableDataElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDirectionData> >(m, "TArray<FDirectionData>")

		.def_readwrite("Count", &TArray<FDirectionData>::Count)
		.def_readwrite("Max", &TArray<FDirectionData>::Max)
		.def("Num", &TArray<FDirectionData>::Num)
		.def("__call__", (FDirectionData& (TArray<FDirectionData>::*)(int))&TArray<FDirectionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStatusMenuMissionEligibilityData> >(m, "TArray<FStatusMenuMissionEligibilityData>")

		.def_readwrite("Count", &TArray<FStatusMenuMissionEligibilityData>::Count)
		.def_readwrite("Max", &TArray<FStatusMenuMissionEligibilityData>::Max)
		.def("Num", &TArray<FStatusMenuMissionEligibilityData>::Num)
		.def("__call__", (FStatusMenuMissionEligibilityData& (TArray<FStatusMenuMissionEligibilityData>::*)(int))&TArray<FStatusMenuMissionEligibilityData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCachedInvData> >(m, "TArray<FCachedInvData>")

		.def_readwrite("Count", &TArray<FCachedInvData>::Count)
		.def_readwrite("Max", &TArray<FCachedInvData>::Max)
		.def("Num", &TArray<FCachedInvData>::Num)
		.def("__call__", (FCachedInvData& (TArray<FCachedInvData>::*)(int))&TArray<FCachedInvData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<Fartifact_datum> >(m, "TArray<Fartifact_datum>")

		.def_readwrite("Count", &TArray<Fartifact_datum>::Count)
		.def_readwrite("Max", &TArray<Fartifact_datum>::Max)
		.def("Num", &TArray<Fartifact_datum>::Num)
		.def("__call__", (Fartifact_datum& (TArray<Fartifact_datum>::*)(int))&TArray<Fartifact_datum>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMapObjectData> >(m, "TArray<FMapObjectData>")

		.def_readwrite("Count", &TArray<FMapObjectData>::Count)
		.def_readwrite("Max", &TArray<FMapObjectData>::Max)
		.def("Num", &TArray<FMapObjectData>::Num)
		.def("__call__", (FMapObjectData& (TArray<FMapObjectData>::*)(int))&TArray<FMapObjectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSortFilterConfiguration> >(m, "TArray<FSortFilterConfiguration>")

		.def_readwrite("Count", &TArray<FSortFilterConfiguration>::Count)
		.def_readwrite("Max", &TArray<FSortFilterConfiguration>::Max)
		.def("Num", &TArray<FSortFilterConfiguration>::Num)
		.def("__call__", (FSortFilterConfiguration& (TArray<FSortFilterConfiguration>::*)(int))&TArray<FSortFilterConfiguration>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOneTimeDataElement> >(m, "TArray<FOneTimeDataElement>")

		.def_readwrite("Count", &TArray<FOneTimeDataElement>::Count)
		.def_readwrite("Max", &TArray<FOneTimeDataElement>::Max)
		.def("Num", &TArray<FOneTimeDataElement>::Num)
		.def("__call__", (FOneTimeDataElement& (TArray<FOneTimeDataElement>::*)(int))&TArray<FOneTimeDataElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGFxTextEntry> >(m, "TArray<FGFxTextEntry>")

		.def_readwrite("Count", &TArray<FGFxTextEntry>::Count)
		.def_readwrite("Max", &TArray<FGFxTextEntry>::Max)
		.def("Num", &TArray<FGFxTextEntry>::Num)
		.def("__call__", (FGFxTextEntry& (TArray<FGFxTextEntry>::*)(int))&TArray<FGFxTextEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPCContextMenuItem> >(m, "TArray<FPCContextMenuItem>")

		.def_readwrite("Count", &TArray<FPCContextMenuItem>::Count)
		.def_readwrite("Max", &TArray<FPCContextMenuItem>::Max)
		.def("Num", &TArray<FPCContextMenuItem>::Num)
		.def("__call__", (FPCContextMenuItem& (TArray<FPCContextMenuItem>::*)(int))&TArray<FPCContextMenuItem>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionRewardPresentationData> >(m, "TArray<FMissionRewardPresentationData>")

		.def_readwrite("Count", &TArray<FMissionRewardPresentationData>::Count)
		.def_readwrite("Max", &TArray<FMissionRewardPresentationData>::Max)
		.def("Num", &TArray<FMissionRewardPresentationData>::Num)
		.def("__call__", (FMissionRewardPresentationData& (TArray<FMissionRewardPresentationData>::*)(int))&TArray<FMissionRewardPresentationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerLineInfo> >(m, "TArray<FPlayerLineInfo>")

		.def_readwrite("Count", &TArray<FPlayerLineInfo>::Count)
		.def_readwrite("Max", &TArray<FPlayerLineInfo>::Max)
		.def("Num", &TArray<FPlayerLineInfo>::Num)
		.def("__call__", (FPlayerLineInfo& (TArray<FPlayerLineInfo>::*)(int))&TArray<FPlayerLineInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHUDWidget_ChallengeData> >(m, "TArray<FHUDWidget_ChallengeData>")

		.def_readwrite("Count", &TArray<FHUDWidget_ChallengeData>::Count)
		.def_readwrite("Max", &TArray<FHUDWidget_ChallengeData>::Max)
		.def("Num", &TArray<FHUDWidget_ChallengeData>::Num)
		.def("__call__", (FHUDWidget_ChallengeData& (TArray<FHUDWidget_ChallengeData>::*)(int))&TArray<FHUDWidget_ChallengeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColumnData> >(m, "TArray<FColumnData>")

		.def_readwrite("Count", &TArray<FColumnData>::Count)
		.def_readwrite("Max", &TArray<FColumnData>::Max)
		.def("Num", &TArray<FColumnData>::Num)
		.def("__call__", (FColumnData& (TArray<FColumnData>::*)(int))&TArray<FColumnData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FtMenuData> >(m, "TArray<FtMenuData>")

		.def_readwrite("Count", &TArray<FtMenuData>::Count)
		.def_readwrite("Max", &TArray<FtMenuData>::Max)
		.def("Num", &TArray<FtMenuData>::Num)
		.def("__call__", (FtMenuData& (TArray<FtMenuData>::*)(int))&TArray<FtMenuData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMenuHeaderData> >(m, "TArray<FMenuHeaderData>")

		.def_readwrite("Count", &TArray<FMenuHeaderData>::Count)
		.def_readwrite("Max", &TArray<FMenuHeaderData>::Max)
		.def("Num", &TArray<FMenuHeaderData>::Num)
		.def("__call__", (FMenuHeaderData& (TArray<FMenuHeaderData>::*)(int))&TArray<FMenuHeaderData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugConsoleCommand> >(m, "TArray<FDebugConsoleCommand>")

		.def_readwrite("Count", &TArray<FDebugConsoleCommand>::Count)
		.def_readwrite("Max", &TArray<FDebugConsoleCommand>::Max)
		.def("Num", &TArray<FDebugConsoleCommand>::Num)
		.def("__call__", (FDebugConsoleCommand& (TArray<FDebugConsoleCommand>::*)(int))&TArray<FDebugConsoleCommand>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColumnLayoutData> >(m, "TArray<FColumnLayoutData>")

		.def_readwrite("Count", &TArray<FColumnLayoutData>::Count)
		.def_readwrite("Max", &TArray<FColumnLayoutData>::Max)
		.def("Num", &TArray<FColumnLayoutData>::Num)
		.def("__call__", (FColumnLayoutData& (TArray<FColumnLayoutData>::*)(int))&TArray<FColumnLayoutData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNetworkChannelData> >(m, "TArray<FNetworkChannelData>")

		.def_readwrite("Count", &TArray<FNetworkChannelData>::Count)
		.def_readwrite("Max", &TArray<FNetworkChannelData>::Max)
		.def("Num", &TArray<FNetworkChannelData>::Num)
		.def("__call__", (FNetworkChannelData& (TArray<FNetworkChannelData>::*)(int))&TArray<FNetworkChannelData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FItemBuilderData> >(m, "TArray<FItemBuilderData>")

		.def_readwrite("Count", &TArray<FItemBuilderData>::Count)
		.def_readwrite("Max", &TArray<FItemBuilderData>::Max)
		.def("Num", &TArray<FItemBuilderData>::Num)
		.def("__call__", (FItemBuilderData& (TArray<FItemBuilderData>::*)(int))&TArray<FItemBuilderData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FItemBuilderBalanceDefinition> >(m, "TArray<FItemBuilderBalanceDefinition>")

		.def_readwrite("Count", &TArray<FItemBuilderBalanceDefinition>::Count)
		.def_readwrite("Max", &TArray<FItemBuilderBalanceDefinition>::Max)
		.def("Num", &TArray<FItemBuilderBalanceDefinition>::Num)
		.def("__call__", (FItemBuilderBalanceDefinition& (TArray<FItemBuilderBalanceDefinition>::*)(int))&TArray<FItemBuilderBalanceDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGearBuilderWeightedInventoryPart> >(m, "TArray<FGearBuilderWeightedInventoryPart>")

		.def_readwrite("Count", &TArray<FGearBuilderWeightedInventoryPart>::Count)
		.def_readwrite("Max", &TArray<FGearBuilderWeightedInventoryPart>::Max)
		.def("Num", &TArray<FGearBuilderWeightedInventoryPart>::Num)
		.def("__call__", (FGearBuilderWeightedInventoryPart& (TArray<FGearBuilderWeightedInventoryPart>::*)(int))&TArray<FGearBuilderWeightedInventoryPart>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGearBuilderWeightedWeaponPart> >(m, "TArray<FGearBuilderWeightedWeaponPart>")

		.def_readwrite("Count", &TArray<FGearBuilderWeightedWeaponPart>::Count)
		.def_readwrite("Max", &TArray<FGearBuilderWeightedWeaponPart>::Max)
		.def("Num", &TArray<FGearBuilderWeightedWeaponPart>::Num)
		.def("__call__", (FGearBuilderWeightedWeaponPart& (TArray<FGearBuilderWeightedWeaponPart>::*)(int))&TArray<FGearBuilderWeightedWeaponPart>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGearBuilderCustomizationUsageData> >(m, "TArray<FGearBuilderCustomizationUsageData>")

		.def_readwrite("Count", &TArray<FGearBuilderCustomizationUsageData>::Count)
		.def_readwrite("Max", &TArray<FGearBuilderCustomizationUsageData>::Max)
		.def("Num", &TArray<FGearBuilderCustomizationUsageData>::Num)
		.def("__call__", (FGearBuilderCustomizationUsageData& (TArray<FGearBuilderCustomizationUsageData>::*)(int))&TArray<FGearBuilderCustomizationUsageData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGearBuilderCustomizationData> >(m, "TArray<FGearBuilderCustomizationData>")

		.def_readwrite("Count", &TArray<FGearBuilderCustomizationData>::Count)
		.def_readwrite("Max", &TArray<FGearBuilderCustomizationData>::Max)
		.def("Num", &TArray<FGearBuilderCustomizationData>::Num)
		.def("__call__", (FGearBuilderCustomizationData& (TArray<FGearBuilderCustomizationData>::*)(int))&TArray<FGearBuilderCustomizationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UObjectReferencer *> >(m, "TArray<UObjectReferencer *>")

		.def_readwrite("Count", &TArray<UObjectReferencer *>::Count)
		.def_readwrite("Max", &TArray<UObjectReferencer *>::Max)
		.def("Num", &TArray<UObjectReferencer *>::Num)
		.def("__call__", (UObjectReferencer*& (TArray<UObjectReferencer *>::*)(int))&TArray<UObjectReferencer *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowPlayerController *> >(m, "TArray<AWillowPlayerController *>")

		.def_readwrite("Count", &TArray<AWillowPlayerController *>::Count)
		.def_readwrite("Max", &TArray<AWillowPlayerController *>::Max)
		.def("Num", &TArray<AWillowPlayerController *>::Num)
		.def("__call__", (AWillowPlayerController*& (TArray<AWillowPlayerController *>::*)(int))&TArray<AWillowPlayerController *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleGameStageGradeWeightData> >(m, "TArray<FVehicleGameStageGradeWeightData>")

		.def_readwrite("Count", &TArray<FVehicleGameStageGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FVehicleGameStageGradeWeightData>::Max)
		.def("Num", &TArray<FVehicleGameStageGradeWeightData>::Num)
		.def("__call__", (FVehicleGameStageGradeWeightData& (TArray<FVehicleGameStageGradeWeightData>::*)(int))&TArray<FVehicleGameStageGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FItemPoolInfo> >(m, "TArray<FItemPoolInfo>")

		.def_readwrite("Count", &TArray<FItemPoolInfo>::Count)
		.def_readwrite("Max", &TArray<FItemPoolInfo>::Max)
		.def("Num", &TArray<FItemPoolInfo>::Num)
		.def("__call__", (FItemPoolInfo& (TArray<FItemPoolInfo>::*)(int))&TArray<FItemPoolInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UItemPoolListDefinition *> >(m, "TArray<UItemPoolListDefinition *>")

		.def_readwrite("Count", &TArray<UItemPoolListDefinition *>::Count)
		.def_readwrite("Max", &TArray<UItemPoolListDefinition *>::Max)
		.def("Num", &TArray<UItemPoolListDefinition *>::Num)
		.def("__call__", (UItemPoolListDefinition*& (TArray<UItemPoolListDefinition *>::*)(int))&TArray<UItemPoolListDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleDefaultCrewStruct> >(m, "TArray<FVehicleDefaultCrewStruct>")

		.def_readwrite("Count", &TArray<FVehicleDefaultCrewStruct>::Count)
		.def_readwrite("Max", &TArray<FVehicleDefaultCrewStruct>::Max)
		.def("Num", &TArray<FVehicleDefaultCrewStruct>::Num)
		.def("__call__", (FVehicleDefaultCrewStruct& (TArray<FVehicleDefaultCrewStruct>::*)(int))&TArray<FVehicleDefaultCrewStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkillTreeBranchDefinition *> >(m, "TArray<USkillTreeBranchDefinition *>")

		.def_readwrite("Count", &TArray<USkillTreeBranchDefinition *>::Count)
		.def_readwrite("Max", &TArray<USkillTreeBranchDefinition *>::Max)
		.def("Num", &TArray<USkillTreeBranchDefinition *>::Num)
		.def("__call__", (USkillTreeBranchDefinition*& (TArray<USkillTreeBranchDefinition *>::*)(int))&TArray<USkillTreeBranchDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTier> >(m, "TArray<FTier>")

		.def_readwrite("Count", &TArray<FTier>::Count)
		.def_readwrite("Max", &TArray<FTier>::Max)
		.def("Num", &TArray<FTier>::Num)
		.def("__call__", (FTier& (TArray<FTier>::*)(int))&TArray<FTier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTierLayout> >(m, "TArray<FTierLayout>")

		.def_readwrite("Count", &TArray<FTierLayout>::Count)
		.def_readwrite("Max", &TArray<FTierLayout>::Max)
		.def("Num", &TArray<FTierLayout>::Num)
		.def("__call__", (FTierLayout& (TArray<FTierLayout>::*)(int))&TArray<FTierLayout>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowProjectile *> >(m, "TArray<AWillowProjectile *>")

		.def_readwrite("Count", &TArray<AWillowProjectile *>::Count)
		.def_readwrite("Max", &TArray<AWillowProjectile *>::Max)
		.def("Num", &TArray<AWillowProjectile *>::Num)
		.def("__call__", (AWillowProjectile*& (TArray<AWillowProjectile *>::*)(int))&TArray<AWillowProjectile *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowPickup *> >(m, "TArray<AWillowPickup *>")

		.def_readwrite("Count", &TArray<AWillowPickup *>::Count)
		.def_readwrite("Max", &TArray<AWillowPickup *>::Max)
		.def("Num", &TArray<AWillowPickup *>::Num)
		.def("__call__", (AWillowPickup*& (TArray<AWillowPickup *>::*)(int))&TArray<AWillowPickup *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowVehicle *> >(m, "TArray<AWillowVehicle *>")

		.def_readwrite("Count", &TArray<AWillowVehicle *>::Count)
		.def_readwrite("Max", &TArray<AWillowVehicle *>::Max)
		.def("Num", &TArray<AWillowVehicle *>::Num)
		.def("__call__", (AWillowVehicle*& (TArray<AWillowVehicle *>::*)(int))&TArray<AWillowVehicle *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleCrewAnimSetMapping> >(m, "TArray<FVehicleCrewAnimSetMapping>")

		.def_readwrite("Count", &TArray<FVehicleCrewAnimSetMapping>::Count)
		.def_readwrite("Max", &TArray<FVehicleCrewAnimSetMapping>::Max)
		.def("Num", &TArray<FVehicleCrewAnimSetMapping>::Num)
		.def("__call__", (FVehicleCrewAnimSetMapping& (TArray<FVehicleCrewAnimSetMapping>::*)(int))&TArray<FVehicleCrewAnimSetMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowBoundaryTurret *> >(m, "TArray<AWillowBoundaryTurret *>")

		.def_readwrite("Count", &TArray<AWillowBoundaryTurret *>::Count)
		.def_readwrite("Max", &TArray<AWillowBoundaryTurret *>::Max)
		.def("Num", &TArray<AWillowBoundaryTurret *>::Num)
		.def("__call__", (AWillowBoundaryTurret*& (TArray<AWillowBoundaryTurret *>::*)(int))&TArray<AWillowBoundaryTurret *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowPlayerPawn *> >(m, "TArray<AWillowPlayerPawn *>")

		.def_readwrite("Count", &TArray<AWillowPlayerPawn *>::Count)
		.def_readwrite("Max", &TArray<AWillowPlayerPawn *>::Max)
		.def("Num", &TArray<AWillowPlayerPawn *>::Num)
		.def("__call__", (AWillowPlayerPawn*& (TArray<AWillowPlayerPawn *>::*)(int))&TArray<AWillowPlayerPawn *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNPCList> >(m, "TArray<FNPCList>")

		.def_readwrite("Count", &TArray<FNPCList>::Count)
		.def_readwrite("Max", &TArray<FNPCList>::Max)
		.def("Num", &TArray<FNPCList>::Num)
		.def("__call__", (FNPCList& (TArray<FNPCList>::*)(int))&TArray<FNPCList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSourceObjectData> >(m, "TArray<FSourceObjectData>")

		.def_readwrite("Count", &TArray<FSourceObjectData>::Count)
		.def_readwrite("Max", &TArray<FSourceObjectData>::Max)
		.def("Num", &TArray<FSourceObjectData>::Num)
		.def("__call__", (FSourceObjectData& (TArray<FSourceObjectData>::*)(int))&TArray<FSourceObjectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageOnlyOnceData> >(m, "TArray<FDamageOnlyOnceData>")

		.def_readwrite("Count", &TArray<FDamageOnlyOnceData>::Count)
		.def_readwrite("Max", &TArray<FDamageOnlyOnceData>::Max)
		.def("Num", &TArray<FDamageOnlyOnceData>::Num)
		.def("__call__", (FDamageOnlyOnceData& (TArray<FDamageOnlyOnceData>::*)(int))&TArray<FDamageOnlyOnceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowSpectatorPoint *> >(m, "TArray<AWillowSpectatorPoint *>")

		.def_readwrite("Count", &TArray<AWillowSpectatorPoint *>::Count)
		.def_readwrite("Max", &TArray<AWillowSpectatorPoint *>::Max)
		.def("Num", &TArray<AWillowSpectatorPoint *>::Num)
		.def("__call__", (AWillowSpectatorPoint*& (TArray<AWillowSpectatorPoint *>::*)(int))&TArray<AWillowSpectatorPoint *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCurrencyPresentation> >(m, "TArray<FCurrencyPresentation>")

		.def_readwrite("Count", &TArray<FCurrencyPresentation>::Count)
		.def_readwrite("Max", &TArray<FCurrencyPresentation>::Max)
		.def("Num", &TArray<FCurrencyPresentation>::Num)
		.def("__call__", (FCurrencyPresentation& (TArray<FCurrencyPresentation>::*)(int))&TArray<FCurrencyPresentation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSKULibrarySet> >(m, "TArray<FSKULibrarySet>")

		.def_readwrite("Count", &TArray<FSKULibrarySet>::Count)
		.def_readwrite("Max", &TArray<FSKULibrarySet>::Max)
		.def("Num", &TArray<FSKULibrarySet>::Num)
		.def("__call__", (FSKULibrarySet& (TArray<FSKULibrarySet>::*)(int))&TArray<FSKULibrarySet>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSKURuntimeLibrarySet> >(m, "TArray<FSKURuntimeLibrarySet>")

		.def_readwrite("Count", &TArray<FSKURuntimeLibrarySet>::Count)
		.def_readwrite("Max", &TArray<FSKURuntimeLibrarySet>::Max)
		.def("Num", &TArray<FSKURuntimeLibrarySet>::Num)
		.def("__call__", (FSKURuntimeLibrarySet& (TArray<FSKURuntimeLibrarySet>::*)(int))&TArray<FSKURuntimeLibrarySet>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPackageAssetSublibrary *> >(m, "TArray<UPackageAssetSublibrary *>")

		.def_readwrite("Count", &TArray<UPackageAssetSublibrary *>::Count)
		.def_readwrite("Max", &TArray<UPackageAssetSublibrary *>::Max)
		.def("Num", &TArray<UPackageAssetSublibrary *>::Num)
		.def("__call__", (UPackageAssetSublibrary*& (TArray<UPackageAssetSublibrary *>::*)(int))&TArray<UPackageAssetSublibrary *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNameBasedObjectPath> >(m, "TArray<FNameBasedObjectPath>")

		.def_readwrite("Count", &TArray<FNameBasedObjectPath>::Count)
		.def_readwrite("Max", &TArray<FNameBasedObjectPath>::Max)
		.def("Num", &TArray<FNameBasedObjectPath>::Num)
		.def("__call__", (FNameBasedObjectPath& (TArray<FNameBasedObjectPath>::*)(int))&TArray<FNameBasedObjectPath>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDLCLegacyPlayerClassIdentifierDefinition *> >(m, "TArray<UDLCLegacyPlayerClassIdentifierDefinition *>")

		.def_readwrite("Count", &TArray<UDLCLegacyPlayerClassIdentifierDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDLCLegacyPlayerClassIdentifierDefinition *>::Max)
		.def("Num", &TArray<UDLCLegacyPlayerClassIdentifierDefinition *>::Num)
		.def("__call__", (UDLCLegacyPlayerClassIdentifierDefinition*& (TArray<UDLCLegacyPlayerClassIdentifierDefinition *>::*)(int))&TArray<UDLCLegacyPlayerClassIdentifierDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLegacyCustomizationItemData> >(m, "TArray<FLegacyCustomizationItemData>")

		.def_readwrite("Count", &TArray<FLegacyCustomizationItemData>::Count)
		.def_readwrite("Max", &TArray<FLegacyCustomizationItemData>::Max)
		.def("Num", &TArray<FLegacyCustomizationItemData>::Num)
		.def("__call__", (FLegacyCustomizationItemData& (TArray<FLegacyCustomizationItemData>::*)(int))&TArray<FLegacyCustomizationItemData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBalanceModifierDefinition *> >(m, "TArray<UBalanceModifierDefinition *>")

		.def_readwrite("Count", &TArray<UBalanceModifierDefinition *>::Count)
		.def_readwrite("Max", &TArray<UBalanceModifierDefinition *>::Max)
		.def("Num", &TArray<UBalanceModifierDefinition *>::Num)
		.def("__call__", (UBalanceModifierDefinition*& (TArray<UBalanceModifierDefinition *>::*)(int))&TArray<UBalanceModifierDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInputContextDefinition *> >(m, "TArray<UInputContextDefinition *>")

		.def_readwrite("Count", &TArray<UInputContextDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInputContextDefinition *>::Max)
		.def("Num", &TArray<UInputContextDefinition *>::Num)
		.def("__call__", (UInputContextDefinition*& (TArray<UInputContextDefinition *>::*)(int))&TArray<UInputContextDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInputActionDefinition *> >(m, "TArray<UInputActionDefinition *>")

		.def_readwrite("Count", &TArray<UInputActionDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInputActionDefinition *>::Max)
		.def("Num", &TArray<UInputActionDefinition *>::Num)
		.def("__call__", (UInputActionDefinition*& (TArray<UInputActionDefinition *>::*)(int))&TArray<UInputActionDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInputSetDefinition *> >(m, "TArray<UInputSetDefinition *>")

		.def_readwrite("Count", &TArray<UInputSetDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInputSetDefinition *>::Max)
		.def("Num", &TArray<UInputSetDefinition *>::Num)
		.def("__call__", (UInputSetDefinition*& (TArray<UInputSetDefinition *>::*)(int))&TArray<UInputSetDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputAxisData> >(m, "TArray<FInputAxisData>")

		.def_readwrite("Count", &TArray<FInputAxisData>::Count)
		.def_readwrite("Max", &TArray<FInputAxisData>::Max)
		.def("Num", &TArray<FInputAxisData>::Num)
		.def("__call__", (FInputAxisData& (TArray<FInputAxisData>::*)(int))&TArray<FInputAxisData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputDeviceAxisData> >(m, "TArray<FInputDeviceAxisData>")

		.def_readwrite("Count", &TArray<FInputDeviceAxisData>::Count)
		.def_readwrite("Max", &TArray<FInputDeviceAxisData>::Max)
		.def("Num", &TArray<FInputDeviceAxisData>::Num)
		.def("__call__", (FInputDeviceAxisData& (TArray<FInputDeviceAxisData>::*)(int))&TArray<FInputDeviceAxisData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputDeviceButtonData> >(m, "TArray<FInputDeviceButtonData>")

		.def_readwrite("Count", &TArray<FInputDeviceButtonData>::Count)
		.def_readwrite("Max", &TArray<FInputDeviceButtonData>::Max)
		.def("Num", &TArray<FInputDeviceButtonData>::Num)
		.def("__call__", (FInputDeviceButtonData& (TArray<FInputDeviceButtonData>::*)(int))&TArray<FInputDeviceButtonData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeviceLookAxisData> >(m, "TArray<FDeviceLookAxisData>")

		.def_readwrite("Count", &TArray<FDeviceLookAxisData>::Count)
		.def_readwrite("Max", &TArray<FDeviceLookAxisData>::Max)
		.def("Num", &TArray<FDeviceLookAxisData>::Num)
		.def("__call__", (FDeviceLookAxisData& (TArray<FDeviceLookAxisData>::*)(int))&TArray<FDeviceLookAxisData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputButtonData> >(m, "TArray<FInputButtonData>")

		.def_readwrite("Count", &TArray<FInputButtonData>::Count)
		.def_readwrite("Max", &TArray<FInputButtonData>::Max)
		.def("Num", &TArray<FInputButtonData>::Num)
		.def("__call__", (FInputButtonData& (TArray<FInputButtonData>::*)(int))&TArray<FInputButtonData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputDeviceButtonAddress> >(m, "TArray<FInputDeviceButtonAddress>")

		.def_readwrite("Count", &TArray<FInputDeviceButtonAddress>::Count)
		.def_readwrite("Max", &TArray<FInputDeviceButtonAddress>::Max)
		.def("Num", &TArray<FInputDeviceButtonAddress>::Num)
		.def("__call__", (FInputDeviceButtonAddress& (TArray<FInputDeviceButtonAddress>::*)(int))&TArray<FInputDeviceButtonAddress>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKeyRebindingData> >(m, "TArray<FKeyRebindingData>")

		.def_readwrite("Count", &TArray<FKeyRebindingData>::Count)
		.def_readwrite("Max", &TArray<FKeyRebindingData>::Max)
		.def("Num", &TArray<FKeyRebindingData>::Num)
		.def("__call__", (FKeyRebindingData& (TArray<FKeyRebindingData>::*)(int))&TArray<FKeyRebindingData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKillSkillDuration> >(m, "TArray<FKillSkillDuration>")

		.def_readwrite("Count", &TArray<FKillSkillDuration>::Count)
		.def_readwrite("Max", &TArray<FKillSkillDuration>::Max)
		.def("Num", &TArray<FKillSkillDuration>::Num)
		.def("__call__", (FKillSkillDuration& (TArray<FKillSkillDuration>::*)(int))&TArray<FKillSkillDuration>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageTypeExpModifier> >(m, "TArray<FDamageTypeExpModifier>")

		.def_readwrite("Count", &TArray<FDamageTypeExpModifier>::Count)
		.def_readwrite("Max", &TArray<FDamageTypeExpModifier>::Max)
		.def("Num", &TArray<FDamageTypeExpModifier>::Num)
		.def("__call__", (FDamageTypeExpModifier& (TArray<FDamageTypeExpModifier>::*)(int))&TArray<FDamageTypeExpModifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelBasedExpScale> >(m, "TArray<FLevelBasedExpScale>")

		.def_readwrite("Count", &TArray<FLevelBasedExpScale>::Count)
		.def_readwrite("Max", &TArray<FLevelBasedExpScale>::Max)
		.def("Num", &TArray<FLevelBasedExpScale>::Num)
		.def("__call__", (FLevelBasedExpScale& (TArray<FLevelBasedExpScale>::*)(int))&TArray<FLevelBasedExpScale>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExpAwardWeight> >(m, "TArray<FExpAwardWeight>")

		.def_readwrite("Count", &TArray<FExpAwardWeight>::Count)
		.def_readwrite("Max", &TArray<FExpAwardWeight>::Max)
		.def("Num", &TArray<FExpAwardWeight>::Num)
		.def("__call__", (FExpAwardWeight& (TArray<FExpAwardWeight>::*)(int))&TArray<FExpAwardWeight>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UAkEvent *> >(m, "TArray<UAkEvent *>")

		.def_readwrite("Count", &TArray<UAkEvent *>::Count)
		.def_readwrite("Max", &TArray<UAkEvent *>::Max)
		.def("Num", &TArray<UAkEvent *>::Num)
		.def("__call__", (UAkEvent*& (TArray<UAkEvent *>::*)(int))&TArray<UAkEvent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRarityLevelColor> >(m, "TArray<FRarityLevelColor>")

		.def_readwrite("Count", &TArray<FRarityLevelColor>::Count)
		.def_readwrite("Max", &TArray<FRarityLevelColor>::Max)
		.def("Num", &TArray<FRarityLevelColor>::Num)
		.def("__call__", (FRarityLevelColor& (TArray<FRarityLevelColor>::*)(int))&TArray<FRarityLevelColor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayThroughData> >(m, "TArray<FPlayThroughData>")

		.def_readwrite("Count", &TArray<FPlayThroughData>::Count)
		.def_readwrite("Max", &TArray<FPlayThroughData>::Max)
		.def("Num", &TArray<FPlayThroughData>::Num)
		.def("__call__", (FPlayThroughData& (TArray<FPlayThroughData>::*)(int))&TArray<FPlayThroughData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGameBalanceDefinition *> >(m, "TArray<UGameBalanceDefinition *>")

		.def_readwrite("Count", &TArray<UGameBalanceDefinition *>::Count)
		.def_readwrite("Max", &TArray<UGameBalanceDefinition *>::Max)
		.def("Num", &TArray<UGameBalanceDefinition *>::Num)
		.def("__call__", (UGameBalanceDefinition*& (TArray<UGameBalanceDefinition *>::*)(int))&TArray<UGameBalanceDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRegionBalanceData> >(m, "TArray<FRegionBalanceData>")

		.def_readwrite("Count", &TArray<FRegionBalanceData>::Count)
		.def_readwrite("Max", &TArray<FRegionBalanceData>::Max)
		.def("Num", &TArray<FRegionBalanceData>::Num)
		.def("__call__", (FRegionBalanceData& (TArray<FRegionBalanceData>::*)(int))&TArray<FRegionBalanceData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionStateBalanceAdjustment> >(m, "TArray<FMissionStateBalanceAdjustment>")

		.def_readwrite("Count", &TArray<FMissionStateBalanceAdjustment>::Count)
		.def_readwrite("Max", &TArray<FMissionStateBalanceAdjustment>::Max)
		.def("Num", &TArray<FMissionStateBalanceAdjustment>::Num)
		.def("__call__", (FMissionStateBalanceAdjustment& (TArray<FMissionStateBalanceAdjustment>::*)(int))&TArray<FMissionStateBalanceAdjustment>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStatusEffectTypeCommonProperties> >(m, "TArray<FStatusEffectTypeCommonProperties>")

		.def_readwrite("Count", &TArray<FStatusEffectTypeCommonProperties>::Count)
		.def_readwrite("Max", &TArray<FStatusEffectTypeCommonProperties>::Max)
		.def("Num", &TArray<FStatusEffectTypeCommonProperties>::Num)
		.def("__call__", (FStatusEffectTypeCommonProperties& (TArray<FStatusEffectTypeCommonProperties>::*)(int))&TArray<FStatusEffectTypeCommonProperties>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UVehicleFamilyDefinition *> >(m, "TArray<UVehicleFamilyDefinition *>")

		.def_readwrite("Count", &TArray<UVehicleFamilyDefinition *>::Count)
		.def_readwrite("Max", &TArray<UVehicleFamilyDefinition *>::Max)
		.def("Num", &TArray<UVehicleFamilyDefinition *>::Num)
		.def("__call__", (UVehicleFamilyDefinition*& (TArray<UVehicleFamilyDefinition *>::*)(int))&TArray<UVehicleFamilyDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTextMarkupEntry> >(m, "TArray<FTextMarkupEntry>")

		.def_readwrite("Count", &TArray<FTextMarkupEntry>::Count)
		.def_readwrite("Max", &TArray<FTextMarkupEntry>::Max)
		.def("Num", &TArray<FTextMarkupEntry>::Num)
		.def("__call__", (FTextMarkupEntry& (TArray<FTextMarkupEntry>::*)(int))&TArray<FTextMarkupEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeveloperData> >(m, "TArray<FDeveloperData>")

		.def_readwrite("Count", &TArray<FDeveloperData>::Count)
		.def_readwrite("Max", &TArray<FDeveloperData>::Max)
		.def("Num", &TArray<FDeveloperData>::Num)
		.def("__call__", (FDeveloperData& (TArray<FDeveloperData>::*)(int))&TArray<FDeveloperData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPerkData> >(m, "TArray<FPerkData>")

		.def_readwrite("Count", &TArray<FPerkData>::Count)
		.def_readwrite("Max", &TArray<FPerkData>::Max)
		.def("Num", &TArray<FPerkData>::Num)
		.def("__call__", (FPerkData& (TArray<FPerkData>::*)(int))&TArray<FPerkData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UKeyedItemPoolDefinition *> >(m, "TArray<UKeyedItemPoolDefinition *>")

		.def_readwrite("Count", &TArray<UKeyedItemPoolDefinition *>::Count)
		.def_readwrite("Max", &TArray<UKeyedItemPoolDefinition *>::Max)
		.def("Num", &TArray<UKeyedItemPoolDefinition *>::Num)
		.def("__call__", (UKeyedItemPoolDefinition*& (TArray<UKeyedItemPoolDefinition *>::*)(int))&TArray<UKeyedItemPoolDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAchievementUnlockData> >(m, "TArray<FAchievementUnlockData>")

		.def_readwrite("Count", &TArray<FAchievementUnlockData>::Count)
		.def_readwrite("Max", &TArray<FAchievementUnlockData>::Max)
		.def("Num", &TArray<FAchievementUnlockData>::Num)
		.def("__call__", (FAchievementUnlockData& (TArray<FAchievementUnlockData>::*)(int))&TArray<FAchievementUnlockData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSlaughterMissionChain> >(m, "TArray<FSlaughterMissionChain>")

		.def_readwrite("Count", &TArray<FSlaughterMissionChain>::Count)
		.def_readwrite("Max", &TArray<FSlaughterMissionChain>::Max)
		.def("Num", &TArray<FSlaughterMissionChain>::Num)
		.def("__call__", (FSlaughterMissionChain& (TArray<FSlaughterMissionChain>::*)(int))&TArray<FSlaughterMissionChain>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputContextData> >(m, "TArray<FInputContextData>")

		.def_readwrite("Count", &TArray<FInputContextData>::Count)
		.def_readwrite("Max", &TArray<FInputContextData>::Max)
		.def("Num", &TArray<FInputContextData>::Num)
		.def("__call__", (FInputContextData& (TArray<FInputContextData>::*)(int))&TArray<FInputContextData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInputDeviceDefinition *> >(m, "TArray<UInputDeviceDefinition *>")

		.def_readwrite("Count", &TArray<UInputDeviceDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInputDeviceDefinition *>::Max)
		.def("Num", &TArray<UInputDeviceDefinition *>::Num)
		.def("__call__", (UInputDeviceDefinition*& (TArray<UInputDeviceDefinition *>::*)(int))&TArray<UInputDeviceDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInputRemappingDefinition *> >(m, "TArray<UInputRemappingDefinition *>")

		.def_readwrite("Count", &TArray<UInputRemappingDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInputRemappingDefinition *>::Max)
		.def("Num", &TArray<UInputRemappingDefinition *>::Num)
		.def("__call__", (UInputRemappingDefinition*& (TArray<UInputRemappingDefinition *>::*)(int))&TArray<UInputRemappingDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputRemappingAxisData> >(m, "TArray<FInputRemappingAxisData>")

		.def_readwrite("Count", &TArray<FInputRemappingAxisData>::Count)
		.def_readwrite("Max", &TArray<FInputRemappingAxisData>::Max)
		.def("Num", &TArray<FInputRemappingAxisData>::Num)
		.def("__call__", (FInputRemappingAxisData& (TArray<FInputRemappingAxisData>::*)(int))&TArray<FInputRemappingAxisData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInputRemappingButtonData> >(m, "TArray<FInputRemappingButtonData>")

		.def_readwrite("Count", &TArray<FInputRemappingButtonData>::Count)
		.def_readwrite("Max", &TArray<FInputRemappingButtonData>::Max)
		.def("Num", &TArray<FInputRemappingButtonData>::Num)
		.def("__call__", (FInputRemappingButtonData& (TArray<FInputRemappingButtonData>::*)(int))&TArray<FInputRemappingButtonData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UMarketingUnlockDefinition *> >(m, "TArray<UMarketingUnlockDefinition *>")

		.def_readwrite("Count", &TArray<UMarketingUnlockDefinition *>::Count)
		.def_readwrite("Max", &TArray<UMarketingUnlockDefinition *>::Max)
		.def("Num", &TArray<UMarketingUnlockDefinition *>::Num)
		.def("__call__", (UMarketingUnlockDefinition*& (TArray<UMarketingUnlockDefinition *>::*)(int))&TArray<UMarketingUnlockDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVector2D> >(m, "TArray<FVector2D>")

		.def_readwrite("Count", &TArray<FVector2D>::Count)
		.def_readwrite("Max", &TArray<FVector2D>::Max)
		.def("Num", &TArray<FVector2D>::Num)
		.def("__call__", (FVector2D& (TArray<FVector2D>::*)(int))&TArray<FVector2D>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBadassRewardDefinition *> >(m, "TArray<UBadassRewardDefinition *>")

		.def_readwrite("Count", &TArray<UBadassRewardDefinition *>::Count)
		.def_readwrite("Max", &TArray<UBadassRewardDefinition *>::Max)
		.def("Num", &TArray<UBadassRewardDefinition *>::Num)
		.def("__call__", (UBadassRewardDefinition*& (TArray<UBadassRewardDefinition *>::*)(int))&TArray<UBadassRewardDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBlackMarketUpgradeDefinition *> >(m, "TArray<UBlackMarketUpgradeDefinition *>")

		.def_readwrite("Count", &TArray<UBlackMarketUpgradeDefinition *>::Count)
		.def_readwrite("Max", &TArray<UBlackMarketUpgradeDefinition *>::Max)
		.def("Num", &TArray<UBlackMarketUpgradeDefinition *>::Num)
		.def("__call__", (UBlackMarketUpgradeDefinition*& (TArray<UBlackMarketUpgradeDefinition *>::*)(int))&TArray<UBlackMarketUpgradeDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerSaveData> >(m, "TArray<FPlayerSaveData>")

		.def_readwrite("Count", &TArray<FPlayerSaveData>::Count)
		.def_readwrite("Max", &TArray<FPlayerSaveData>::Max)
		.def("Num", &TArray<FPlayerSaveData>::Num)
		.def("__call__", (FPlayerSaveData& (TArray<FPlayerSaveData>::*)(int))&TArray<FPlayerSaveData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTombstoneData> >(m, "TArray<FTombstoneData>")

		.def_readwrite("Count", &TArray<FTombstoneData>::Count)
		.def_readwrite("Max", &TArray<FTombstoneData>::Max)
		.def("Num", &TArray<FTombstoneData>::Num)
		.def("__call__", (FTombstoneData& (TArray<FTombstoneData>::*)(int))&TArray<FTombstoneData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLightProjectile> >(m, "TArray<FLightProjectile>")

		.def_readwrite("Count", &TArray<FLightProjectile>::Count)
		.def_readwrite("Max", &TArray<FLightProjectile>::Max)
		.def("Num", &TArray<FLightProjectile>::Num)
		.def("__call__", (FLightProjectile& (TArray<FLightProjectile>::*)(int))&TArray<FLightProjectile>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBeamState> >(m, "TArray<FBeamState>")

		.def_readwrite("Count", &TArray<FBeamState>::Count)
		.def_readwrite("Max", &TArray<FBeamState>::Max)
		.def("Num", &TArray<FBeamState>::Num)
		.def("__call__", (FBeamState& (TArray<FBeamState>::*)(int))&TArray<FBeamState>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCameraLerpKeyFrame> >(m, "TArray<FCameraLerpKeyFrame>")

		.def_readwrite("Count", &TArray<FCameraLerpKeyFrame>::Count)
		.def_readwrite("Max", &TArray<FCameraLerpKeyFrame>::Max)
		.def("Num", &TArray<FCameraLerpKeyFrame>::Num)
		.def("__call__", (FCameraLerpKeyFrame& (TArray<FCameraLerpKeyFrame>::*)(int))&TArray<FCameraLerpKeyFrame>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USpecialMove_Vehicle *> >(m, "TArray<USpecialMove_Vehicle *>")

		.def_readwrite("Count", &TArray<USpecialMove_Vehicle *>::Count)
		.def_readwrite("Max", &TArray<USpecialMove_Vehicle *>::Max)
		.def("Num", &TArray<USpecialMove_Vehicle *>::Num)
		.def("__call__", (USpecialMove_Vehicle*& (TArray<USpecialMove_Vehicle *>::*)(int))&TArray<USpecialMove_Vehicle *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleSeatInstance> >(m, "TArray<FVehicleSeatInstance>")

		.def_readwrite("Count", &TArray<FVehicleSeatInstance>::Count)
		.def_readwrite("Max", &TArray<FVehicleSeatInstance>::Max)
		.def("Num", &TArray<FVehicleSeatInstance>::Num)
		.def("__call__", (FVehicleSeatInstance& (TArray<FVehicleSeatInstance>::*)(int))&TArray<FVehicleSeatInstance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWillowSkelControl_TurretConstrained *> >(m, "TArray<UWillowSkelControl_TurretConstrained *>")

		.def_readwrite("Count", &TArray<UWillowSkelControl_TurretConstrained *>::Count)
		.def_readwrite("Max", &TArray<UWillowSkelControl_TurretConstrained *>::Max)
		.def("Num", &TArray<UWillowSkelControl_TurretConstrained *>::Num)
		.def("__call__", (UWillowSkelControl_TurretConstrained*& (TArray<UWillowSkelControl_TurretConstrained *>::*)(int))&TArray<UWillowSkelControl_TurretConstrained *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTimePosition> >(m, "TArray<FTimePosition>")

		.def_readwrite("Count", &TArray<FTimePosition>::Count)
		.def_readwrite("Max", &TArray<FTimePosition>::Max)
		.def("Num", &TArray<FTimePosition>::Num)
		.def("__call__", (FTimePosition& (TArray<FTimePosition>::*)(int))&TArray<FTimePosition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVirtualSeatStruct> >(m, "TArray<FVirtualSeatStruct>")

		.def_readwrite("Count", &TArray<FVirtualSeatStruct>::Count)
		.def_readwrite("Max", &TArray<FVirtualSeatStruct>::Max)
		.def("Num", &TArray<FVirtualSeatStruct>::Num)
		.def("__call__", (FVirtualSeatStruct& (TArray<FVirtualSeatStruct>::*)(int))&TArray<FVirtualSeatStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleEffect> >(m, "TArray<FVehicleEffect>")

		.def_readwrite("Count", &TArray<FVehicleEffect>::Count)
		.def_readwrite("Max", &TArray<FVehicleEffect>::Max)
		.def("Num", &TArray<FVehicleEffect>::Num)
		.def("__call__", (FVehicleEffect& (TArray<FVehicleEffect>::*)(int))&TArray<FVehicleEffect>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFDamageMorphTargets> >(m, "TArray<FFDamageMorphTargets>")

		.def_readwrite("Count", &TArray<FFDamageMorphTargets>::Count)
		.def_readwrite("Max", &TArray<FFDamageMorphTargets>::Max)
		.def("Num", &TArray<FFDamageMorphTargets>::Num)
		.def("__call__", (FFDamageMorphTargets& (TArray<FFDamageMorphTargets>::*)(int))&TArray<FFDamageMorphTargets>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSuspensionSound> >(m, "TArray<FSuspensionSound>")

		.def_readwrite("Count", &TArray<FSuspensionSound>::Count)
		.def_readwrite("Max", &TArray<FSuspensionSound>::Max)
		.def("Num", &TArray<FSuspensionSound>::Num)
		.def("__call__", (FSuspensionSound& (TArray<FSuspensionSound>::*)(int))&TArray<FSuspensionSound>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWillowPursuitGrid *> >(m, "TArray<UWillowPursuitGrid *>")

		.def_readwrite("Count", &TArray<UWillowPursuitGrid *>::Count)
		.def_readwrite("Max", &TArray<UWillowPursuitGrid *>::Max)
		.def("Num", &TArray<UWillowPursuitGrid *>::Num)
		.def("__call__", (UWillowPursuitGrid*& (TArray<UWillowPursuitGrid *>::*)(int))&TArray<UWillowPursuitGrid *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPursuitNode> >(m, "TArray<FPursuitNode>")

		.def_readwrite("Count", &TArray<FPursuitNode>::Count)
		.def_readwrite("Max", &TArray<FPursuitNode>::Max)
		.def("Num", &TArray<FPursuitNode>::Num)
		.def("__call__", (FPursuitNode& (TArray<FPursuitNode>::*)(int))&TArray<FPursuitNode>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPursuitNodeData> >(m, "TArray<FPursuitNodeData>")

		.def_readwrite("Count", &TArray<FPursuitNodeData>::Count)
		.def_readwrite("Max", &TArray<FPursuitNodeData>::Max)
		.def("Num", &TArray<FPursuitNodeData>::Num)
		.def("__call__", (FPursuitNodeData& (TArray<FPursuitNodeData>::*)(int))&TArray<FPursuitNodeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleHandlingWheelData> >(m, "TArray<FVehicleHandlingWheelData>")

		.def_readwrite("Count", &TArray<FVehicleHandlingWheelData>::Count)
		.def_readwrite("Max", &TArray<FVehicleHandlingWheelData>::Max)
		.def("Num", &TArray<FVehicleHandlingWheelData>::Num)
		.def("__call__", (FVehicleHandlingWheelData& (TArray<FVehicleHandlingWheelData>::*)(int))&TArray<FVehicleHandlingWheelData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFishtailingInfo> >(m, "TArray<FFishtailingInfo>")

		.def_readwrite("Count", &TArray<FFishtailingInfo>::Count)
		.def_readwrite("Max", &TArray<FFishtailingInfo>::Max)
		.def("Num", &TArray<FFishtailingInfo>::Num)
		.def("__call__", (FFishtailingInfo& (TArray<FFishtailingInfo>::*)(int))&TArray<FFishtailingInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageTypeBySpeedStruct> >(m, "TArray<FDamageTypeBySpeedStruct>")

		.def_readwrite("Count", &TArray<FDamageTypeBySpeedStruct>::Count)
		.def_readwrite("Max", &TArray<FDamageTypeBySpeedStruct>::Max)
		.def("Num", &TArray<FDamageTypeBySpeedStruct>::Num)
		.def("__call__", (FDamageTypeBySpeedStruct& (TArray<FDamageTypeBySpeedStruct>::*)(int))&TArray<FDamageTypeBySpeedStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleSeatDefinition> >(m, "TArray<FVehicleSeatDefinition>")

		.def_readwrite("Count", &TArray<FVehicleSeatDefinition>::Count)
		.def_readwrite("Max", &TArray<FVehicleSeatDefinition>::Max)
		.def("Num", &TArray<FVehicleSeatDefinition>::Num)
		.def("__call__", (FVehicleSeatDefinition& (TArray<FVehicleSeatDefinition>::*)(int))&TArray<FVehicleSeatDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UItemPoolDefinition *> >(m, "TArray<UItemPoolDefinition *>")

		.def_readwrite("Count", &TArray<UItemPoolDefinition *>::Count)
		.def_readwrite("Max", &TArray<UItemPoolDefinition *>::Max)
		.def("Num", &TArray<UItemPoolDefinition *>::Num)
		.def("__call__", (UItemPoolDefinition*& (TArray<UItemPoolDefinition *>::*)(int))&TArray<UItemPoolDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionStatusData> >(m, "TArray<FMissionStatusData>")

		.def_readwrite("Count", &TArray<FMissionStatusData>::Count)
		.def_readwrite("Max", &TArray<FMissionStatusData>::Max)
		.def("Num", &TArray<FMissionStatusData>::Num)
		.def("__call__", (FMissionStatusData& (TArray<FMissionStatusData>::*)(int))&TArray<FMissionStatusData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInventoryBalanceDefinition *> >(m, "TArray<UInventoryBalanceDefinition *>")

		.def_readwrite("Count", &TArray<UInventoryBalanceDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInventoryBalanceDefinition *>::Max)
		.def("Num", &TArray<UInventoryBalanceDefinition *>::Num)
		.def("__call__", (UInventoryBalanceDefinition*& (TArray<UInventoryBalanceDefinition *>::*)(int))&TArray<UInventoryBalanceDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcMissionStatusData> >(m, "TArray<FUnloadableDlcMissionStatusData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcMissionStatusData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcMissionStatusData>::Max)
		.def("Num", &TArray<FUnloadableDlcMissionStatusData>::Num)
		.def("__call__", (FUnloadableDlcMissionStatusData& (TArray<FUnloadableDlcMissionStatusData>::*)(int))&TArray<FUnloadableDlcMissionStatusData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingMissionRewardData> >(m, "TArray<FPendingMissionRewardData>")

		.def_readwrite("Count", &TArray<FPendingMissionRewardData>::Count)
		.def_readwrite("Max", &TArray<FPendingMissionRewardData>::Max)
		.def("Num", &TArray<FPendingMissionRewardData>::Num)
		.def("__call__", (FPendingMissionRewardData& (TArray<FPendingMissionRewardData>::*)(int))&TArray<FPendingMissionRewardData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcPendingRewardData> >(m, "TArray<FUnloadableDlcPendingRewardData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcPendingRewardData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcPendingRewardData>::Max)
		.def("Num", &TArray<FUnloadableDlcPendingRewardData>::Num)
		.def("__call__", (FUnloadableDlcPendingRewardData& (TArray<FUnloadableDlcPendingRewardData>::*)(int))&TArray<FUnloadableDlcPendingRewardData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExpansionData> >(m, "TArray<FExpansionData>")

		.def_readwrite("Count", &TArray<FExpansionData>::Count)
		.def_readwrite("Max", &TArray<FExpansionData>::Max)
		.def("Num", &TArray<FExpansionData>::Num)
		.def("__call__", (FExpansionData& (TArray<FExpansionData>::*)(int))&TArray<FExpansionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcChallengeData> >(m, "TArray<FUnloadableDlcChallengeData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcChallengeData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcChallengeData>::Max)
		.def("Num", &TArray<FUnloadableDlcChallengeData>::Num)
		.def("__call__", (FUnloadableDlcChallengeData& (TArray<FUnloadableDlcChallengeData>::*)(int))&TArray<FUnloadableDlcChallengeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRegionGameStageData> >(m, "TArray<FRegionGameStageData>")

		.def_readwrite("Count", &TArray<FRegionGameStageData>::Count)
		.def_readwrite("Max", &TArray<FRegionGameStageData>::Max)
		.def("Num", &TArray<FRegionGameStageData>::Num)
		.def("__call__", (FRegionGameStageData& (TArray<FRegionGameStageData>::*)(int))&TArray<FRegionGameStageData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcRegionGameStageData> >(m, "TArray<FUnloadableDlcRegionGameStageData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcRegionGameStageData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcRegionGameStageData>::Max)
		.def("Num", &TArray<FUnloadableDlcRegionGameStageData>::Num)
		.def("__call__", (FUnloadableDlcRegionGameStageData& (TArray<FUnloadableDlcRegionGameStageData>::*)(int))&TArray<FUnloadableDlcRegionGameStageData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWorldDiscoveryData> >(m, "TArray<FWorldDiscoveryData>")

		.def_readwrite("Count", &TArray<FWorldDiscoveryData>::Count)
		.def_readwrite("Max", &TArray<FWorldDiscoveryData>::Max)
		.def("Num", &TArray<FWorldDiscoveryData>::Num)
		.def("__call__", (FWorldDiscoveryData& (TArray<FWorldDiscoveryData>::*)(int))&TArray<FWorldDiscoveryData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOneOffLevelChallengeData> >(m, "TArray<FOneOffLevelChallengeData>")

		.def_readwrite("Count", &TArray<FOneOffLevelChallengeData>::Count)
		.def_readwrite("Max", &TArray<FOneOffLevelChallengeData>::Max)
		.def("Num", &TArray<FOneOffLevelChallengeData>::Num)
		.def("__call__", (FOneOffLevelChallengeData& (TArray<FOneOffLevelChallengeData>::*)(int))&TArray<FOneOffLevelChallengeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBankSlot> >(m, "TArray<FBankSlot>")

		.def_readwrite("Count", &TArray<FBankSlot>::Count)
		.def_readwrite("Max", &TArray<FBankSlot>::Max)
		.def("Num", &TArray<FBankSlot>::Num)
		.def("__call__", (FBankSlot& (TArray<FBankSlot>::*)(int))&TArray<FBankSlot>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLockoutData> >(m, "TArray<FLockoutData>")

		.def_readwrite("Count", &TArray<FLockoutData>::Count)
		.def_readwrite("Max", &TArray<FLockoutData>::Max)
		.def("Num", &TArray<FLockoutData>::Num)
		.def("__call__", (FLockoutData& (TArray<FLockoutData>::*)(int))&TArray<FLockoutData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnloadableDlcLockoutData> >(m, "TArray<FUnloadableDlcLockoutData>")

		.def_readwrite("Count", &TArray<FUnloadableDlcLockoutData>::Count)
		.def_readwrite("Max", &TArray<FUnloadableDlcLockoutData>::Max)
		.def("Num", &TArray<FUnloadableDlcLockoutData>::Num)
		.def("__call__", (FUnloadableDlcLockoutData& (TArray<FUnloadableDlcLockoutData>::*)(int))&TArray<FUnloadableDlcLockoutData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FChosenVehicleCustomization> >(m, "TArray<FChosenVehicleCustomization>")

		.def_readwrite("Count", &TArray<FChosenVehicleCustomization>::Count)
		.def_readwrite("Max", &TArray<FChosenVehicleCustomization>::Max)
		.def("Num", &TArray<FChosenVehicleCustomization>::Num)
		.def("__call__", (FChosenVehicleCustomization& (TArray<FChosenVehicleCustomization>::*)(int))&TArray<FChosenVehicleCustomization>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerClassAchievementUnlockData> >(m, "TArray<FPlayerClassAchievementUnlockData>")

		.def_readwrite("Count", &TArray<FPlayerClassAchievementUnlockData>::Count)
		.def_readwrite("Max", &TArray<FPlayerClassAchievementUnlockData>::Max)
		.def("Num", &TArray<FPlayerClassAchievementUnlockData>::Num)
		.def("__call__", (FPlayerClassAchievementUnlockData& (TArray<FPlayerClassAchievementUnlockData>::*)(int))&TArray<FPlayerClassAchievementUnlockData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerSkillTreeBranchData> >(m, "TArray<FPlayerSkillTreeBranchData>")

		.def_readwrite("Count", &TArray<FPlayerSkillTreeBranchData>::Count)
		.def_readwrite("Max", &TArray<FPlayerSkillTreeBranchData>::Max)
		.def("Num", &TArray<FPlayerSkillTreeBranchData>::Num)
		.def("__call__", (FPlayerSkillTreeBranchData& (TArray<FPlayerSkillTreeBranchData>::*)(int))&TArray<FPlayerSkillTreeBranchData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerSkillTreeTierData> >(m, "TArray<FPlayerSkillTreeTierData>")

		.def_readwrite("Count", &TArray<FPlayerSkillTreeTierData>::Count)
		.def_readwrite("Max", &TArray<FPlayerSkillTreeTierData>::Max)
		.def("Num", &TArray<FPlayerSkillTreeTierData>::Num)
		.def("__call__", (FPlayerSkillTreeTierData& (TArray<FPlayerSkillTreeTierData>::*)(int))&TArray<FPlayerSkillTreeTierData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerSkillTreeSkillData> >(m, "TArray<FPlayerSkillTreeSkillData>")

		.def_readwrite("Count", &TArray<FPlayerSkillTreeSkillData>::Count)
		.def_readwrite("Max", &TArray<FPlayerSkillTreeSkillData>::Max)
		.def("Num", &TArray<FPlayerSkillTreeSkillData>::Num)
		.def("__call__", (FPlayerSkillTreeSkillData& (TArray<FPlayerSkillTreeSkillData>::*)(int))&TArray<FPlayerSkillTreeSkillData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UISkillTreeListener *> >(m, "TArray<UISkillTreeListener *>")

		.def_readwrite("Count", &TArray<UISkillTreeListener *>::Count)
		.def_readwrite("Max", &TArray<UISkillTreeListener *>::Max)
		.def("Num", &TArray<UISkillTreeListener *>::Num)
		.def("__call__", (UISkillTreeListener*& (TArray<UISkillTreeListener *>::*)(int))&TArray<UISkillTreeListener *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FShopItemData> >(m, "TArray<FShopItemData>")

		.def_readwrite("Count", &TArray<FShopItemData>::Count)
		.def_readwrite("Max", &TArray<FShopItemData>::Max)
		.def("Num", &TArray<FShopItemData>::Num)
		.def("__call__", (FShopItemData& (TArray<FShopItemData>::*)(int))&TArray<FShopItemData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AAIDebugDummyBase *> >(m, "TArray<AAIDebugDummyBase *>")

		.def_readwrite("Count", &TArray<AAIDebugDummyBase *>::Count)
		.def_readwrite("Max", &TArray<AAIDebugDummyBase *>::Max)
		.def("Num", &TArray<AAIDebugDummyBase *>::Num)
		.def("__call__", (AAIDebugDummyBase*& (TArray<AAIDebugDummyBase *>::*)(int))&TArray<AAIDebugDummyBase *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkelMeshActorControlTarget> >(m, "TArray<FSkelMeshActorControlTarget>")

		.def_readwrite("Count", &TArray<FSkelMeshActorControlTarget>::Count)
		.def_readwrite("Max", &TArray<FSkelMeshActorControlTarget>::Max)
		.def("Num", &TArray<FSkelMeshActorControlTarget>::Num)
		.def("__call__", (FSkelMeshActorControlTarget& (TArray<FSkelMeshActorControlTarget>::*)(int))&TArray<FSkelMeshActorControlTarget>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPostProcessOverlayInfo> >(m, "TArray<FPostProcessOverlayInfo>")

		.def_readwrite("Count", &TArray<FPostProcessOverlayInfo>::Count)
		.def_readwrite("Max", &TArray<FPostProcessOverlayInfo>::Max)
		.def("Num", &TArray<FPostProcessOverlayInfo>::Num)
		.def("__call__", (FPostProcessOverlayInfo& (TArray<FPostProcessOverlayInfo>::*)(int))&TArray<FPostProcessOverlayInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPostProcessChainRecord> >(m, "TArray<FPostProcessChainRecord>")

		.def_readwrite("Count", &TArray<FPostProcessChainRecord>::Count)
		.def_readwrite("Max", &TArray<FPostProcessChainRecord>::Max)
		.def("Num", &TArray<FPostProcessChainRecord>::Num)
		.def("__call__", (FPostProcessChainRecord& (TArray<FPostProcessChainRecord>::*)(int))&TArray<FPostProcessChainRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMaterialEffectModifier> >(m, "TArray<FMaterialEffectModifier>")

		.def_readwrite("Count", &TArray<FMaterialEffectModifier>::Count)
		.def_readwrite("Max", &TArray<FMaterialEffectModifier>::Max)
		.def("Num", &TArray<FMaterialEffectModifier>::Num)
		.def("__call__", (FMaterialEffectModifier& (TArray<FMaterialEffectModifier>::*)(int))&TArray<FMaterialEffectModifier>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWillowStatProperty> >(m, "TArray<FWillowStatProperty>")

		.def_readwrite("Count", &TArray<FWillowStatProperty>::Count)
		.def_readwrite("Max", &TArray<FWillowStatProperty>::Max)
		.def("Num", &TArray<FWillowStatProperty>::Num)
		.def("__call__", (FWillowStatProperty& (TArray<FWillowStatProperty>::*)(int))&TArray<FWillowStatProperty>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpeedKillData> >(m, "TArray<FSpeedKillData>")

		.def_readwrite("Count", &TArray<FSpeedKillData>::Count)
		.def_readwrite("Max", &TArray<FSpeedKillData>::Max)
		.def("Num", &TArray<FSpeedKillData>::Num)
		.def("__call__", (FSpeedKillData& (TArray<FSpeedKillData>::*)(int))&TArray<FSpeedKillData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDialogBoxLayout> >(m, "TArray<FDialogBoxLayout>")

		.def_readwrite("Count", &TArray<FDialogBoxLayout>::Count)
		.def_readwrite("Max", &TArray<FDialogBoxLayout>::Max)
		.def("Num", &TArray<FDialogBoxLayout>::Num)
		.def("__call__", (FDialogBoxLayout& (TArray<FDialogBoxLayout>::*)(int))&TArray<FDialogBoxLayout>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDialogBoxButton> >(m, "TArray<FDialogBoxButton>")

		.def_readwrite("Count", &TArray<FDialogBoxButton>::Count)
		.def_readwrite("Max", &TArray<FDialogBoxButton>::Max)
		.def("Num", &TArray<FDialogBoxButton>::Num)
		.def("__call__", (FDialogBoxButton& (TArray<FDialogBoxButton>::*)(int))&TArray<FDialogBoxButton>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ADroppedPickup *> >(m, "TArray<ADroppedPickup *>")

		.def_readwrite("Count", &TArray<ADroppedPickup *>::Count)
		.def_readwrite("Max", &TArray<ADroppedPickup *>::Max)
		.def("Num", &TArray<ADroppedPickup *>::Num)
		.def("__call__", (ADroppedPickup*& (TArray<ADroppedPickup *>::*)(int))&TArray<ADroppedPickup *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScreenParticleRecord> >(m, "TArray<FScreenParticleRecord>")

		.def_readwrite("Count", &TArray<FScreenParticleRecord>::Count)
		.def_readwrite("Max", &TArray<FScreenParticleRecord>::Max)
		.def("Num", &TArray<FScreenParticleRecord>::Num)
		.def("__call__", (FScreenParticleRecord& (TArray<FScreenParticleRecord>::*)(int))&TArray<FScreenParticleRecord>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMissionPlaythroughData> >(m, "TArray<FMissionPlaythroughData>")

		.def_readwrite("Count", &TArray<FMissionPlaythroughData>::Count)
		.def_readwrite("Max", &TArray<FMissionPlaythroughData>::Max)
		.def("Num", &TArray<FMissionPlaythroughData>::Num)
		.def("__call__", (FMissionPlaythroughData& (TArray<FMissionPlaythroughData>::*)(int))&TArray<FMissionPlaythroughData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMenuItemCallback> >(m, "TArray<FMenuItemCallback>")

		.def_readwrite("Count", &TArray<FMenuItemCallback>::Count)
		.def_readwrite("Max", &TArray<FMenuItemCallback>::Max)
		.def("Num", &TArray<FMenuItemCallback>::Num)
		.def("__call__", (FMenuItemCallback& (TArray<FMenuItemCallback>::*)(int))&TArray<FMenuItemCallback>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APlayerStandIn *> >(m, "TArray<APlayerStandIn *>")

		.def_readwrite("Count", &TArray<APlayerStandIn *>::Count)
		.def_readwrite("Max", &TArray<APlayerStandIn *>::Max)
		.def("Num", &TArray<APlayerStandIn *>::Num)
		.def("__call__", (APlayerStandIn*& (TArray<APlayerStandIn *>::*)(int))&TArray<APlayerStandIn *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTaggedGFxMovie> >(m, "TArray<FTaggedGFxMovie>")

		.def_readwrite("Count", &TArray<FTaggedGFxMovie>::Count)
		.def_readwrite("Max", &TArray<FTaggedGFxMovie>::Max)
		.def("Num", &TArray<FTaggedGFxMovie>::Num)
		.def("__call__", (FTaggedGFxMovie& (TArray<FTaggedGFxMovie>::*)(int))&TArray<FTaggedGFxMovie>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FChallengeData> >(m, "TArray<FChallengeData>")

		.def_readwrite("Count", &TArray<FChallengeData>::Count)
		.def_readwrite("Max", &TArray<FChallengeData>::Max)
		.def("Num", &TArray<FChallengeData>::Num)
		.def("__call__", (FChallengeData& (TArray<FChallengeData>::*)(int))&TArray<FChallengeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCustomizationUnlockData> >(m, "TArray<FCustomizationUnlockData>")

		.def_readwrite("Count", &TArray<FCustomizationUnlockData>::Count)
		.def_readwrite("Max", &TArray<FCustomizationUnlockData>::Max)
		.def("Num", &TArray<FCustomizationUnlockData>::Num)
		.def("__call__", (FCustomizationUnlockData& (TArray<FCustomizationUnlockData>::*)(int))&TArray<FCustomizationUnlockData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPauseTimerData> >(m, "TArray<FPauseTimerData>")

		.def_readwrite("Count", &TArray<FPauseTimerData>::Count)
		.def_readwrite("Max", &TArray<FPauseTimerData>::Max)
		.def("Num", &TArray<FPauseTimerData>::Num)
		.def("__call__", (FPauseTimerData& (TArray<FPauseTimerData>::*)(int))&TArray<FPauseTimerData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingClientTrainingMessage> >(m, "TArray<FPendingClientTrainingMessage>")

		.def_readwrite("Count", &TArray<FPendingClientTrainingMessage>::Count)
		.def_readwrite("Max", &TArray<FPendingClientTrainingMessage>::Max)
		.def("Num", &TArray<FPendingClientTrainingMessage>::Num)
		.def("__call__", (FPendingClientTrainingMessage& (TArray<FPendingClientTrainingMessage>::*)(int))&TArray<FPendingClientTrainingMessage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingMissionRewardsData> >(m, "TArray<FPendingMissionRewardsData>")

		.def_readwrite("Count", &TArray<FPendingMissionRewardsData>::Count)
		.def_readwrite("Max", &TArray<FPendingMissionRewardsData>::Max)
		.def("Num", &TArray<FPendingMissionRewardsData>::Num)
		.def("__call__", (FPendingMissionRewardsData& (TArray<FPendingMissionRewardsData>::*)(int))&TArray<FPendingMissionRewardsData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGoldenKeySource> >(m, "TArray<FGoldenKeySource>")

		.def_readwrite("Count", &TArray<FGoldenKeySource>::Count)
		.def_readwrite("Max", &TArray<FGoldenKeySource>::Max)
		.def("Num", &TArray<FGoldenKeySource>::Num)
		.def("__call__", (FGoldenKeySource& (TArray<FGoldenKeySource>::*)(int))&TArray<FGoldenKeySource>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNewsArticle> >(m, "TArray<FNewsArticle>")

		.def_readwrite("Count", &TArray<FNewsArticle>::Count)
		.def_readwrite("Max", &TArray<FNewsArticle>::Max)
		.def("Num", &TArray<FNewsArticle>::Num)
		.def("__call__", (FNewsArticle& (TArray<FNewsArticle>::*)(int))&TArray<FNewsArticle>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FServiceParameterResult> >(m, "TArray<FServiceParameterResult>")

		.def_readwrite("Count", &TArray<FServiceParameterResult>::Count)
		.def_readwrite("Max", &TArray<FServiceParameterResult>::Max)
		.def("Num", &TArray<FServiceParameterResult>::Num)
		.def("__call__", (FServiceParameterResult& (TArray<FServiceParameterResult>::*)(int))&TArray<FServiceParameterResult>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxAccountEntitlement *> >(m, "TArray<UGearboxAccountEntitlement *>")

		.def_readwrite("Count", &TArray<UGearboxAccountEntitlement *>::Count)
		.def_readwrite("Max", &TArray<UGearboxAccountEntitlement *>::Max)
		.def("Num", &TArray<UGearboxAccountEntitlement *>::Num)
		.def("__call__", (UGearboxAccountEntitlement*& (TArray<UGearboxAccountEntitlement *>::*)(int))&TArray<UGearboxAccountEntitlement *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxAccountOffer *> >(m, "TArray<UGearboxAccountOffer *>")

		.def_readwrite("Count", &TArray<UGearboxAccountOffer *>::Count)
		.def_readwrite("Max", &TArray<UGearboxAccountOffer *>::Max)
		.def("Num", &TArray<UGearboxAccountOffer *>::Num)
		.def("__call__", (UGearboxAccountOffer*& (TArray<UGearboxAccountOffer *>::*)(int))&TArray<UGearboxAccountOffer *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USparkServiceConfiguration *> >(m, "TArray<USparkServiceConfiguration *>")

		.def_readwrite("Count", &TArray<USparkServiceConfiguration *>::Count)
		.def_readwrite("Max", &TArray<USparkServiceConfiguration *>::Max)
		.def("Num", &TArray<USparkServiceConfiguration *>::Num)
		.def("__call__", (USparkServiceConfiguration*& (TArray<USparkServiceConfiguration *>::*)(int))&TArray<USparkServiceConfiguration *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEntitlementResult> >(m, "TArray<FEntitlementResult>")

		.def_readwrite("Count", &TArray<FEntitlementResult>::Count)
		.def_readwrite("Max", &TArray<FEntitlementResult>::Max)
		.def("Num", &TArray<FEntitlementResult>::Num)
		.def("__call__", (FEntitlementResult& (TArray<FEntitlementResult>::*)(int))&TArray<FEntitlementResult>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOfferResult> >(m, "TArray<FOfferResult>")

		.def_readwrite("Count", &TArray<FOfferResult>::Count)
		.def_readwrite("Max", &TArray<FOfferResult>::Max)
		.def("Num", &TArray<FOfferResult>::Num)
		.def("__call__", (FOfferResult& (TArray<FOfferResult>::*)(int))&TArray<FOfferResult>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FServiceResult> >(m, "TArray<FServiceResult>")

		.def_readwrite("Count", &TArray<FServiceResult>::Count)
		.def_readwrite("Max", &TArray<FServiceResult>::Max)
		.def("Num", &TArray<FServiceResult>::Num)
		.def("__call__", (FServiceResult& (TArray<FServiceResult>::*)(int))&TArray<FServiceResult>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UJsonObject *> >(m, "TArray<UJsonObject *>")

		.def_readwrite("Count", &TArray<UJsonObject *>::Count)
		.def_readwrite("Max", &TArray<UJsonObject *>::Max)
		.def("Num", &TArray<UJsonObject *>::Num)
		.def("__call__", (UJsonObject*& (TArray<UJsonObject *>::*)(int))&TArray<UJsonObject *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLoadCharacterData> >(m, "TArray<FLoadCharacterData>")

		.def_readwrite("Count", &TArray<FLoadCharacterData>::Count)
		.def_readwrite("Max", &TArray<FLoadCharacterData>::Max)
		.def("Num", &TArray<FLoadCharacterData>::Num)
		.def("__call__", (FLoadCharacterData& (TArray<FLoadCharacterData>::*)(int))&TArray<FLoadCharacterData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTestMapsListDatum> >(m, "TArray<FTestMapsListDatum>")

		.def_readwrite("Count", &TArray<FTestMapsListDatum>::Count)
		.def_readwrite("Max", &TArray<FTestMapsListDatum>::Max)
		.def("Num", &TArray<FTestMapsListDatum>::Num)
		.def("__call__", (FTestMapsListDatum& (TArray<FTestMapsListDatum>::*)(int))&TArray<FTestMapsListDatum>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDataProviderInfo> >(m, "TArray<FDataProviderInfo>")

		.def_readwrite("Count", &TArray<FDataProviderInfo>::Count)
		.def_readwrite("Max", &TArray<FDataProviderInfo>::Max)
		.def("Num", &TArray<FDataProviderInfo>::Num)
		.def("__call__", (FDataProviderInfo& (TArray<FDataProviderInfo>::*)(int))&TArray<FDataProviderInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSystemOption> >(m, "TArray<FSystemOption>")

		.def_readwrite("Count", &TArray<FSystemOption>::Count)
		.def_readwrite("Max", &TArray<FSystemOption>::Max)
		.def("Num", &TArray<FSystemOption>::Num)
		.def("__call__", (FSystemOption& (TArray<FSystemOption>::*)(int))&TArray<FSystemOption>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FResolution> >(m, "TArray<FResolution>")

		.def_readwrite("Count", &TArray<FResolution>::Count)
		.def_readwrite("Max", &TArray<FResolution>::Max)
		.def("Num", &TArray<FResolution>::Num)
		.def("__call__", (FResolution& (TArray<FResolution>::*)(int))&TArray<FResolution>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDescriptionEntry> >(m, "TArray<FDescriptionEntry>")

		.def_readwrite("Count", &TArray<FDescriptionEntry>::Count)
		.def_readwrite("Max", &TArray<FDescriptionEntry>::Max)
		.def("Num", &TArray<FDescriptionEntry>::Num)
		.def("__call__", (FDescriptionEntry& (TArray<FDescriptionEntry>::*)(int))&TArray<FDescriptionEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FResultEntry> >(m, "TArray<FResultEntry>")

		.def_readwrite("Count", &TArray<FResultEntry>::Count)
		.def_readwrite("Max", &TArray<FResultEntry>::Max)
		.def("Num", &TArray<FResultEntry>::Num)
		.def("__call__", (FResultEntry& (TArray<FResultEntry>::*)(int))&TArray<FResultEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMarketPlaceFilter> >(m, "TArray<FMarketPlaceFilter>")

		.def_readwrite("Count", &TArray<FMarketPlaceFilter>::Count)
		.def_readwrite("Max", &TArray<FMarketPlaceFilter>::Max)
		.def("Num", &TArray<FMarketPlaceFilter>::Num)
		.def("__call__", (FMarketPlaceFilter& (TArray<FMarketPlaceFilter>::*)(int))&TArray<FMarketPlaceFilter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMessageOfTheDay> >(m, "TArray<FMessageOfTheDay>")

		.def_readwrite("Count", &TArray<FMessageOfTheDay>::Count)
		.def_readwrite("Max", &TArray<FMessageOfTheDay>::Max)
		.def("Num", &TArray<FMessageOfTheDay>::Num)
		.def("__call__", (FMessageOfTheDay& (TArray<FMessageOfTheDay>::*)(int))&TArray<FMessageOfTheDay>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameSearchCfg> >(m, "TArray<FGameSearchCfg>")

		.def_readwrite("Count", &TArray<FGameSearchCfg>::Count)
		.def_readwrite("Max", &TArray<FGameSearchCfg>::Max)
		.def("Num", &TArray<FGameSearchCfg>::Num)
		.def("__call__", (FGameSearchCfg& (TArray<FGameSearchCfg>::*)(int))&TArray<FGameSearchCfg>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSettingsArrayProvider> >(m, "TArray<FSettingsArrayProvider>")

		.def_readwrite("Count", &TArray<FSettingsArrayProvider>::Count)
		.def_readwrite("Max", &TArray<FSettingsArrayProvider>::Max)
		.def("Num", &TArray<FSettingsArrayProvider>::Num)
		.def("__call__", (FSettingsArrayProvider& (TArray<FSettingsArrayProvider>::*)(int))&TArray<FSettingsArrayProvider>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIDataProvider_Settings *> >(m, "TArray<UUIDataProvider_Settings *>")

		.def_readwrite("Count", &TArray<UUIDataProvider_Settings *>::Count)
		.def_readwrite("Max", &TArray<UUIDataProvider_Settings *>::Max)
		.def("Num", &TArray<UUIDataProvider_Settings *>::Num)
		.def("__call__", (UUIDataProvider_Settings*& (TArray<UUIDataProvider_Settings *>::*)(int))&TArray<UUIDataProvider_Settings *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameSettingsCfg> >(m, "TArray<FGameSettingsCfg>")

		.def_readwrite("Count", &TArray<FGameSettingsCfg>::Count)
		.def_readwrite("Max", &TArray<FGameSettingsCfg>::Max)
		.def("Num", &TArray<FGameSettingsCfg>::Num)
		.def("__call__", (FGameSettingsCfg& (TArray<FGameSettingsCfg>::*)(int))&TArray<FGameSettingsCfg>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAppliedSkillEffect> >(m, "TArray<FAppliedSkillEffect>")

		.def_readwrite("Count", &TArray<FAppliedSkillEffect>::Count)
		.def_readwrite("Max", &TArray<FAppliedSkillEffect>::Max)
		.def("Num", &TArray<FAppliedSkillEffect>::Num)
		.def("__call__", (FAppliedSkillEffect& (TArray<FAppliedSkillEffect>::*)(int))&TArray<FAppliedSkillEffect>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeferredSkillActivationData> >(m, "TArray<FDeferredSkillActivationData>")

		.def_readwrite("Count", &TArray<FDeferredSkillActivationData>::Count)
		.def_readwrite("Max", &TArray<FDeferredSkillActivationData>::Max)
		.def("Num", &TArray<FDeferredSkillActivationData>::Num)
		.def("__call__", (FDeferredSkillActivationData& (TArray<FDeferredSkillActivationData>::*)(int))&TArray<FDeferredSkillActivationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkill *> >(m, "TArray<USkill *>")

		.def_readwrite("Count", &TArray<USkill *>::Count)
		.def_readwrite("Max", &TArray<USkill *>::Max)
		.def("Num", &TArray<USkill *>::Num)
		.def("__call__", (USkill*& (TArray<USkill *>::*)(int))&TArray<USkill *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUIStatModifierData> >(m, "TArray<FUIStatModifierData>")

		.def_readwrite("Count", &TArray<FUIStatModifierData>::Count)
		.def_readwrite("Max", &TArray<FUIStatModifierData>::Max)
		.def("Num", &TArray<FUIStatModifierData>::Num)
		.def("__call__", (FUIStatModifierData& (TArray<FUIStatModifierData>::*)(int))&TArray<FUIStatModifierData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAimOffsetProfile> >(m, "TArray<FAimOffsetProfile>")

		.def_readwrite("Count", &TArray<FAimOffsetProfile>::Count)
		.def_readwrite("Max", &TArray<FAimOffsetProfile>::Max)
		.def("Num", &TArray<FAimOffsetProfile>::Num)
		.def("__call__", (FAimOffsetProfile& (TArray<FAimOffsetProfile>::*)(int))&TArray<FAimOffsetProfile>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAimComponent> >(m, "TArray<FAimComponent>")

		.def_readwrite("Count", &TArray<FAimComponent>::Count)
		.def_readwrite("Max", &TArray<FAimComponent>::Max)
		.def("Num", &TArray<FAimComponent>::Num)
		.def("__call__", (FAimComponent& (TArray<FAimComponent>::*)(int))&TArray<FAimComponent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIRBCollisionListener *> >(m, "TArray<UIRBCollisionListener *>")

		.def_readwrite("Count", &TArray<UIRBCollisionListener *>::Count)
		.def_readwrite("Max", &TArray<UIRBCollisionListener *>::Max)
		.def("Num", &TArray<UIRBCollisionListener *>::Num)
		.def("__call__", (UIRBCollisionListener*& (TArray<UIRBCollisionListener *>::*)(int))&TArray<UIRBCollisionListener *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillActionData> >(m, "TArray<FSkillActionData>")

		.def_readwrite("Count", &TArray<FSkillActionData>::Count)
		.def_readwrite("Max", &TArray<FSkillActionData>::Max)
		.def("Num", &TArray<FSkillActionData>::Num)
		.def("__call__", (FSkillActionData& (TArray<FSkillActionData>::*)(int))&TArray<FSkillActionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillEventResponseData> >(m, "TArray<FSkillEventResponseData>")

		.def_readwrite("Count", &TArray<FSkillEventResponseData>::Count)
		.def_readwrite("Max", &TArray<FSkillEventResponseData>::Max)
		.def("Num", &TArray<FSkillEventResponseData>::Num)
		.def("__call__", (FSkillEventResponseData& (TArray<FSkillEventResponseData>::*)(int))&TArray<FSkillEventResponseData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedSkillEvent> >(m, "TArray<FNamedSkillEvent>")

		.def_readwrite("Count", &TArray<FNamedSkillEvent>::Count)
		.def_readwrite("Max", &TArray<FNamedSkillEvent>::Max)
		.def("Num", &TArray<FNamedSkillEvent>::Num)
		.def("__call__", (FNamedSkillEvent& (TArray<FNamedSkillEvent>::*)(int))&TArray<FNamedSkillEvent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillDamageEventData> >(m, "TArray<FSkillDamageEventData>")

		.def_readwrite("Count", &TArray<FSkillDamageEventData>::Count)
		.def_readwrite("Max", &TArray<FSkillDamageEventData>::Max)
		.def("Num", &TArray<FSkillDamageEventData>::Num)
		.def("__call__", (FSkillDamageEventData& (TArray<FSkillDamageEventData>::*)(int))&TArray<FSkillDamageEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillDamagedEventConstraintData> >(m, "TArray<FSkillDamagedEventConstraintData>")

		.def_readwrite("Count", &TArray<FSkillDamagedEventConstraintData>::Count)
		.def_readwrite("Max", &TArray<FSkillDamagedEventConstraintData>::Max)
		.def("Num", &TArray<FSkillDamagedEventConstraintData>::Num)
		.def("__call__", (FSkillDamagedEventConstraintData& (TArray<FSkillDamagedEventConstraintData>::*)(int))&TArray<FSkillDamagedEventConstraintData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkillKillEventData> >(m, "TArray<FSkillKillEventData>")

		.def_readwrite("Count", &TArray<FSkillKillEventData>::Count)
		.def_readwrite("Max", &TArray<FSkillKillEventData>::Max)
		.def("Num", &TArray<FSkillKillEventData>::Num)
		.def("__call__", (FSkillKillEventData& (TArray<FSkillKillEventData>::*)(int))&TArray<FSkillKillEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFlashTextEntry> >(m, "TArray<FFlashTextEntry>")

		.def_readwrite("Count", &TArray<FFlashTextEntry>::Count)
		.def_readwrite("Max", &TArray<FFlashTextEntry>::Max)
		.def("Num", &TArray<FFlashTextEntry>::Num)
		.def("__call__", (FFlashTextEntry& (TArray<FFlashTextEntry>::*)(int))&TArray<FFlashTextEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeightmapLayerAllocationInfo> >(m, "TArray<FWeightmapLayerAllocationInfo>")

		.def_readwrite("Count", &TArray<FWeightmapLayerAllocationInfo>::Count)
		.def_readwrite("Max", &TArray<FWeightmapLayerAllocationInfo>::Max)
		.def("Num", &TArray<FWeightmapLayerAllocationInfo>::Num)
		.def("__call__", (FWeightmapLayerAllocationInfo& (TArray<FWeightmapLayerAllocationInfo>::*)(int))&TArray<FWeightmapLayerAllocationInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSelectedTerrainVertex> >(m, "TArray<FSelectedTerrainVertex>")

		.def_readwrite("Count", &TArray<FSelectedTerrainVertex>::Count)
		.def_readwrite("Max", &TArray<FSelectedTerrainVertex>::Max)
		.def("Num", &TArray<FSelectedTerrainVertex>::Num)
		.def("__call__", (FSelectedTerrainVertex& (TArray<FSelectedTerrainVertex>::*)(int))&TArray<FSelectedTerrainVertex>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConfiguredGameSetting> >(m, "TArray<FConfiguredGameSetting>")

		.def_readwrite("Count", &TArray<FConfiguredGameSetting>::Count)
		.def_readwrite("Max", &TArray<FConfiguredGameSetting>::Max)
		.def("Num", &TArray<FConfiguredGameSetting>::Num)
		.def("__call__", (FConfiguredGameSetting& (TArray<FConfiguredGameSetting>::*)(int))&TArray<FConfiguredGameSetting>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInventorySwap> >(m, "TArray<FInventorySwap>")

		.def_readwrite("Count", &TArray<FInventorySwap>::Count)
		.def_readwrite("Max", &TArray<FInventorySwap>::Max)
		.def("Num", &TArray<FInventorySwap>::Num)
		.def("__call__", (FInventorySwap& (TArray<FInventorySwap>::*)(int))&TArray<FInventorySwap>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSwitchClassInfo> >(m, "TArray<FSwitchClassInfo>")

		.def_readwrite("Count", &TArray<FSwitchClassInfo>::Count)
		.def_readwrite("Max", &TArray<FSwitchClassInfo>::Max)
		.def("Num", &TArray<FSwitchClassInfo>::Num)
		.def("__call__", (FSwitchClassInfo& (TArray<FSwitchClassInfo>::*)(int))&TArray<FSwitchClassInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelStreamingNameCombo> >(m, "TArray<FLevelStreamingNameCombo>")

		.def_readwrite("Count", &TArray<FLevelStreamingNameCombo>::Count)
		.def_readwrite("Max", &TArray<FLevelStreamingNameCombo>::Max)
		.def("Num", &TArray<FLevelStreamingNameCombo>::Num)
		.def("__call__", (FLevelStreamingNameCombo& (TArray<FLevelStreamingNameCombo>::*)(int))&TArray<FLevelStreamingNameCombo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCreditsTextureInfo> >(m, "TArray<FCreditsTextureInfo>")

		.def_readwrite("Count", &TArray<FCreditsTextureInfo>::Count)
		.def_readwrite("Max", &TArray<FCreditsTextureInfo>::Max)
		.def("Num", &TArray<FCreditsTextureInfo>::Num)
		.def("__call__", (FCreditsTextureInfo& (TArray<FCreditsTextureInfo>::*)(int))&TArray<FCreditsTextureInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGPMCollection> >(m, "TArray<FGPMCollection>")

		.def_readwrite("Count", &TArray<FGPMCollection>::Count)
		.def_readwrite("Max", &TArray<FGPMCollection>::Max)
		.def("Num", &TArray<FGPMCollection>::Num)
		.def("__call__", (FGPMCollection& (TArray<FGPMCollection>::*)(int))&TArray<FGPMCollection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPropertyInfo> >(m, "TArray<FPropertyInfo>")

		.def_readwrite("Count", &TArray<FPropertyInfo>::Count)
		.def_readwrite("Max", &TArray<FPropertyInfo>::Max)
		.def("Num", &TArray<FPropertyInfo>::Num)
		.def("__call__", (FPropertyInfo& (TArray<FPropertyInfo>::*)(int))&TArray<FPropertyInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UParticleSystem *> >(m, "TArray<UParticleSystem *>")

		.def_readwrite("Count", &TArray<UParticleSystem *>::Count)
		.def_readwrite("Max", &TArray<UParticleSystem *>::Max)
		.def("Num", &TArray<UParticleSystem *>::Num)
		.def("__call__", (UParticleSystem*& (TArray<UParticleSystem *>::*)(int))&TArray<UParticleSystem *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USoundCue *> >(m, "TArray<USoundCue *>")

		.def_readwrite("Count", &TArray<USoundCue *>::Count)
		.def_readwrite("Max", &TArray<USoundCue *>::Max)
		.def("Num", &TArray<USoundCue *>::Num)
		.def("__call__", (USoundCue*& (TArray<USoundCue *>::*)(int))&TArray<USoundCue *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFractureMaterial *> >(m, "TArray<UFractureMaterial *>")

		.def_readwrite("Count", &TArray<UFractureMaterial *>::Count)
		.def_readwrite("Max", &TArray<UFractureMaterial *>::Max)
		.def("Num", &TArray<UFractureMaterial *>::Num)
		.def("__call__", (UFractureMaterial*& (TArray<UFractureMaterial *>::*)(int))&TArray<UFractureMaterial *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeferredLeaderboardRead> >(m, "TArray<FDeferredLeaderboardRead>")

		.def_readwrite("Count", &TArray<FDeferredLeaderboardRead>::Count)
		.def_readwrite("Max", &TArray<FDeferredLeaderboardRead>::Max)
		.def("Num", &TArray<FDeferredLeaderboardRead>::Num)
		.def("__call__", (FDeferredLeaderboardRead& (TArray<FDeferredLeaderboardRead>::*)(int))&TArray<FDeferredLeaderboardRead>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDeferredLeaderboardWrite> >(m, "TArray<FDeferredLeaderboardWrite>")

		.def_readwrite("Count", &TArray<FDeferredLeaderboardWrite>::Count)
		.def_readwrite("Max", &TArray<FDeferredLeaderboardWrite>::Max)
		.def("Num", &TArray<FDeferredLeaderboardWrite>::Num)
		.def("__call__", (FDeferredLeaderboardWrite& (TArray<FDeferredLeaderboardWrite>::*)(int))&TArray<FDeferredLeaderboardWrite>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttributePresentationDamageTypeMapping> >(m, "TArray<FAttributePresentationDamageTypeMapping>")

		.def_readwrite("Count", &TArray<FAttributePresentationDamageTypeMapping>::Count)
		.def_readwrite("Max", &TArray<FAttributePresentationDamageTypeMapping>::Max)
		.def("Num", &TArray<FAttributePresentationDamageTypeMapping>::Num)
		.def("__call__", (FAttributePresentationDamageTypeMapping& (TArray<FAttributePresentationDamageTypeMapping>::*)(int))&TArray<FAttributePresentationDamageTypeMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLeaderboardEntry> >(m, "TArray<FLeaderboardEntry>")

		.def_readwrite("Count", &TArray<FLeaderboardEntry>::Count)
		.def_readwrite("Max", &TArray<FLeaderboardEntry>::Max)
		.def("Num", &TArray<FLeaderboardEntry>::Num)
		.def("__call__", (FLeaderboardEntry& (TArray<FLeaderboardEntry>::*)(int))&TArray<FLeaderboardEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLeaderboardTemplate> >(m, "TArray<FLeaderboardTemplate>")

		.def_readwrite("Count", &TArray<FLeaderboardTemplate>::Count)
		.def_readwrite("Max", &TArray<FLeaderboardTemplate>::Max)
		.def("Num", &TArray<FLeaderboardTemplate>::Num)
		.def("__call__", (FLeaderboardTemplate& (TArray<FLeaderboardTemplate>::*)(int))&TArray<FLeaderboardTemplate>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingEntry> >(m, "TArray<FPendingEntry>")

		.def_readwrite("Count", &TArray<FPendingEntry>::Count)
		.def_readwrite("Max", &TArray<FPendingEntry>::Max)
		.def("Num", &TArray<FPendingEntry>::Num)
		.def("__call__", (FPendingEntry& (TArray<FPendingEntry>::*)(int))&TArray<FPendingEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMarketplaceOfferData> >(m, "TArray<FMarketplaceOfferData>")

		.def_readwrite("Count", &TArray<FMarketplaceOfferData>::Count)
		.def_readwrite("Max", &TArray<FMarketplaceOfferData>::Max)
		.def("Num", &TArray<FMarketplaceOfferData>::Num)
		.def("__call__", (FMarketplaceOfferData& (TArray<FMarketplaceOfferData>::*)(int))&TArray<FMarketplaceOfferData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FIpAddr> >(m, "TArray<FIpAddr>")

		.def_readwrite("Count", &TArray<FIpAddr>::Count)
		.def_readwrite("Max", &TArray<FIpAddr>::Max)
		.def("Num", &TArray<FIpAddr>::Num)
		.def("__call__", (FIpAddr& (TArray<FIpAddr>::*)(int))&TArray<FIpAddr>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FViewIdToLeaderboardName> >(m, "TArray<FViewIdToLeaderboardName>")

		.def_readwrite("Count", &TArray<FViewIdToLeaderboardName>::Count)
		.def_readwrite("Max", &TArray<FViewIdToLeaderboardName>::Max)
		.def("Num", &TArray<FViewIdToLeaderboardName>::Num)
		.def("__call__", (FViewIdToLeaderboardName& (TArray<FViewIdToLeaderboardName>::*)(int))&TArray<FViewIdToLeaderboardName>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USkelControlLookAt *> >(m, "TArray<USkelControlLookAt *>")

		.def_readwrite("Count", &TArray<USkelControlLookAt *>::Count)
		.def_readwrite("Max", &TArray<USkelControlLookAt *>::Max)
		.def("Num", &TArray<USkelControlLookAt *>::Num)
		.def("__call__", (USkelControlLookAt*& (TArray<USkelControlLookAt *>::*)(int))&TArray<USkelControlLookAt *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKeyBindInfo> >(m, "TArray<FKeyBindInfo>")

		.def_readwrite("Count", &TArray<FKeyBindInfo>::Count)
		.def_readwrite("Max", &TArray<FKeyBindInfo>::Max)
		.def("Num", &TArray<FKeyBindInfo>::Num)
		.def("__call__", (FKeyBindInfo& (TArray<FKeyBindInfo>::*)(int))&TArray<FKeyBindInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRecentParty> >(m, "TArray<FRecentParty>")

		.def_readwrite("Count", &TArray<FRecentParty>::Count)
		.def_readwrite("Max", &TArray<FRecentParty>::Max)
		.def("Num", &TArray<FRecentParty>::Num)
		.def("__call__", (FRecentParty& (TArray<FRecentParty>::*)(int))&TArray<FRecentParty>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCurrentPlayerMet> >(m, "TArray<FCurrentPlayerMet>")

		.def_readwrite("Count", &TArray<FCurrentPlayerMet>::Count)
		.def_readwrite("Max", &TArray<FCurrentPlayerMet>::Max)
		.def("Num", &TArray<FCurrentPlayerMet>::Num)
		.def("__call__", (FCurrentPlayerMet& (TArray<FCurrentPlayerMet>::*)(int))&TArray<FCurrentPlayerMet>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRandomAnimInfo> >(m, "TArray<FRandomAnimInfo>")

		.def_readwrite("Count", &TArray<FRandomAnimInfo>::Count)
		.def_readwrite("Max", &TArray<FRandomAnimInfo>::Max)
		.def("Num", &TArray<FRandomAnimInfo>::Num)
		.def("__call__", (FRandomAnimInfo& (TArray<FRandomAnimInfo>::*)(int))&TArray<FRandomAnimInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimBlendInfo> >(m, "TArray<FAnimBlendInfo>")

		.def_readwrite("Count", &TArray<FAnimBlendInfo>::Count)
		.def_readwrite("Max", &TArray<FAnimBlendInfo>::Max)
		.def("Num", &TArray<FAnimBlendInfo>::Num)
		.def("__call__", (FAnimBlendInfo& (TArray<FAnimBlendInfo>::*)(int))&TArray<FAnimBlendInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGBXDefinition *> >(m, "TArray<UGBXDefinition *>")

		.def_readwrite("Count", &TArray<UGBXDefinition *>::Count)
		.def_readwrite("Max", &TArray<UGBXDefinition *>::Max)
		.def("Num", &TArray<UGBXDefinition *>::Num)
		.def("__call__", (UGBXDefinition*& (TArray<UGBXDefinition *>::*)(int))&TArray<UGBXDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEnvironmentalEffectInfo> >(m, "TArray<FEnvironmentalEffectInfo>")

		.def_readwrite("Count", &TArray<FEnvironmentalEffectInfo>::Count)
		.def_readwrite("Max", &TArray<FEnvironmentalEffectInfo>::Max)
		.def("Num", &TArray<FEnvironmentalEffectInfo>::Num)
		.def("__call__", (FEnvironmentalEffectInfo& (TArray<FEnvironmentalEffectInfo>::*)(int))&TArray<FEnvironmentalEffectInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeasonPassPackageCount> >(m, "TArray<FSeasonPassPackageCount>")

		.def_readwrite("Count", &TArray<FSeasonPassPackageCount>::Count)
		.def_readwrite("Max", &TArray<FSeasonPassPackageCount>::Max)
		.def("Num", &TArray<FSeasonPassPackageCount>::Num)
		.def("__call__", (FSeasonPassPackageCount& (TArray<FSeasonPassPackageCount>::*)(int))&TArray<FSeasonPassPackageCount>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSeasonPassOfferUnion> >(m, "TArray<FSeasonPassOfferUnion>")

		.def_readwrite("Count", &TArray<FSeasonPassOfferUnion>::Count)
		.def_readwrite("Max", &TArray<FSeasonPassOfferUnion>::Max)
		.def("Num", &TArray<FSeasonPassOfferUnion>::Num)
		.def("__call__", (FSeasonPassOfferUnion& (TArray<FSeasonPassOfferUnion>::*)(int))&TArray<FSeasonPassOfferUnion>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowReplicatedAmbientSoundSource *> >(m, "TArray<AWillowReplicatedAmbientSoundSource *>")

		.def_readwrite("Count", &TArray<AWillowReplicatedAmbientSoundSource *>::Count)
		.def_readwrite("Max", &TArray<AWillowReplicatedAmbientSoundSource *>::Max)
		.def("Num", &TArray<AWillowReplicatedAmbientSoundSource *>::Num)
		.def("__call__", (AWillowReplicatedAmbientSoundSource*& (TArray<AWillowReplicatedAmbientSoundSource *>::*)(int))&TArray<AWillowReplicatedAmbientSoundSource *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVantageSpot> >(m, "TArray<FVantageSpot>")

		.def_readwrite("Count", &TArray<FVantageSpot>::Count)
		.def_readwrite("Max", &TArray<FVantageSpot>::Max)
		.def("Num", &TArray<FVantageSpot>::Num)
		.def("__call__", (FVantageSpot& (TArray<FVantageSpot>::*)(int))&TArray<FVantageSpot>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULineSegment *> >(m, "TArray<ULineSegment *>")

		.def_readwrite("Count", &TArray<ULineSegment *>::Count)
		.def_readwrite("Max", &TArray<ULineSegment *>::Max)
		.def("Num", &TArray<ULineSegment *>::Num)
		.def("__call__", (ULineSegment*& (TArray<ULineSegment *>::*)(int))&TArray<ULineSegment *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULine *> >(m, "TArray<ULine *>")

		.def_readwrite("Count", &TArray<ULine *>::Count)
		.def_readwrite("Max", &TArray<ULine *>::Max)
		.def("Num", &TArray<ULine *>::Num)
		.def("__call__", (ULine*& (TArray<ULine *>::*)(int))&TArray<ULine *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UVertex *> >(m, "TArray<UVertex *>")

		.def_readwrite("Count", &TArray<UVertex *>::Count)
		.def_readwrite("Max", &TArray<UVertex *>::Max)
		.def("Num", &TArray<UVertex *>::Num)
		.def("__call__", (UVertex*& (TArray<UVertex *>::*)(int))&TArray<UVertex *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UOnlineStatsRead *> >(m, "TArray<UOnlineStatsRead *>")

		.def_readwrite("Count", &TArray<UOnlineStatsRead *>::Count)
		.def_readwrite("Max", &TArray<UOnlineStatsRead *>::Max)
		.def("Num", &TArray<UOnlineStatsRead *>::Num)
		.def("__call__", (UOnlineStatsRead*& (TArray<UOnlineStatsRead *>::*)(int))&TArray<UOnlineStatsRead *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAlphaMap> >(m, "TArray<FAlphaMap>")

		.def_readwrite("Count", &TArray<FAlphaMap>::Count)
		.def_readwrite("Max", &TArray<FAlphaMap>::Max)
		.def("Num", &TArray<FAlphaMap>::Num)
		.def("__call__", (FAlphaMap& (TArray<FAlphaMap>::*)(int))&TArray<FAlphaMap>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UInteractiveObjectLootListDefinition *> >(m, "TArray<UInteractiveObjectLootListDefinition *>")

		.def_readwrite("Count", &TArray<UInteractiveObjectLootListDefinition *>::Count)
		.def_readwrite("Max", &TArray<UInteractiveObjectLootListDefinition *>::Max)
		.def("Num", &TArray<UInteractiveObjectLootListDefinition *>::Num)
		.def("__call__", (UInteractiveObjectLootListDefinition*& (TArray<UInteractiveObjectLootListDefinition *>::*)(int))&TArray<UInteractiveObjectLootListDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIResourceCombinationProvider *> >(m, "TArray<UUIResourceCombinationProvider *>")

		.def_readwrite("Count", &TArray<UUIResourceCombinationProvider *>::Count)
		.def_readwrite("Max", &TArray<UUIResourceCombinationProvider *>::Max)
		.def("Num", &TArray<UUIResourceCombinationProvider *>::Num)
		.def("__call__", (UUIResourceCombinationProvider*& (TArray<UUIResourceCombinationProvider *>::*)(int))&TArray<UUIResourceCombinationProvider *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedOnlineContent> >(m, "TArray<FNamedOnlineContent>")

		.def_readwrite("Count", &TArray<FNamedOnlineContent>::Count)
		.def_readwrite("Max", &TArray<FNamedOnlineContent>::Max)
		.def("Num", &TArray<FNamedOnlineContent>::Num)
		.def("__call__", (FNamedOnlineContent& (TArray<FNamedOnlineContent>::*)(int))&TArray<FNamedOnlineContent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCompatibilityOnlineContent> >(m, "TArray<FCompatibilityOnlineContent>")

		.def_readwrite("Count", &TArray<FCompatibilityOnlineContent>::Count)
		.def_readwrite("Max", &TArray<FCompatibilityOnlineContent>::Max)
		.def("Num", &TArray<FCompatibilityOnlineContent>::Num)
		.def("__call__", (FCompatibilityOnlineContent& (TArray<FCompatibilityOnlineContent>::*)(int))&TArray<FCompatibilityOnlineContent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FClientBeaconConnection> >(m, "TArray<FClientBeaconConnection>")

		.def_readwrite("Count", &TArray<FClientBeaconConnection>::Count)
		.def_readwrite("Max", &TArray<FClientBeaconConnection>::Max)
		.def("Num", &TArray<FClientBeaconConnection>::Num)
		.def("__call__", (FClientBeaconConnection& (TArray<FClientBeaconConnection>::*)(int))&TArray<FClientBeaconConnection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPartyReservation> >(m, "TArray<FPartyReservation>")

		.def_readwrite("Count", &TArray<FPartyReservation>::Count)
		.def_readwrite("Max", &TArray<FPartyReservation>::Max)
		.def("Num", &TArray<FPartyReservation>::Num)
		.def("__call__", (FPartyReservation& (TArray<FPartyReservation>::*)(int))&TArray<FPartyReservation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerReservation> >(m, "TArray<FPlayerReservation>")

		.def_readwrite("Count", &TArray<FPlayerReservation>::Count)
		.def_readwrite("Max", &TArray<FPlayerReservation>::Max)
		.def("Num", &TArray<FPlayerReservation>::Num)
		.def("__call__", (FPlayerReservation& (TArray<FPlayerReservation>::*)(int))&TArray<FPlayerReservation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWireLinkage> >(m, "TArray<FWireLinkage>")

		.def_readwrite("Count", &TArray<FWireLinkage>::Count)
		.def_readwrite("Max", &TArray<FWireLinkage>::Max)
		.def("Num", &TArray<FWireLinkage>::Num)
		.def("__call__", (FWireLinkage& (TArray<FWireLinkage>::*)(int))&TArray<FWireLinkage>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSMRandomPair> >(m, "TArray<FSMRandomPair>")

		.def_readwrite("Count", &TArray<FSMRandomPair>::Count)
		.def_readwrite("Max", &TArray<FSMRandomPair>::Max)
		.def("Num", &TArray<FSMRandomPair>::Num)
		.def("__call__", (FSMRandomPair& (TArray<FSMRandomPair>::*)(int))&TArray<FSMRandomPair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSMExpressionList> >(m, "TArray<FSMExpressionList>")

		.def_readwrite("Count", &TArray<FSMExpressionList>::Count)
		.def_readwrite("Max", &TArray<FSMExpressionList>::Max)
		.def("Num", &TArray<FSMExpressionList>::Num)
		.def("__call__", (FSMExpressionList& (TArray<FSMExpressionList>::*)(int))&TArray<FSMExpressionList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActionSequenceRandomData> >(m, "TArray<FActionSequenceRandomData>")

		.def_readwrite("Count", &TArray<FActionSequenceRandomData>::Count)
		.def_readwrite("Max", &TArray<FActionSequenceRandomData>::Max)
		.def("Num", &TArray<FActionSequenceRandomData>::Num)
		.def("__call__", (FActionSequenceRandomData& (TArray<FActionSequenceRandomData>::*)(int))&TArray<FActionSequenceRandomData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIResourceDataProvider *> >(m, "TArray<UUIResourceDataProvider *>")

		.def_readwrite("Count", &TArray<UUIResourceDataProvider *>::Count)
		.def_readwrite("Max", &TArray<UUIResourceDataProvider *>::Max)
		.def("Num", &TArray<UUIResourceDataProvider *>::Num)
		.def("__call__", (UUIResourceDataProvider*& (TArray<UUIResourceDataProvider *>::*)(int))&TArray<UUIResourceDataProvider *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainHeight> >(m, "TArray<FTerrainHeight>")

		.def_readwrite("Count", &TArray<FTerrainHeight>::Count)
		.def_readwrite("Max", &TArray<FTerrainHeight>::Max)
		.def("Num", &TArray<FTerrainHeight>::Num)
		.def("__call__", (FTerrainHeight& (TArray<FTerrainHeight>::*)(int))&TArray<FTerrainHeight>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainInfoData> >(m, "TArray<FTerrainInfoData>")

		.def_readwrite("Count", &TArray<FTerrainInfoData>::Count)
		.def_readwrite("Max", &TArray<FTerrainInfoData>::Max)
		.def("Num", &TArray<FTerrainInfoData>::Num)
		.def("__call__", (FTerrainInfoData& (TArray<FTerrainInfoData>::*)(int))&TArray<FTerrainInfoData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainLayer> >(m, "TArray<FTerrainLayer>")

		.def_readwrite("Count", &TArray<FTerrainLayer>::Count)
		.def_readwrite("Max", &TArray<FTerrainLayer>::Max)
		.def("Num", &TArray<FTerrainLayer>::Num)
		.def("__call__", (FTerrainLayer& (TArray<FTerrainLayer>::*)(int))&TArray<FTerrainLayer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainFilteredMaterial> >(m, "TArray<FTerrainFilteredMaterial>")

		.def_readwrite("Count", &TArray<FTerrainFilteredMaterial>::Count)
		.def_readwrite("Max", &TArray<FTerrainFilteredMaterial>::Max)
		.def("Num", &TArray<FTerrainFilteredMaterial>::Num)
		.def("__call__", (FTerrainFilteredMaterial& (TArray<FTerrainFilteredMaterial>::*)(int))&TArray<FTerrainFilteredMaterial>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainFoliageMesh> >(m, "TArray<FTerrainFoliageMesh>")

		.def_readwrite("Count", &TArray<FTerrainFoliageMesh>::Count)
		.def_readwrite("Max", &TArray<FTerrainFoliageMesh>::Max)
		.def("Num", &TArray<FTerrainFoliageMesh>::Num)
		.def("__call__", (FTerrainFoliageMesh& (TArray<FTerrainFoliageMesh>::*)(int))&TArray<FTerrainFoliageMesh>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainDecoLayer> >(m, "TArray<FTerrainDecoLayer>")

		.def_readwrite("Count", &TArray<FTerrainDecoLayer>::Count)
		.def_readwrite("Max", &TArray<FTerrainDecoLayer>::Max)
		.def("Num", &TArray<FTerrainDecoLayer>::Num)
		.def("__call__", (FTerrainDecoLayer& (TArray<FTerrainDecoLayer>::*)(int))&TArray<FTerrainDecoLayer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainDecoration> >(m, "TArray<FTerrainDecoration>")

		.def_readwrite("Count", &TArray<FTerrainDecoration>::Count)
		.def_readwrite("Max", &TArray<FTerrainDecoration>::Max)
		.def("Num", &TArray<FTerrainDecoration>::Num)
		.def("__call__", (FTerrainDecoration& (TArray<FTerrainDecoration>::*)(int))&TArray<FTerrainDecoration>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTerrainDecorationInstance> >(m, "TArray<FTerrainDecorationInstance>")

		.def_readwrite("Count", &TArray<FTerrainDecorationInstance>::Count)
		.def_readwrite("Max", &TArray<FTerrainDecorationInstance>::Max)
		.def("Num", &TArray<FTerrainDecorationInstance>::Num)
		.def("__call__", (FTerrainDecorationInstance& (TArray<FTerrainDecorationInstance>::*)(int))&TArray<FTerrainDecorationInstance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTerrainComponent *> >(m, "TArray<UTerrainComponent *>")

		.def_readwrite("Count", &TArray<UTerrainComponent *>::Count)
		.def_readwrite("Max", &TArray<UTerrainComponent *>::Max)
		.def("Num", &TArray<UTerrainComponent *>::Num)
		.def("__call__", (UTerrainComponent*& (TArray<UTerrainComponent *>::*)(int))&TArray<UTerrainComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ATerrain_FTerrainWeightedMaterial> >(m, "TArray<ATerrain_FTerrainWeightedMaterial>")

		.def_readwrite("Count", &TArray<ATerrain_FTerrainWeightedMaterial>::Count)
		.def_readwrite("Max", &TArray<ATerrain_FTerrainWeightedMaterial>::Max)
		.def("Num", &TArray<ATerrain_FTerrainWeightedMaterial>::Num)
		.def("__call__", (ATerrain_FTerrainWeightedMaterial& (TArray<ATerrain_FTerrainWeightedMaterial>::*)(int))&TArray<ATerrain_FTerrainWeightedMaterial>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UTerrainWeightMapTexture *> >(m, "TArray<UTerrainWeightMapTexture *>")

		.def_readwrite("Count", &TArray<UTerrainWeightMapTexture *>::Count)
		.def_readwrite("Max", &TArray<UTerrainWeightMapTexture *>::Max)
		.def("Num", &TArray<UTerrainWeightMapTexture *>::Num)
		.def("__call__", (UTerrainWeightMapTexture*& (TArray<UTerrainWeightMapTexture *>::*)(int))&TArray<UTerrainWeightMapTexture *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FImpactResponseData> >(m, "TArray<FImpactResponseData>")

		.def_readwrite("Count", &TArray<FImpactResponseData>::Count)
		.def_readwrite("Max", &TArray<FImpactResponseData>::Max)
		.def("Num", &TArray<FImpactResponseData>::Num)
		.def("__call__", (FImpactResponseData& (TArray<FImpactResponseData>::*)(int))&TArray<FImpactResponseData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLiftBodyPair> >(m, "TArray<FLiftBodyPair>")

		.def_readwrite("Count", &TArray<FLiftBodyPair>::Count)
		.def_readwrite("Max", &TArray<FLiftBodyPair>::Max)
		.def("Num", &TArray<FLiftBodyPair>::Num)
		.def("__call__", (FLiftBodyPair& (TArray<FLiftBodyPair>::*)(int))&TArray<FLiftBodyPair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActiveInteraction> >(m, "TArray<FActiveInteraction>")

		.def_readwrite("Count", &TArray<FActiveInteraction>::Count)
		.def_readwrite("Max", &TArray<FActiveInteraction>::Max)
		.def("Num", &TArray<FActiveInteraction>::Num)
		.def("__call__", (FActiveInteraction& (TArray<FActiveInteraction>::*)(int))&TArray<FActiveInteraction>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTargetedPlayerState> >(m, "TArray<FTargetedPlayerState>")

		.def_readwrite("Count", &TArray<FTargetedPlayerState>::Count)
		.def_readwrite("Max", &TArray<FTargetedPlayerState>::Max)
		.def("Num", &TArray<FTargetedPlayerState>::Num)
		.def("__call__", (FTargetedPlayerState& (TArray<FTargetedPlayerState>::*)(int))&TArray<FTargetedPlayerState>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UIPlayerObserver *> >(m, "TArray<UIPlayerObserver *>")

		.def_readwrite("Count", &TArray<UIPlayerObserver *>::Count)
		.def_readwrite("Max", &TArray<UIPlayerObserver *>::Max)
		.def("Num", &TArray<UIPlayerObserver *>::Num)
		.def("__call__", (UIPlayerObserver*& (TArray<UIPlayerObserver *>::*)(int))&TArray<UIPlayerObserver *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColiseumStat> >(m, "TArray<FColiseumStat>")

		.def_readwrite("Count", &TArray<FColiseumStat>::Count)
		.def_readwrite("Max", &TArray<FColiseumStat>::Max)
		.def("Num", &TArray<FColiseumStat>::Num)
		.def("__call__", (FColiseumStat& (TArray<FColiseumStat>::*)(int))&TArray<FColiseumStat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UWillowAIBlackboardComponent *> >(m, "TArray<UWillowAIBlackboardComponent *>")

		.def_readwrite("Count", &TArray<UWillowAIBlackboardComponent *>::Count)
		.def_readwrite("Max", &TArray<UWillowAIBlackboardComponent *>::Max)
		.def("Num", &TArray<UWillowAIBlackboardComponent *>::Num)
		.def("__call__", (UWillowAIBlackboardComponent*& (TArray<UWillowAIBlackboardComponent *>::*)(int))&TArray<UWillowAIBlackboardComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMarketplaceOffer> >(m, "TArray<FMarketplaceOffer>")

		.def_readwrite("Count", &TArray<FMarketplaceOffer>::Count)
		.def_readwrite("Max", &TArray<FMarketplaceOffer>::Max)
		.def("Num", &TArray<FMarketplaceOffer>::Num)
		.def("__call__", (FMarketplaceOffer& (TArray<FMarketplaceOffer>::*)(int))&TArray<FMarketplaceOffer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInstalledContentInfo> >(m, "TArray<FInstalledContentInfo>")

		.def_readwrite("Count", &TArray<FInstalledContentInfo>::Count)
		.def_readwrite("Max", &TArray<FInstalledContentInfo>::Max)
		.def("Num", &TArray<FInstalledContentInfo>::Num)
		.def("__call__", (FInstalledContentInfo& (TArray<FInstalledContentInfo>::*)(int))&TArray<FInstalledContentInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRejectedContentInfo> >(m, "TArray<FRejectedContentInfo>")

		.def_readwrite("Count", &TArray<FRejectedContentInfo>::Count)
		.def_readwrite("Max", &TArray<FRejectedContentInfo>::Max)
		.def("Num", &TArray<FRejectedContentInfo>::Num)
		.def("__call__", (FRejectedContentInfo& (TArray<FRejectedContentInfo>::*)(int))&TArray<FRejectedContentInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFont *> >(m, "TArray<UFont *>")

		.def_readwrite("Count", &TArray<UFont *>::Count)
		.def_readwrite("Max", &TArray<UFont *>::Max)
		.def("Num", &TArray<UFont *>::Num)
		.def("__call__", (UFont*& (TArray<UFont *>::*)(int))&TArray<UFont *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLinearColor> >(m, "TArray<FLinearColor>")

		.def_readwrite("Count", &TArray<FLinearColor>::Count)
		.def_readwrite("Max", &TArray<FLinearColor>::Max)
		.def("Num", &TArray<FLinearColor>::Num)
		.def("__call__", (FLinearColor& (TArray<FLinearColor>::*)(int))&TArray<FLinearColor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStatColorMapping> >(m, "TArray<FStatColorMapping>")

		.def_readwrite("Count", &TArray<FStatColorMapping>::Count)
		.def_readwrite("Max", &TArray<FStatColorMapping>::Max)
		.def("Num", &TArray<FStatColorMapping>::Num)
		.def("__call__", (FStatColorMapping& (TArray<FStatColorMapping>::*)(int))&TArray<FStatColorMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStatColorMapEntry> >(m, "TArray<FStatColorMapEntry>")

		.def_readwrite("Count", &TArray<FStatColorMapEntry>::Count)
		.def_readwrite("Max", &TArray<FStatColorMapEntry>::Max)
		.def("Num", &TArray<FStatColorMapEntry>::Num)
		.def("__call__", (FStatColorMapEntry& (TArray<FStatColorMapEntry>::*)(int))&TArray<FStatColorMapEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamagePair> >(m, "TArray<FDamagePair>")

		.def_readwrite("Count", &TArray<FDamagePair>::Count)
		.def_readwrite("Max", &TArray<FDamagePair>::Max)
		.def("Num", &TArray<FDamagePair>::Num)
		.def("__call__", (FDamagePair& (TArray<FDamagePair>::*)(int))&TArray<FDamagePair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULocalPlayer *> >(m, "TArray<ULocalPlayer *>")

		.def_readwrite("Count", &TArray<ULocalPlayer *>::Count)
		.def_readwrite("Max", &TArray<ULocalPlayer *>::Max)
		.def("Num", &TArray<ULocalPlayer *>::Num)
		.def("__call__", (ULocalPlayer*& (TArray<ULocalPlayer *>::*)(int))&TArray<ULocalPlayer *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDropNoteInfo> >(m, "TArray<FDropNoteInfo>")

		.def_readwrite("Count", &TArray<FDropNoteInfo>::Count)
		.def_readwrite("Max", &TArray<FDropNoteInfo>::Max)
		.def("Num", &TArray<FDropNoteInfo>::Num)
		.def("__call__", (FDropNoteInfo& (TArray<FDropNoteInfo>::*)(int))&TArray<FDropNoteInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FListener> >(m, "TArray<FListener>")

		.def_readwrite("Count", &TArray<FListener>::Count)
		.def_readwrite("Max", &TArray<FListener>::Max)
		.def("Num", &TArray<FListener>::Num)
		.def("__call__", (FListener& (TArray<FListener>::*)(int))&TArray<FListener>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULevel *> >(m, "TArray<ULevel *>")

		.def_readwrite("Count", &TArray<ULevel *>::Count)
		.def_readwrite("Max", &TArray<ULevel *>::Max)
		.def("Num", &TArray<ULevel *>::Num)
		.def("__call__", (ULevel*& (TArray<ULevel *>::*)(int))&TArray<ULevel *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelStreamingStatus> >(m, "TArray<FLevelStreamingStatus>")

		.def_readwrite("Count", &TArray<FLevelStreamingStatus>::Count)
		.def_readwrite("Max", &TArray<FLevelStreamingStatus>::Max)
		.def("Num", &TArray<FLevelStreamingStatus>::Num)
		.def("__call__", (FLevelStreamingStatus& (TArray<FLevelStreamingStatus>::*)(int))&TArray<FLevelStreamingStatus>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFullyLoadedPackagesInfo> >(m, "TArray<FFullyLoadedPackagesInfo>")

		.def_readwrite("Count", &TArray<FFullyLoadedPackagesInfo>::Count)
		.def_readwrite("Max", &TArray<FFullyLoadedPackagesInfo>::Max)
		.def("Num", &TArray<FFullyLoadedPackagesInfo>::Num)
		.def("__call__", (FFullyLoadedPackagesInfo& (TArray<FFullyLoadedPackagesInfo>::*)(int))&TArray<FFullyLoadedPackagesInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNamedNetDriver> >(m, "TArray<FNamedNetDriver>")

		.def_readwrite("Count", &TArray<FNamedNetDriver>::Count)
		.def_readwrite("Max", &TArray<FNamedNetDriver>::Max)
		.def("Num", &TArray<FNamedNetDriver>::Num)
		.def("__call__", (FNamedNetDriver& (TArray<FNamedNetDriver>::*)(int))&TArray<FNamedNetDriver>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimTag> >(m, "TArray<FAnimTag>")

		.def_readwrite("Count", &TArray<FAnimTag>::Count)
		.def_readwrite("Max", &TArray<FAnimTag>::Max)
		.def("Num", &TArray<FAnimTag>::Num)
		.def("__call__", (FAnimTag& (TArray<FAnimTag>::*)(int))&TArray<FAnimTag>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadablePackageDefinition *> >(m, "TArray<UDownloadablePackageDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadablePackageDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadablePackageDefinition *>::Max)
		.def("Num", &TArray<UDownloadablePackageDefinition *>::Num)
		.def("__call__", (UDownloadablePackageDefinition*& (TArray<UDownloadablePackageDefinition *>::*)(int))&TArray<UDownloadablePackageDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableContentDefinition *> >(m, "TArray<UDownloadableContentDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableContentDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableContentDefinition *>::Max)
		.def("Num", &TArray<UDownloadableContentDefinition *>::Num)
		.def("__call__", (UDownloadableContentDefinition*& (TArray<UDownloadableContentDefinition *>::*)(int))&TArray<UDownloadableContentDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableExpansionDefinition *> >(m, "TArray<UDownloadableExpansionDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableExpansionDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableExpansionDefinition *>::Max)
		.def("Num", &TArray<UDownloadableExpansionDefinition *>::Num)
		.def("__call__", (UDownloadableExpansionDefinition*& (TArray<UDownloadableExpansionDefinition *>::*)(int))&TArray<UDownloadableExpansionDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableCharacterDefinition *> >(m, "TArray<UDownloadableCharacterDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableCharacterDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableCharacterDefinition *>::Max)
		.def("Num", &TArray<UDownloadableCharacterDefinition *>::Num)
		.def("__call__", (UDownloadableCharacterDefinition*& (TArray<UDownloadableCharacterDefinition *>::*)(int))&TArray<UDownloadableCharacterDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableVehicleDefinition *> >(m, "TArray<UDownloadableVehicleDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableVehicleDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableVehicleDefinition *>::Max)
		.def("Num", &TArray<UDownloadableVehicleDefinition *>::Num)
		.def("__call__", (UDownloadableVehicleDefinition*& (TArray<UDownloadableVehicleDefinition *>::*)(int))&TArray<UDownloadableVehicleDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableItemSetDefinition *> >(m, "TArray<UDownloadableItemSetDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableItemSetDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableItemSetDefinition *>::Max)
		.def("Num", &TArray<UDownloadableItemSetDefinition *>::Num)
		.def("__call__", (UDownloadableItemSetDefinition*& (TArray<UDownloadableItemSetDefinition *>::*)(int))&TArray<UDownloadableItemSetDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableCustomizationSetDefinition *> >(m, "TArray<UDownloadableCustomizationSetDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableCustomizationSetDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableCustomizationSetDefinition *>::Max)
		.def("Num", &TArray<UDownloadableCustomizationSetDefinition *>::Num)
		.def("__call__", (UDownloadableCustomizationSetDefinition*& (TArray<UDownloadableCustomizationSetDefinition *>::*)(int))&TArray<UDownloadableCustomizationSetDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableAssetLibraryDefinition *> >(m, "TArray<UDownloadableAssetLibraryDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableAssetLibraryDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableAssetLibraryDefinition *>::Max)
		.def("Num", &TArray<UDownloadableAssetLibraryDefinition *>::Num)
		.def("__call__", (UDownloadableAssetLibraryDefinition*& (TArray<UDownloadableAssetLibraryDefinition *>::*)(int))&TArray<UDownloadableAssetLibraryDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDLCMissionData> >(m, "TArray<FDLCMissionData>")

		.def_readwrite("Count", &TArray<FDLCMissionData>::Count)
		.def_readwrite("Max", &TArray<FDLCMissionData>::Max)
		.def("Num", &TArray<FDLCMissionData>::Num)
		.def("__call__", (FDLCMissionData& (TArray<FDLCMissionData>::*)(int))&TArray<FDLCMissionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UDownloadableBalanceModifierDefinition *> >(m, "TArray<UDownloadableBalanceModifierDefinition *>")

		.def_readwrite("Count", &TArray<UDownloadableBalanceModifierDefinition *>::Count)
		.def_readwrite("Max", &TArray<UDownloadableBalanceModifierDefinition *>::Max)
		.def("Num", &TArray<UDownloadableBalanceModifierDefinition *>::Num)
		.def("__call__", (UDownloadableBalanceModifierDefinition*& (TArray<UDownloadableBalanceModifierDefinition *>::*)(int))&TArray<UDownloadableBalanceModifierDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTaggedMarketplaceContent> >(m, "TArray<FTaggedMarketplaceContent>")

		.def_readwrite("Count", &TArray<FTaggedMarketplaceContent>::Count)
		.def_readwrite("Max", &TArray<FTaggedMarketplaceContent>::Max)
		.def("Num", &TArray<FTaggedMarketplaceContent>::Num)
		.def("__call__", (FTaggedMarketplaceContent& (TArray<FTaggedMarketplaceContent>::*)(int))&TArray<FTaggedMarketplaceContent>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRemoveObject> >(m, "TArray<FRemoveObject>")

		.def_readwrite("Count", &TArray<FRemoveObject>::Count)
		.def_readwrite("Max", &TArray<FRemoveObject>::Max)
		.def("Num", &TArray<FRemoveObject>::Num)
		.def("__call__", (FRemoveObject& (TArray<FRemoveObject>::*)(int))&TArray<FRemoveObject>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPremiumCustomizationInfo> >(m, "TArray<FPremiumCustomizationInfo>")

		.def_readwrite("Count", &TArray<FPremiumCustomizationInfo>::Count)
		.def_readwrite("Max", &TArray<FPremiumCustomizationInfo>::Max)
		.def("Num", &TArray<FPremiumCustomizationInfo>::Num)
		.def("__call__", (FPremiumCustomizationInfo& (TArray<FPremiumCustomizationInfo>::*)(int))&TArray<FPremiumCustomizationInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVehicleSpawnStationPooledVehicle> >(m, "TArray<FVehicleSpawnStationPooledVehicle>")

		.def_readwrite("Count", &TArray<FVehicleSpawnStationPooledVehicle>::Count)
		.def_readwrite("Max", &TArray<FVehicleSpawnStationPooledVehicle>::Max)
		.def("Num", &TArray<FVehicleSpawnStationPooledVehicle>::Num)
		.def("__call__", (FVehicleSpawnStationPooledVehicle& (TArray<FVehicleSpawnStationPooledVehicle>::*)(int))&TArray<FVehicleSpawnStationPooledVehicle>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpawnAnimPair> >(m, "TArray<FSpawnAnimPair>")

		.def_readwrite("Count", &TArray<FSpawnAnimPair>::Count)
		.def_readwrite("Max", &TArray<FSpawnAnimPair>::Max)
		.def("Num", &TArray<FSpawnAnimPair>::Num)
		.def("__call__", (FSpawnAnimPair& (TArray<FSpawnAnimPair>::*)(int))&TArray<FSpawnAnimPair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPresetGeneratedPoint> >(m, "TArray<FPresetGeneratedPoint>")

		.def_readwrite("Count", &TArray<FPresetGeneratedPoint>::Count)
		.def_readwrite("Max", &TArray<FPresetGeneratedPoint>::Max)
		.def("Num", &TArray<FPresetGeneratedPoint>::Num)
		.def("__call__", (FPresetGeneratedPoint& (TArray<FPresetGeneratedPoint>::*)(int))&TArray<FPresetGeneratedPoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UNavMeshGoal_Filter *> >(m, "TArray<UNavMeshGoal_Filter *>")

		.def_readwrite("Count", &TArray<UNavMeshGoal_Filter *>::Count)
		.def_readwrite("Max", &TArray<UNavMeshGoal_Filter *>::Max)
		.def("Num", &TArray<UNavMeshGoal_Filter *>::Num)
		.def("__call__", (UNavMeshGoal_Filter*& (TArray<UNavMeshGoal_Filter *>::*)(int))&TArray<UNavMeshGoal_Filter *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBalancedInventoryDataMirror> >(m, "TArray<FBalancedInventoryDataMirror>")

		.def_readwrite("Count", &TArray<FBalancedInventoryDataMirror>::Count)
		.def_readwrite("Max", &TArray<FBalancedInventoryDataMirror>::Max)
		.def("Num", &TArray<FBalancedInventoryDataMirror>::Num)
		.def("__call__", (FBalancedInventoryDataMirror& (TArray<FBalancedInventoryDataMirror>::*)(int))&TArray<FBalancedInventoryDataMirror>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScalarMaterialParameter> >(m, "TArray<FScalarMaterialParameter>")

		.def_readwrite("Count", &TArray<FScalarMaterialParameter>::Count)
		.def_readwrite("Max", &TArray<FScalarMaterialParameter>::Max)
		.def("Num", &TArray<FScalarMaterialParameter>::Num)
		.def("__call__", (FScalarMaterialParameter& (TArray<FScalarMaterialParameter>::*)(int))&TArray<FScalarMaterialParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FIndependentSelectionData> >(m, "TArray<FIndependentSelectionData>")

		.def_readwrite("Count", &TArray<FIndependentSelectionData>::Count)
		.def_readwrite("Max", &TArray<FIndependentSelectionData>::Max)
		.def("Num", &TArray<FIndependentSelectionData>::Num)
		.def("__call__", (FIndependentSelectionData& (TArray<FIndependentSelectionData>::*)(int))&TArray<FIndependentSelectionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTextureMaterialParameter> >(m, "TArray<FTextureMaterialParameter>")

		.def_readwrite("Count", &TArray<FTextureMaterialParameter>::Count)
		.def_readwrite("Max", &TArray<FTextureMaterialParameter>::Max)
		.def("Num", &TArray<FTextureMaterialParameter>::Num)
		.def("__call__", (FTextureMaterialParameter& (TArray<FTextureMaterialParameter>::*)(int))&TArray<FTextureMaterialParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVectorMaterialParameter> >(m, "TArray<FVectorMaterialParameter>")

		.def_readwrite("Count", &TArray<FVectorMaterialParameter>::Count)
		.def_readwrite("Max", &TArray<FVectorMaterialParameter>::Max)
		.def("Num", &TArray<FVectorMaterialParameter>::Num)
		.def("__call__", (FVectorMaterialParameter& (TArray<FVectorMaterialParameter>::*)(int))&TArray<FVectorMaterialParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponMemento> >(m, "TArray<FWeaponMemento>")

		.def_readwrite("Count", &TArray<FWeaponMemento>::Count)
		.def_readwrite("Max", &TArray<FWeaponMemento>::Max)
		.def("Num", &TArray<FWeaponMemento>::Num)
		.def("__call__", (FWeaponMemento& (TArray<FWeaponMemento>::*)(int))&TArray<FWeaponMemento>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FItemMemento> >(m, "TArray<FItemMemento>")

		.def_readwrite("Count", &TArray<FItemMemento>::Count)
		.def_readwrite("Max", &TArray<FItemMemento>::Max)
		.def("Num", &TArray<FItemMemento>::Num)
		.def("__call__", (FItemMemento& (TArray<FItemMemento>::*)(int))&TArray<FItemMemento>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIPawnPlaythroughData> >(m, "TArray<FAIPawnPlaythroughData>")

		.def_readwrite("Count", &TArray<FAIPawnPlaythroughData>::Count)
		.def_readwrite("Max", &TArray<FAIPawnPlaythroughData>::Max)
		.def("Num", &TArray<FAIPawnPlaythroughData>::Num)
		.def("__call__", (FAIPawnPlaythroughData& (TArray<FAIPawnPlaythroughData>::*)(int))&TArray<FAIPawnPlaythroughData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIPawnGameStageGradeWeightData> >(m, "TArray<FAIPawnGameStageGradeWeightData>")

		.def_readwrite("Count", &TArray<FAIPawnGameStageGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FAIPawnGameStageGradeWeightData>::Max)
		.def("Num", &TArray<FAIPawnGameStageGradeWeightData>::Num)
		.def("__call__", (FAIPawnGameStageGradeWeightData& (TArray<FAIPawnGameStageGradeWeightData>::*)(int))&TArray<FAIPawnGameStageGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGCReference> >(m, "TArray<FGCReference>")

		.def_readwrite("Count", &TArray<FGCReference>::Count)
		.def_readwrite("Max", &TArray<FGCReference>::Max)
		.def("Num", &TArray<FGCReference>::Num)
		.def("__call__", (FGCReference& (TArray<FGCReference>::*)(int))&TArray<FGCReference>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationOptionAreaPopDefData> >(m, "TArray<FPopulationOptionAreaPopDefData>")

		.def_readwrite("Count", &TArray<FPopulationOptionAreaPopDefData>::Count)
		.def_readwrite("Max", &TArray<FPopulationOptionAreaPopDefData>::Max)
		.def("Num", &TArray<FPopulationOptionAreaPopDefData>::Num)
		.def("__call__", (FPopulationOptionAreaPopDefData& (TArray<FPopulationOptionAreaPopDefData>::*)(int))&TArray<FPopulationOptionAreaPopDefData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConnectionBandwidthStats> >(m, "TArray<FConnectionBandwidthStats>")

		.def_readwrite("Count", &TArray<FConnectionBandwidthStats>::Count)
		.def_readwrite("Max", &TArray<FConnectionBandwidthStats>::Max)
		.def("Num", &TArray<FConnectionBandwidthStats>::Num)
		.def("__call__", (FConnectionBandwidthStats& (TArray<FConnectionBandwidthStats>::*)(int))&TArray<FConnectionBandwidthStats>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FScalarParticleSystemParameter> >(m, "TArray<FScalarParticleSystemParameter>")

		.def_readwrite("Count", &TArray<FScalarParticleSystemParameter>::Count)
		.def_readwrite("Max", &TArray<FScalarParticleSystemParameter>::Max)
		.def("Num", &TArray<FScalarParticleSystemParameter>::Num)
		.def("__call__", (FScalarParticleSystemParameter& (TArray<FScalarParticleSystemParameter>::*)(int))&TArray<FScalarParticleSystemParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVectorParticleSystemParameter> >(m, "TArray<FVectorParticleSystemParameter>")

		.def_readwrite("Count", &TArray<FVectorParticleSystemParameter>::Count)
		.def_readwrite("Max", &TArray<FVectorParticleSystemParameter>::Max)
		.def("Num", &TArray<FVectorParticleSystemParameter>::Num)
		.def("__call__", (FVectorParticleSystemParameter& (TArray<FVectorParticleSystemParameter>::*)(int))&TArray<FVectorParticleSystemParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FColorParticleSystemParameter> >(m, "TArray<FColorParticleSystemParameter>")

		.def_readwrite("Count", &TArray<FColorParticleSystemParameter>::Count)
		.def_readwrite("Max", &TArray<FColorParticleSystemParameter>::Max)
		.def("Num", &TArray<FColorParticleSystemParameter>::Num)
		.def("__call__", (FColorParticleSystemParameter& (TArray<FColorParticleSystemParameter>::*)(int))&TArray<FColorParticleSystemParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMaterialParticleSystemParameter> >(m, "TArray<FMaterialParticleSystemParameter>")

		.def_readwrite("Count", &TArray<FMaterialParticleSystemParameter>::Count)
		.def_readwrite("Max", &TArray<FMaterialParticleSystemParameter>::Max)
		.def("Num", &TArray<FMaterialParticleSystemParameter>::Num)
		.def("__call__", (FMaterialParticleSystemParameter& (TArray<FMaterialParticleSystemParameter>::*)(int))&TArray<FMaterialParticleSystemParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FActorParticleSystemParameter> >(m, "TArray<FActorParticleSystemParameter>")

		.def_readwrite("Count", &TArray<FActorParticleSystemParameter>::Count)
		.def_readwrite("Max", &TArray<FActorParticleSystemParameter>::Max)
		.def("Num", &TArray<FActorParticleSystemParameter>::Num)
		.def("__call__", (FActorParticleSystemParameter& (TArray<FActorParticleSystemParameter>::*)(int))&TArray<FActorParticleSystemParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerMember> >(m, "TArray<FPlayerMember>")

		.def_readwrite("Count", &TArray<FPlayerMember>::Count)
		.def_readwrite("Max", &TArray<FPlayerMember>::Max)
		.def("Num", &TArray<FPlayerMember>::Num)
		.def("__call__", (FPlayerMember& (TArray<FPlayerMember>::*)(int))&TArray<FPlayerMember>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSavedRandomValue> >(m, "TArray<FSavedRandomValue>")

		.def_readwrite("Count", &TArray<FSavedRandomValue>::Count)
		.def_readwrite("Max", &TArray<FSavedRandomValue>::Max)
		.def("Num", &TArray<FSavedRandomValue>::Num)
		.def("__call__", (FSavedRandomValue& (TArray<FSavedRandomValue>::*)(int))&TArray<FSavedRandomValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData> >(m, "TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData>")

		.def_readwrite("Count", &TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData>::Count)
		.def_readwrite("Max", &TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData>::Max)
		.def("Num", &TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData>::Num)
		.def("__call__", (UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData& (TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData>::*)(int))&TArray<UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorsSelectionData> >(m, "TArray<FBehaviorsSelectionData>")

		.def_readwrite("Count", &TArray<FBehaviorsSelectionData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorsSelectionData>::Max)
		.def("Num", &TArray<FBehaviorsSelectionData>::Num)
		.def("__call__", (FBehaviorsSelectionData& (TArray<FBehaviorsSelectionData>::*)(int))&TArray<FBehaviorsSelectionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPerBoneMaskInfo> >(m, "TArray<FPerBoneMaskInfo>")

		.def_readwrite("Count", &TArray<FPerBoneMaskInfo>::Count)
		.def_readwrite("Max", &TArray<FPerBoneMaskInfo>::Max)
		.def("Num", &TArray<FPerBoneMaskInfo>::Num)
		.def("__call__", (FPerBoneMaskInfo& (TArray<FPerBoneMaskInfo>::*)(int))&TArray<FPerBoneMaskInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBranchInfo> >(m, "TArray<FBranchInfo>")

		.def_readwrite("Count", &TArray<FBranchInfo>::Count)
		.def_readwrite("Max", &TArray<FBranchInfo>::Max)
		.def("Num", &TArray<FBranchInfo>::Num)
		.def("__call__", (FBranchInfo& (TArray<FBranchInfo>::*)(int))&TArray<FBranchInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeightRule> >(m, "TArray<FWeightRule>")

		.def_readwrite("Count", &TArray<FWeightRule>::Count)
		.def_readwrite("Max", &TArray<FWeightRule>::Max)
		.def("Num", &TArray<FWeightRule>::Num)
		.def("__call__", (FWeightRule& (TArray<FWeightRule>::*)(int))&TArray<FWeightRule>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameEvents> >(m, "TArray<FGameEvents>")

		.def_readwrite("Count", &TArray<FGameEvents>::Count)
		.def_readwrite("Max", &TArray<FGameEvents>::Max)
		.def("Num", &TArray<FGameEvents>::Num)
		.def("__call__", (FGameEvents& (TArray<FGameEvents>::*)(int))&TArray<FGameEvents>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIThrowProjectileBehaviorSequenceStateData> >(m, "TArray<FAIThrowProjectileBehaviorSequenceStateData>")

		.def_readwrite("Count", &TArray<FAIThrowProjectileBehaviorSequenceStateData>::Count)
		.def_readwrite("Max", &TArray<FAIThrowProjectileBehaviorSequenceStateData>::Max)
		.def("Num", &TArray<FAIThrowProjectileBehaviorSequenceStateData>::Num)
		.def("__call__", (FAIThrowProjectileBehaviorSequenceStateData& (TArray<FAIThrowProjectileBehaviorSequenceStateData>::*)(int))&TArray<FAIThrowProjectileBehaviorSequenceStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FServerQueryToRulesResponseMapping> >(m, "TArray<FServerQueryToRulesResponseMapping>")

		.def_readwrite("Count", &TArray<FServerQueryToRulesResponseMapping>::Count)
		.def_readwrite("Max", &TArray<FServerQueryToRulesResponseMapping>::Max)
		.def("Num", &TArray<FServerQueryToRulesResponseMapping>::Num)
		.def("__call__", (FServerQueryToRulesResponseMapping& (TArray<FServerQueryToRulesResponseMapping>::*)(int))&TArray<FServerQueryToRulesResponseMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FServerQueryToPingResponseMapping> >(m, "TArray<FServerQueryToPingResponseMapping>")

		.def_readwrite("Count", &TArray<FServerQueryToPingResponseMapping>::Count)
		.def_readwrite("Max", &TArray<FServerQueryToPingResponseMapping>::Max)
		.def("Num", &TArray<FServerQueryToPingResponseMapping>::Num)
		.def("__call__", (FServerQueryToPingResponseMapping& (TArray<FServerQueryToPingResponseMapping>::*)(int))&TArray<FServerQueryToPingResponseMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FClientFilterORClause> >(m, "TArray<FClientFilterORClause>")

		.def_readwrite("Count", &TArray<FClientFilterORClause>::Count)
		.def_readwrite("Max", &TArray<FClientFilterORClause>::Max)
		.def("Num", &TArray<FClientFilterORClause>::Num)
		.def("__call__", (FClientFilterORClause& (TArray<FClientFilterORClause>::*)(int))&TArray<FClientFilterORClause>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFilterKeyToSteamKeyMapping> >(m, "TArray<FFilterKeyToSteamKeyMapping>")

		.def_readwrite("Count", &TArray<FFilterKeyToSteamKeyMapping>::Count)
		.def_readwrite("Max", &TArray<FFilterKeyToSteamKeyMapping>::Max)
		.def("Num", &TArray<FFilterKeyToSteamKeyMapping>::Num)
		.def("__call__", (FFilterKeyToSteamKeyMapping& (TArray<FFilterKeyToSteamKeyMapping>::*)(int))&TArray<FFilterKeyToSteamKeyMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRemoteTalker> >(m, "TArray<FRemoteTalker>")

		.def_readwrite("Count", &TArray<FRemoteTalker>::Count)
		.def_readwrite("Max", &TArray<FRemoteTalker>::Max)
		.def("Num", &TArray<FRemoteTalker>::Num)
		.def("__call__", (FRemoteTalker& (TArray<FRemoteTalker>::*)(int))&TArray<FRemoteTalker>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPropertyToColumn> >(m, "TArray<FPropertyToColumn>")

		.def_readwrite("Count", &TArray<FPropertyToColumn>::Count)
		.def_readwrite("Max", &TArray<FPropertyToColumn>::Max)
		.def("Num", &TArray<FPropertyToColumn>::Num)
		.def("__call__", (FPropertyToColumn& (TArray<FPropertyToColumn>::*)(int))&TArray<FPropertyToColumn>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPendingPlayerStats> >(m, "TArray<FPendingPlayerStats>")

		.def_readwrite("Count", &TArray<FPendingPlayerStats>::Count)
		.def_readwrite("Max", &TArray<FPendingPlayerStats>::Max)
		.def("Num", &TArray<FPendingPlayerStats>::Num)
		.def("__call__", (FPendingPlayerStats& (TArray<FPendingPlayerStats>::*)(int))&TArray<FPendingPlayerStats>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerStat> >(m, "TArray<FPlayerStat>")

		.def_readwrite("Count", &TArray<FPlayerStat>::Count)
		.def_readwrite("Max", &TArray<FPlayerStat>::Max)
		.def("Num", &TArray<FPlayerStat>::Num)
		.def("__call__", (FPlayerStat& (TArray<FPlayerStat>::*)(int))&TArray<FPlayerStat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineStatusMapping> >(m, "TArray<FOnlineStatusMapping>")

		.def_readwrite("Count", &TArray<FOnlineStatusMapping>::Count)
		.def_readwrite("Max", &TArray<FOnlineStatusMapping>::Max)
		.def("Num", &TArray<FOnlineStatusMapping>::Num)
		.def("__call__", (FOnlineStatusMapping& (TArray<FOnlineStatusMapping>::*)(int))&TArray<FOnlineStatusMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineStatusPropertyMapping> >(m, "TArray<FOnlineStatusPropertyMapping>")

		.def_readwrite("Count", &TArray<FOnlineStatusPropertyMapping>::Count)
		.def_readwrite("Max", &TArray<FOnlineStatusPropertyMapping>::Max)
		.def("Num", &TArray<FOnlineStatusPropertyMapping>::Num)
		.def("__call__", (FOnlineStatusPropertyMapping& (TArray<FOnlineStatusPropertyMapping>::*)(int))&TArray<FOnlineStatusPropertyMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOnlineStatusContextMapping> >(m, "TArray<FOnlineStatusContextMapping>")

		.def_readwrite("Count", &TArray<FOnlineStatusContextMapping>::Count)
		.def_readwrite("Max", &TArray<FOnlineStatusContextMapping>::Max)
		.def("Num", &TArray<FOnlineStatusContextMapping>::Num)
		.def("__call__", (FOnlineStatusContextMapping& (TArray<FOnlineStatusContextMapping>::*)(int))&TArray<FOnlineStatusContextMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTitleFile> >(m, "TArray<FTitleFile>")

		.def_readwrite("Count", &TArray<FTitleFile>::Count)
		.def_readwrite("Max", &TArray<FTitleFile>::Max)
		.def("Num", &TArray<FTitleFile>::Num)
		.def("__call__", (FTitleFile& (TArray<FTitleFile>::*)(int))&TArray<FTitleFile>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTitleFileMapping> >(m, "TArray<FTitleFileMapping>")

		.def_readwrite("Count", &TArray<FTitleFileMapping>::Count)
		.def_readwrite("Max", &TArray<FTitleFileMapping>::Max)
		.def("Num", &TArray<FTitleFileMapping>::Num)
		.def("__call__", (FTitleFileMapping& (TArray<FTitleFileMapping>::*)(int))&TArray<FTitleFileMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FQueuedAvatarRequest> >(m, "TArray<FQueuedAvatarRequest>")

		.def_readwrite("Count", &TArray<FQueuedAvatarRequest>::Count)
		.def_readwrite("Max", &TArray<FQueuedAvatarRequest>::Max)
		.def("Num", &TArray<FQueuedAvatarRequest>::Num)
		.def("__call__", (FQueuedAvatarRequest& (TArray<FQueuedAvatarRequest>::*)(int))&TArray<FQueuedAvatarRequest>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAchievementMappingInfo> >(m, "TArray<FAchievementMappingInfo>")

		.def_readwrite("Count", &TArray<FAchievementMappingInfo>::Count)
		.def_readwrite("Max", &TArray<FAchievementMappingInfo>::Max)
		.def("Num", &TArray<FAchievementMappingInfo>::Num)
		.def("__call__", (FAchievementMappingInfo& (TArray<FAchievementMappingInfo>::*)(int))&TArray<FAchievementMappingInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAchievementProgressStat> >(m, "TArray<FAchievementProgressStat>")

		.def_readwrite("Count", &TArray<FAchievementProgressStat>::Count)
		.def_readwrite("Max", &TArray<FAchievementProgressStat>::Max)
		.def("Num", &TArray<FAchievementProgressStat>::Num)
		.def("__call__", (FAchievementProgressStat& (TArray<FAchievementProgressStat>::*)(int))&TArray<FAchievementProgressStat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSteamPlayerClanData> >(m, "TArray<FSteamPlayerClanData>")

		.def_readwrite("Count", &TArray<FSteamPlayerClanData>::Count)
		.def_readwrite("Max", &TArray<FSteamPlayerClanData>::Max)
		.def("Num", &TArray<FSteamPlayerClanData>::Num)
		.def("__call__", (FSteamPlayerClanData& (TArray<FSteamPlayerClanData>::*)(int))&TArray<FSteamPlayerClanData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameStatGroup> >(m, "TArray<FGameStatGroup>")

		.def_readwrite("Count", &TArray<FGameStatGroup>::Count)
		.def_readwrite("Max", &TArray<FGameStatGroup>::Max)
		.def("Num", &TArray<FGameStatGroup>::Num)
		.def("__call__", (FGameStatGroup& (TArray<FGameStatGroup>::*)(int))&TArray<FGameStatGroup>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGameplayEventsHandler *> >(m, "TArray<UGameplayEventsHandler *>")

		.def_readwrite("Count", &TArray<UGameplayEventsHandler *>::Count)
		.def_readwrite("Max", &TArray<UGameplayEventsHandler *>::Max)
		.def("Num", &TArray<UGameplayEventsHandler *>::Num)
		.def("__call__", (UGameplayEventsHandler*& (TArray<UGameplayEventsHandler *>::*)(int))&TArray<UGameplayEventsHandler *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerInformation> >(m, "TArray<FPlayerInformation>")

		.def_readwrite("Count", &TArray<FPlayerInformation>::Count)
		.def_readwrite("Max", &TArray<FPlayerInformation>::Max)
		.def("Num", &TArray<FPlayerInformation>::Num)
		.def("__call__", (FPlayerInformation& (TArray<FPlayerInformation>::*)(int))&TArray<FPlayerInformation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTeamInformation> >(m, "TArray<FTeamInformation>")

		.def_readwrite("Count", &TArray<FTeamInformation>::Count)
		.def_readwrite("Max", &TArray<FTeamInformation>::Max)
		.def("Num", &TArray<FTeamInformation>::Num)
		.def("__call__", (FTeamInformation& (TArray<FTeamInformation>::*)(int))&TArray<FTeamInformation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameplayEventMetaData> >(m, "TArray<FGameplayEventMetaData>")

		.def_readwrite("Count", &TArray<FGameplayEventMetaData>::Count)
		.def_readwrite("Max", &TArray<FGameplayEventMetaData>::Max)
		.def("Num", &TArray<FGameplayEventMetaData>::Num)
		.def("__call__", (FGameplayEventMetaData& (TArray<FGameplayEventMetaData>::*)(int))&TArray<FGameplayEventMetaData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponClassEventData> >(m, "TArray<FWeaponClassEventData>")

		.def_readwrite("Count", &TArray<FWeaponClassEventData>::Count)
		.def_readwrite("Max", &TArray<FWeaponClassEventData>::Max)
		.def("Num", &TArray<FWeaponClassEventData>::Num)
		.def("__call__", (FWeaponClassEventData& (TArray<FWeaponClassEventData>::*)(int))&TArray<FWeaponClassEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageClassEventData> >(m, "TArray<FDamageClassEventData>")

		.def_readwrite("Count", &TArray<FDamageClassEventData>::Count)
		.def_readwrite("Max", &TArray<FDamageClassEventData>::Max)
		.def("Num", &TArray<FDamageClassEventData>::Num)
		.def("__call__", (FDamageClassEventData& (TArray<FDamageClassEventData>::*)(int))&TArray<FDamageClassEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FProjectileClassEventData> >(m, "TArray<FProjectileClassEventData>")

		.def_readwrite("Count", &TArray<FProjectileClassEventData>::Count)
		.def_readwrite("Max", &TArray<FProjectileClassEventData>::Max)
		.def("Num", &TArray<FProjectileClassEventData>::Num)
		.def("__call__", (FProjectileClassEventData& (TArray<FProjectileClassEventData>::*)(int))&TArray<FProjectileClassEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPawnClassEventData> >(m, "TArray<FPawnClassEventData>")

		.def_readwrite("Count", &TArray<FPawnClassEventData>::Count)
		.def_readwrite("Max", &TArray<FPawnClassEventData>::Max)
		.def("Num", &TArray<FPawnClassEventData>::Num)
		.def("__call__", (FPawnClassEventData& (TArray<FPawnClassEventData>::*)(int))&TArray<FPawnClassEventData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHybridNavVisualizationVertsForNavPoint> >(m, "TArray<FHybridNavVisualizationVertsForNavPoint>")

		.def_readwrite("Count", &TArray<FHybridNavVisualizationVertsForNavPoint>::Count)
		.def_readwrite("Max", &TArray<FHybridNavVisualizationVertsForNavPoint>::Max)
		.def("Num", &TArray<FHybridNavVisualizationVertsForNavPoint>::Num)
		.def("__call__", (FHybridNavVisualizationVertsForNavPoint& (TArray<FHybridNavVisualizationVertsForNavPoint>::*)(int))&TArray<FHybridNavVisualizationVertsForNavPoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHybridNavVisualizationVert> >(m, "TArray<FHybridNavVisualizationVert>")

		.def_readwrite("Count", &TArray<FHybridNavVisualizationVert>::Count)
		.def_readwrite("Max", &TArray<FHybridNavVisualizationVert>::Max)
		.def("Num", &TArray<FHybridNavVisualizationVert>::Num)
		.def("__call__", (FHybridNavVisualizationVert& (TArray<FHybridNavVisualizationVert>::*)(int))&TArray<FHybridNavVisualizationVert>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFiringZoneDefinition *> >(m, "TArray<UFiringZoneDefinition *>")

		.def_readwrite("Count", &TArray<UFiringZoneDefinition *>::Count)
		.def_readwrite("Max", &TArray<UFiringZoneDefinition *>::Max)
		.def("Num", &TArray<UFiringZoneDefinition *>::Num)
		.def("__call__", (UFiringZoneDefinition*& (TArray<UFiringZoneDefinition *>::*)(int))&TArray<UFiringZoneDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FConditionalPattern> >(m, "TArray<FConditionalPattern>")

		.def_readwrite("Count", &TArray<FConditionalPattern>::Count)
		.def_readwrite("Max", &TArray<FConditionalPattern>::Max)
		.def("Num", &TArray<FConditionalPattern>::Num)
		.def("__call__", (FConditionalPattern& (TArray<FConditionalPattern>::*)(int))&TArray<FConditionalPattern>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UFiringCondition *> >(m, "TArray<UFiringCondition *>")

		.def_readwrite("Count", &TArray<UFiringCondition *>::Count)
		.def_readwrite("Max", &TArray<UFiringCondition *>::Max)
		.def("Num", &TArray<UFiringCondition *>::Num)
		.def("__call__", (UFiringCondition*& (TArray<UFiringCondition *>::*)(int))&TArray<UFiringCondition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCommunityContentFile> >(m, "TArray<FCommunityContentFile>")

		.def_readwrite("Count", &TArray<FCommunityContentFile>::Count)
		.def_readwrite("Max", &TArray<FCommunityContentFile>::Max)
		.def("Num", &TArray<FCommunityContentFile>::Num)
		.def("__call__", (FCommunityContentFile& (TArray<FCommunityContentFile>::*)(int))&TArray<FCommunityContentFile>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPhysicsJumpConnection *> >(m, "TArray<UPhysicsJumpConnection *>")

		.def_readwrite("Count", &TArray<UPhysicsJumpConnection *>::Count)
		.def_readwrite("Max", &TArray<UPhysicsJumpConnection *>::Max)
		.def("Num", &TArray<UPhysicsJumpConnection *>::Num)
		.def("__call__", (UPhysicsJumpConnection*& (TArray<UPhysicsJumpConnection *>::*)(int))&TArray<UPhysicsJumpConnection *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPopulationBodyTag *> >(m, "TArray<UPopulationBodyTag *>")

		.def_readwrite("Count", &TArray<UPopulationBodyTag *>::Count)
		.def_readwrite("Max", &TArray<UPopulationBodyTag *>::Max)
		.def("Num", &TArray<UPopulationBodyTag *>::Num)
		.def("__call__", (UPopulationBodyTag*& (TArray<UPopulationBodyTag *>::*)(int))&TArray<UPopulationBodyTag *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPhysicalMaterialTireModel> >(m, "TArray<FPhysicalMaterialTireModel>")

		.def_readwrite("Count", &TArray<FPhysicalMaterialTireModel>::Count)
		.def_readwrite("Max", &TArray<FPhysicalMaterialTireModel>::Max)
		.def("Num", &TArray<FPhysicalMaterialTireModel>::Num)
		.def("__call__", (FPhysicalMaterialTireModel& (TArray<FPhysicalMaterialTireModel>::*)(int))&TArray<FPhysicalMaterialTireModel>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMaterialReferenceList> >(m, "TArray<FMaterialReferenceList>")

		.def_readwrite("Count", &TArray<FMaterialReferenceList>::Count)
		.def_readwrite("Max", &TArray<FMaterialReferenceList>::Max)
		.def("Num", &TArray<FMaterialReferenceList>::Num)
		.def("__call__", (FMaterialReferenceList& (TArray<FMaterialReferenceList>::*)(int))&TArray<FMaterialReferenceList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPrimitiveMaterialRef> >(m, "TArray<FPrimitiveMaterialRef>")

		.def_readwrite("Count", &TArray<FPrimitiveMaterialRef>::Count)
		.def_readwrite("Max", &TArray<FPrimitiveMaterialRef>::Max)
		.def("Num", &TArray<FPrimitiveMaterialRef>::Num)
		.def("__call__", (FPrimitiveMaterialRef& (TArray<FPrimitiveMaterialRef>::*)(int))&TArray<FPrimitiveMaterialRef>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPostProcessMaterialRef> >(m, "TArray<FPostProcessMaterialRef>")

		.def_readwrite("Count", &TArray<FPostProcessMaterialRef>::Count)
		.def_readwrite("Max", &TArray<FPostProcessMaterialRef>::Max)
		.def("Num", &TArray<FPostProcessMaterialRef>::Num)
		.def("__call__", (FPostProcessMaterialRef& (TArray<FPostProcessMaterialRef>::*)(int))&TArray<FPostProcessMaterialRef>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSpawnAnimData> >(m, "TArray<FSpawnAnimData>")

		.def_readwrite("Count", &TArray<FSpawnAnimData>::Count)
		.def_readwrite("Max", &TArray<FSpawnAnimData>::Max)
		.def("Num", &TArray<FSpawnAnimData>::Num)
		.def("__call__", (FSpawnAnimData& (TArray<FSpawnAnimData>::*)(int))&TArray<FSpawnAnimData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLensFlareElement> >(m, "TArray<FLensFlareElement>")

		.def_readwrite("Count", &TArray<FLensFlareElement>::Count)
		.def_readwrite("Max", &TArray<FLensFlareElement>::Max)
		.def("Num", &TArray<FLensFlareElement>::Num)
		.def("__call__", (FLensFlareElement& (TArray<FLensFlareElement>::*)(int))&TArray<FLensFlareElement>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLensFlareElementMaterials> >(m, "TArray<FLensFlareElementMaterials>")

		.def_readwrite("Count", &TArray<FLensFlareElementMaterials>::Count)
		.def_readwrite("Max", &TArray<FLensFlareElementMaterials>::Max)
		.def("Num", &TArray<FLensFlareElementMaterials>::Num)
		.def("__call__", (FLensFlareElementMaterials& (TArray<FLensFlareElementMaterials>::*)(int))&TArray<FLensFlareElementMaterials>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APopulationEncounter *> >(m, "TArray<APopulationEncounter *>")

		.def_readwrite("Count", &TArray<APopulationEncounter *>::Count)
		.def_readwrite("Max", &TArray<APopulationEncounter *>::Max)
		.def("Num", &TArray<APopulationEncounter *>::Num)
		.def("__call__", (APopulationEncounter*& (TArray<APopulationEncounter *>::*)(int))&TArray<APopulationEncounter *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UPhysicalMaterial *> >(m, "TArray<UPhysicalMaterial *>")

		.def_readwrite("Count", &TArray<UPhysicalMaterial *>::Count)
		.def_readwrite("Max", &TArray<UPhysicalMaterial *>::Max)
		.def("Num", &TArray<UPhysicalMaterial *>::Num)
		.def("__call__", (UPhysicalMaterial*& (TArray<UPhysicalMaterial *>::*)(int))&TArray<UPhysicalMaterial *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNewsCacheEntry> >(m, "TArray<FNewsCacheEntry>")

		.def_readwrite("Count", &TArray<FNewsCacheEntry>::Count)
		.def_readwrite("Max", &TArray<FNewsCacheEntry>::Max)
		.def("Num", &TArray<FNewsCacheEntry>::Num)
		.def("__call__", (FNewsCacheEntry& (TArray<FNewsCacheEntry>::*)(int))&TArray<FNewsCacheEntry>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEventUploadConfig> >(m, "TArray<FEventUploadConfig>")

		.def_readwrite("Count", &TArray<FEventUploadConfig>::Count)
		.def_readwrite("Max", &TArray<FEventUploadConfig>::Max)
		.def("Num", &TArray<FEventUploadConfig>::Num)
		.def("__call__", (FEventUploadConfig& (TArray<FEventUploadConfig>::*)(int))&TArray<FEventUploadConfig>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStoredFoliageInstance> >(m, "TArray<FStoredFoliageInstance>")

		.def_readwrite("Count", &TArray<FStoredFoliageInstance>::Count)
		.def_readwrite("Max", &TArray<FStoredFoliageInstance>::Max)
		.def("Num", &TArray<FStoredFoliageInstance>::Num)
		.def("__call__", (FStoredFoliageInstance& (TArray<FStoredFoliageInstance>::*)(int))&TArray<FStoredFoliageInstance>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHeadTrackingKey> >(m, "TArray<FHeadTrackingKey>")

		.def_readwrite("Count", &TArray<FHeadTrackingKey>::Count)
		.def_readwrite("Max", &TArray<FHeadTrackingKey>::Max)
		.def("Num", &TArray<FHeadTrackingKey>::Num)
		.def("__call__", (FHeadTrackingKey& (TArray<FHeadTrackingKey>::*)(int))&TArray<FHeadTrackingKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRelevanceUpdateStruct> >(m, "TArray<FRelevanceUpdateStruct>")

		.def_readwrite("Count", &TArray<FRelevanceUpdateStruct>::Count)
		.def_readwrite("Max", &TArray<FRelevanceUpdateStruct>::Max)
		.def("Num", &TArray<FRelevanceUpdateStruct>::Num)
		.def("__call__", (FRelevanceUpdateStruct& (TArray<FRelevanceUpdateStruct>::*)(int))&TArray<FRelevanceUpdateStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRelevanceBucketStruct> >(m, "TArray<FRelevanceBucketStruct>")

		.def_readwrite("Count", &TArray<FRelevanceBucketStruct>::Count)
		.def_readwrite("Max", &TArray<FRelevanceBucketStruct>::Max)
		.def("Num", &TArray<FRelevanceBucketStruct>::Num)
		.def("__call__", (FRelevanceBucketStruct& (TArray<FRelevanceBucketStruct>::*)(int))&TArray<FRelevanceBucketStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRelevanceCacheStruct> >(m, "TArray<FRelevanceCacheStruct>")

		.def_readwrite("Count", &TArray<FRelevanceCacheStruct>::Count)
		.def_readwrite("Max", &TArray<FRelevanceCacheStruct>::Max)
		.def("Num", &TArray<FRelevanceCacheStruct>::Num)
		.def("__call__", (FRelevanceCacheStruct& (TArray<FRelevanceCacheStruct>::*)(int))&TArray<FRelevanceCacheStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAggregateEventMapping> >(m, "TArray<FAggregateEventMapping>")

		.def_readwrite("Count", &TArray<FAggregateEventMapping>::Count)
		.def_readwrite("Max", &TArray<FAggregateEventMapping>::Max)
		.def("Num", &TArray<FAggregateEventMapping>::Num)
		.def("__call__", (FAggregateEventMapping& (TArray<FAggregateEventMapping>::*)(int))&TArray<FAggregateEventMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTeamEvents> >(m, "TArray<FTeamEvents>")

		.def_readwrite("Count", &TArray<FTeamEvents>::Count)
		.def_readwrite("Max", &TArray<FTeamEvents>::Max)
		.def("Num", &TArray<FTeamEvents>::Num)
		.def("__call__", (FTeamEvents& (TArray<FTeamEvents>::*)(int))&TArray<FTeamEvents>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UGearboxAccountData *> >(m, "TArray<UGearboxAccountData *>")

		.def_readwrite("Count", &TArray<UGearboxAccountData *>::Count)
		.def_readwrite("Max", &TArray<UGearboxAccountData *>::Max)
		.def("Num", &TArray<UGearboxAccountData *>::Num)
		.def("__call__", (UGearboxAccountData*& (TArray<UGearboxAccountData *>::*)(int))&TArray<UGearboxAccountData *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSparkOutstandingRequest> >(m, "TArray<FSparkOutstandingRequest>")

		.def_readwrite("Count", &TArray<FSparkOutstandingRequest>::Count)
		.def_readwrite("Max", &TArray<FSparkOutstandingRequest>::Max)
		.def("Num", &TArray<FSparkOutstandingRequest>::Num)
		.def("__call__", (FSparkOutstandingRequest& (TArray<FSparkOutstandingRequest>::*)(int))&TArray<FSparkOutstandingRequest>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowElevatorButton *> >(m, "TArray<AWillowElevatorButton *>")

		.def_readwrite("Count", &TArray<AWillowElevatorButton *>::Count)
		.def_readwrite("Max", &TArray<AWillowElevatorButton *>::Max)
		.def("Num", &TArray<AWillowElevatorButton *>::Num)
		.def("__call__", (AWillowElevatorButton*& (TArray<AWillowElevatorButton *>::*)(int))&TArray<AWillowElevatorButton *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowElevator *> >(m, "TArray<AWillowElevator *>")

		.def_readwrite("Count", &TArray<AWillowElevator *>::Count)
		.def_readwrite("Max", &TArray<AWillowElevator *>::Max)
		.def("Num", &TArray<AWillowElevator *>::Num)
		.def("__call__", (AWillowElevator*& (TArray<AWillowElevator *>::*)(int))&TArray<AWillowElevator *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorContextData> >(m, "TArray<FBehaviorContextData>")

		.def_readwrite("Count", &TArray<FBehaviorContextData>::Count)
		.def_readwrite("Max", &TArray<FBehaviorContextData>::Max)
		.def("Num", &TArray<FBehaviorContextData>::Num)
		.def("__call__", (FBehaviorContextData& (TArray<FBehaviorContextData>::*)(int))&TArray<FBehaviorContextData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDynamicNavMeshConnection> >(m, "TArray<FDynamicNavMeshConnection>")

		.def_readwrite("Count", &TArray<FDynamicNavMeshConnection>::Count)
		.def_readwrite("Max", &TArray<FDynamicNavMeshConnection>::Max)
		.def("Num", &TArray<FDynamicNavMeshConnection>::Num)
		.def("__call__", (FDynamicNavMeshConnection& (TArray<FDynamicNavMeshConnection>::*)(int))&TArray<FDynamicNavMeshConnection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowDynamicNavMeshConnectionPoint *> >(m, "TArray<AWillowDynamicNavMeshConnectionPoint *>")

		.def_readwrite("Count", &TArray<AWillowDynamicNavMeshConnectionPoint *>::Count)
		.def_readwrite("Max", &TArray<AWillowDynamicNavMeshConnectionPoint *>::Max)
		.def("Num", &TArray<AWillowDynamicNavMeshConnectionPoint *>::Num)
		.def("__call__", (AWillowDynamicNavMeshConnectionPoint*& (TArray<AWillowDynamicNavMeshConnectionPoint *>::*)(int))&TArray<AWillowDynamicNavMeshConnectionPoint *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimControlTrackKey> >(m, "TArray<FAnimControlTrackKey>")

		.def_readwrite("Count", &TArray<FAnimControlTrackKey>::Count)
		.def_readwrite("Max", &TArray<FAnimControlTrackKey>::Max)
		.def("Num", &TArray<FAnimControlTrackKey>::Num)
		.def("__call__", (FAnimControlTrackKey& (TArray<FAnimControlTrackKey>::*)(int))&TArray<FAnimControlTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FChildBoneBlendInfo> >(m, "TArray<FChildBoneBlendInfo>")

		.def_readwrite("Count", &TArray<FChildBoneBlendInfo>::Count)
		.def_readwrite("Max", &TArray<FChildBoneBlendInfo>::Max)
		.def("Num", &TArray<FChildBoneBlendInfo>::Num)
		.def("__call__", (FChildBoneBlendInfo& (TArray<FChildBoneBlendInfo>::*)(int))&TArray<FChildBoneBlendInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInteractiveObjectGameStageGradeWeightData> >(m, "TArray<FInteractiveObjectGameStageGradeWeightData>")

		.def_readwrite("Count", &TArray<FInteractiveObjectGameStageGradeWeightData>::Count)
		.def_readwrite("Max", &TArray<FInteractiveObjectGameStageGradeWeightData>::Max)
		.def("Num", &TArray<FInteractiveObjectGameStageGradeWeightData>::Num)
		.def("__call__", (FInteractiveObjectGameStageGradeWeightData& (TArray<FInteractiveObjectGameStageGradeWeightData>::*)(int))&TArray<FInteractiveObjectGameStageGradeWeightData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSwoopAttackData> >(m, "TArray<FSwoopAttackData>")

		.def_readwrite("Count", &TArray<FSwoopAttackData>::Count)
		.def_readwrite("Max", &TArray<FSwoopAttackData>::Max)
		.def("Num", &TArray<FSwoopAttackData>::Num)
		.def("__call__", (FSwoopAttackData& (TArray<FSwoopAttackData>::*)(int))&TArray<FSwoopAttackData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverMeshes> >(m, "TArray<FCoverMeshes>")

		.def_readwrite("Count", &TArray<FCoverMeshes>::Count)
		.def_readwrite("Max", &TArray<FCoverMeshes>::Max)
		.def("Num", &TArray<FCoverMeshes>::Num)
		.def("__call__", (FCoverMeshes& (TArray<FCoverMeshes>::*)(int))&TArray<FCoverMeshes>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBoneRotateData> >(m, "TArray<FBoneRotateData>")

		.def_readwrite("Count", &TArray<FBoneRotateData>::Count)
		.def_readwrite("Max", &TArray<FBoneRotateData>::Max)
		.def("Num", &TArray<FBoneRotateData>::Num)
		.def("__call__", (FBoneRotateData& (TArray<FBoneRotateData>::*)(int))&TArray<FBoneRotateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpCurvePointLinearColor> >(m, "TArray<FInterpCurvePointLinearColor>")

		.def_readwrite("Count", &TArray<FInterpCurvePointLinearColor>::Count)
		.def_readwrite("Max", &TArray<FInterpCurvePointLinearColor>::Max)
		.def("Num", &TArray<FInterpCurvePointLinearColor>::Num)
		.def("__call__", (FInterpCurvePointLinearColor& (TArray<FInterpCurvePointLinearColor>::*)(int))&TArray<FInterpCurvePointLinearColor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMoveToCellData> >(m, "TArray<FMoveToCellData>")

		.def_readwrite("Count", &TArray<FMoveToCellData>::Count)
		.def_readwrite("Max", &TArray<FMoveToCellData>::Max)
		.def("Num", &TArray<FMoveToCellData>::Num)
		.def("__call__", (FMoveToCellData& (TArray<FMoveToCellData>::*)(int))&TArray<FMoveToCellData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCellInfo> >(m, "TArray<FCellInfo>")

		.def_readwrite("Count", &TArray<FCellInfo>::Count)
		.def_readwrite("Max", &TArray<FCellInfo>::Max)
		.def("Num", &TArray<FCellInfo>::Num)
		.def("__call__", (FCellInfo& (TArray<FCellInfo>::*)(int))&TArray<FCellInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTurretDamageEffectData> >(m, "TArray<FTurretDamageEffectData>")

		.def_readwrite("Count", &TArray<FTurretDamageEffectData>::Count)
		.def_readwrite("Max", &TArray<FTurretDamageEffectData>::Max)
		.def("Num", &TArray<FTurretDamageEffectData>::Num)
		.def("__call__", (FTurretDamageEffectData& (TArray<FTurretDamageEffectData>::*)(int))&TArray<FTurretDamageEffectData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTurretEffect> >(m, "TArray<FTurretEffect>")

		.def_readwrite("Count", &TArray<FTurretEffect>::Count)
		.def_readwrite("Max", &TArray<FTurretEffect>::Max)
		.def("Num", &TArray<FTurretEffect>::Num)
		.def("__call__", (FTurretEffect& (TArray<FTurretEffect>::*)(int))&TArray<FTurretEffect>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerEvents> >(m, "TArray<FPlayerEvents>")

		.def_readwrite("Count", &TArray<FPlayerEvents>::Count)
		.def_readwrite("Max", &TArray<FPlayerEvents>::Max)
		.def("Num", &TArray<FPlayerEvents>::Num)
		.def("__call__", (FPlayerEvents& (TArray<FPlayerEvents>::*)(int))&TArray<FPlayerEvents>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDirectorTrackCut> >(m, "TArray<FDirectorTrackCut>")

		.def_readwrite("Count", &TArray<FDirectorTrackCut>::Count)
		.def_readwrite("Max", &TArray<FDirectorTrackCut>::Max)
		.def("Num", &TArray<FDirectorTrackCut>::Num)
		.def("__call__", (FDirectorTrackCut& (TArray<FDirectorTrackCut>::*)(int))&TArray<FDirectorTrackCut>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEventTrackKey> >(m, "TArray<FEventTrackKey>")

		.def_readwrite("Count", &TArray<FEventTrackKey>::Count)
		.def_readwrite("Max", &TArray<FEventTrackKey>::Max)
		.def("Num", &TArray<FEventTrackKey>::Num)
		.def("__call__", (FEventTrackKey& (TArray<FEventTrackKey>::*)(int))&TArray<FEventTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFaceFXTrackKey> >(m, "TArray<FFaceFXTrackKey>")

		.def_readwrite("Count", &TArray<FFaceFXTrackKey>::Count)
		.def_readwrite("Max", &TArray<FFaceFXTrackKey>::Max)
		.def("Num", &TArray<FFaceFXTrackKey>::Num)
		.def("__call__", (FFaceFXTrackKey& (TArray<FFaceFXTrackKey>::*)(int))&TArray<FFaceFXTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFaceFXSoundCueKey> >(m, "TArray<FFaceFXSoundCueKey>")

		.def_readwrite("Count", &TArray<FFaceFXSoundCueKey>::Count)
		.def_readwrite("Max", &TArray<FFaceFXSoundCueKey>::Max)
		.def("Num", &TArray<FFaceFXSoundCueKey>::Num)
		.def("__call__", (FFaceFXSoundCueKey& (TArray<FFaceFXSoundCueKey>::*)(int))&TArray<FFaceFXSoundCueKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBoolTrackKey> >(m, "TArray<FBoolTrackKey>")

		.def_readwrite("Count", &TArray<FBoolTrackKey>::Count)
		.def_readwrite("Max", &TArray<FBoolTrackKey>::Max)
		.def("Num", &TArray<FBoolTrackKey>::Num)
		.def("__call__", (FBoolTrackKey& (TArray<FBoolTrackKey>::*)(int))&TArray<FBoolTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCommentTrackKey> >(m, "TArray<FCommentTrackKey>")

		.def_readwrite("Count", &TArray<FCommentTrackKey>::Count)
		.def_readwrite("Max", &TArray<FCommentTrackKey>::Max)
		.def("Num", &TArray<FCommentTrackKey>::Num)
		.def("__call__", (FCommentTrackKey& (TArray<FCommentTrackKey>::*)(int))&TArray<FCommentTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpCurvePointTwoVectors> >(m, "TArray<FInterpCurvePointTwoVectors>")

		.def_readwrite("Count", &TArray<FInterpCurvePointTwoVectors>::Count)
		.def_readwrite("Max", &TArray<FInterpCurvePointTwoVectors>::Max)
		.def("Num", &TArray<FInterpCurvePointTwoVectors>::Num)
		.def("__call__", (FInterpCurvePointTwoVectors& (TArray<FInterpCurvePointTwoVectors>::*)(int))&TArray<FInterpCurvePointTwoVectors>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAwarenessInfo> >(m, "TArray<FAwarenessInfo>")

		.def_readwrite("Count", &TArray<FAwarenessInfo>::Count)
		.def_readwrite("Max", &TArray<FAwarenessInfo>::Max)
		.def("Num", &TArray<FAwarenessInfo>::Num)
		.def("__call__", (FAwarenessInfo& (TArray<FAwarenessInfo>::*)(int))&TArray<FAwarenessInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLocationInfo> >(m, "TArray<FLocationInfo>")

		.def_readwrite("Count", &TArray<FLocationInfo>::Count)
		.def_readwrite("Max", &TArray<FLocationInfo>::Max)
		.def("Num", &TArray<FLocationInfo>::Num)
		.def("__call__", (FLocationInfo& (TArray<FLocationInfo>::*)(int))&TArray<FLocationInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLastVisibleInfo> >(m, "TArray<FLastVisibleInfo>")

		.def_readwrite("Count", &TArray<FLastVisibleInfo>::Count)
		.def_readwrite("Max", &TArray<FLastVisibleInfo>::Max)
		.def("Num", &TArray<FLastVisibleInfo>::Num)
		.def("__call__", (FLastVisibleInfo& (TArray<FLastVisibleInfo>::*)(int))&TArray<FLastVisibleInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugExposure> >(m, "TArray<FDebugExposure>")

		.def_readwrite("Count", &TArray<FDebugExposure>::Count)
		.def_readwrite("Max", &TArray<FDebugExposure>::Max)
		.def("Num", &TArray<FDebugExposure>::Num)
		.def("__call__", (FDebugExposure& (TArray<FDebugExposure>::*)(int))&TArray<FDebugExposure>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FViewConeInfo> >(m, "TArray<FViewConeInfo>")

		.def_readwrite("Count", &TArray<FViewConeInfo>::Count)
		.def_readwrite("Max", &TArray<FViewConeInfo>::Max)
		.def("Num", &TArray<FViewConeInfo>::Num)
		.def("__call__", (FViewConeInfo& (TArray<FViewConeInfo>::*)(int))&TArray<FViewConeInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverDebugInfo> >(m, "TArray<FCoverDebugInfo>")

		.def_readwrite("Count", &TArray<FCoverDebugInfo>::Count)
		.def_readwrite("Max", &TArray<FCoverDebugInfo>::Max)
		.def("Num", &TArray<FCoverDebugInfo>::Num)
		.def("__call__", (FCoverDebugInfo& (TArray<FCoverDebugInfo>::*)(int))&TArray<FCoverDebugInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCoverDebugScoringData> >(m, "TArray<FCoverDebugScoringData>")

		.def_readwrite("Count", &TArray<FCoverDebugScoringData>::Count)
		.def_readwrite("Max", &TArray<FCoverDebugScoringData>::Max)
		.def("Num", &TArray<FCoverDebugScoringData>::Num)
		.def("__call__", (FCoverDebugScoringData& (TArray<FCoverDebugScoringData>::*)(int))&TArray<FCoverDebugScoringData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTargetDebugDatum> >(m, "TArray<FTargetDebugDatum>")

		.def_readwrite("Count", &TArray<FTargetDebugDatum>::Count)
		.def_readwrite("Max", &TArray<FTargetDebugDatum>::Max)
		.def("Num", &TArray<FTargetDebugDatum>::Num)
		.def("__call__", (FTargetDebugDatum& (TArray<FTargetDebugDatum>::*)(int))&TArray<FTargetDebugDatum>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTargetPriorityInfo> >(m, "TArray<FTargetPriorityInfo>")

		.def_readwrite("Count", &TArray<FTargetPriorityInfo>::Count)
		.def_readwrite("Max", &TArray<FTargetPriorityInfo>::Max)
		.def("Num", &TArray<FTargetPriorityInfo>::Num)
		.def("__call__", (FTargetPriorityInfo& (TArray<FTargetPriorityInfo>::*)(int))&TArray<FTargetPriorityInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAIHoldDebugData> >(m, "TArray<FAIHoldDebugData>")

		.def_readwrite("Count", &TArray<FAIHoldDebugData>::Count)
		.def_readwrite("Max", &TArray<FAIHoldDebugData>::Max)
		.def("Num", &TArray<FAIHoldDebugData>::Num)
		.def("__call__", (FAIHoldDebugData& (TArray<FAIHoldDebugData>::*)(int))&TArray<FAIHoldDebugData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBoneAngleMorph> >(m, "TArray<FBoneAngleMorph>")

		.def_readwrite("Count", &TArray<FBoneAngleMorph>::Count)
		.def_readwrite("Max", &TArray<FBoneAngleMorph>::Max)
		.def("Num", &TArray<FBoneAngleMorph>::Num)
		.def("__call__", (FBoneAngleMorph& (TArray<FBoneAngleMorph>::*)(int))&TArray<FBoneAngleMorph>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FObjectReference> >(m, "TArray<FObjectReference>")

		.def_readwrite("Count", &TArray<FObjectReference>::Count)
		.def_readwrite("Max", &TArray<FObjectReference>::Max)
		.def("Num", &TArray<FObjectReference>::Num)
		.def("__call__", (FObjectReference& (TArray<FObjectReference>::*)(int))&TArray<FObjectReference>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDebugStringData> >(m, "TArray<FDebugStringData>")

		.def_readwrite("Count", &TArray<FDebugStringData>::Count)
		.def_readwrite("Max", &TArray<FDebugStringData>::Max)
		.def("Num", &TArray<FDebugStringData>::Num)
		.def("__call__", (FDebugStringData& (TArray<FDebugStringData>::*)(int))&TArray<FDebugStringData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVisibilityTrackKey> >(m, "TArray<FVisibilityTrackKey>")

		.def_readwrite("Count", &TArray<FVisibilityTrackKey>::Count)
		.def_readwrite("Max", &TArray<FVisibilityTrackKey>::Max)
		.def("Num", &TArray<FVisibilityTrackKey>::Num)
		.def("__call__", (FVisibilityTrackKey& (TArray<FVisibilityTrackKey>::*)(int))&TArray<FVisibilityTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEmitterDynamicParameter> >(m, "TArray<FEmitterDynamicParameter>")

		.def_readwrite("Count", &TArray<FEmitterDynamicParameter>::Count)
		.def_readwrite("Max", &TArray<FEmitterDynamicParameter>::Max)
		.def("Num", &TArray<FEmitterDynamicParameter>::Num)
		.def("__call__", (FEmitterDynamicParameter& (TArray<FEmitterDynamicParameter>::*)(int))&TArray<FEmitterDynamicParameter>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLootData> >(m, "TArray<FLootData>")

		.def_readwrite("Count", &TArray<FLootData>::Count)
		.def_readwrite("Max", &TArray<FLootData>::Max)
		.def("Num", &TArray<FLootData>::Num)
		.def("__call__", (FLootData& (TArray<FLootData>::*)(int))&TArray<FLootData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAttachmentLocationData> >(m, "TArray<FAttachmentLocationData>")

		.def_readwrite("Count", &TArray<FAttachmentLocationData>::Count)
		.def_readwrite("Max", &TArray<FAttachmentLocationData>::Max)
		.def("Num", &TArray<FAttachmentLocationData>::Num)
		.def("__call__", (FAttachmentLocationData& (TArray<FAttachmentLocationData>::*)(int))&TArray<FAttachmentLocationData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData> >(m, "TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData>")

		.def_readwrite("Count", &TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData>::Count)
		.def_readwrite("Max", &TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData>::Max)
		.def("Num", &TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData>::Num)
		.def("__call__", (UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData& (TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData>::*)(int))&TArray<UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDefinitionIconDatum> >(m, "TArray<FDefinitionIconDatum>")

		.def_readwrite("Count", &TArray<FDefinitionIconDatum>::Count)
		.def_readwrite("Max", &TArray<FDefinitionIconDatum>::Max)
		.def("Num", &TArray<FDefinitionIconDatum>::Num)
		.def("__call__", (FDefinitionIconDatum& (TArray<FDefinitionIconDatum>::*)(int))&TArray<FDefinitionIconDatum>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDamageTypeSelectorData> >(m, "TArray<FDamageTypeSelectorData>")

		.def_readwrite("Count", &TArray<FDamageTypeSelectorData>::Count)
		.def_readwrite("Max", &TArray<FDamageTypeSelectorData>::Max)
		.def("Num", &TArray<FDamageTypeSelectorData>::Num)
		.def("__call__", (FDamageTypeSelectorData& (TArray<FDamageTypeSelectorData>::*)(int))&TArray<FDamageTypeSelectorData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBiasedGoalActor> >(m, "TArray<FBiasedGoalActor>")

		.def_readwrite("Count", &TArray<FBiasedGoalActor>::Count)
		.def_readwrite("Max", &TArray<FBiasedGoalActor>::Max)
		.def("Num", &TArray<FBiasedGoalActor>::Num)
		.def("__call__", (FBiasedGoalActor& (TArray<FBiasedGoalActor>::*)(int))&TArray<FBiasedGoalActor>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBlackMarketUpgradeLevelData> >(m, "TArray<FBlackMarketUpgradeLevelData>")

		.def_readwrite("Count", &TArray<FBlackMarketUpgradeLevelData>::Count)
		.def_readwrite("Max", &TArray<FBlackMarketUpgradeLevelData>::Max)
		.def("Num", &TArray<FBlackMarketUpgradeLevelData>::Num)
		.def("__call__", (FBlackMarketUpgradeLevelData& (TArray<FBlackMarketUpgradeLevelData>::*)(int))&TArray<FBlackMarketUpgradeLevelData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTouchingPawn> >(m, "TArray<FTouchingPawn>")

		.def_readwrite("Count", &TArray<FTouchingPawn>::Count)
		.def_readwrite("Max", &TArray<FTouchingPawn>::Max)
		.def("Num", &TArray<FTouchingPawn>::Num)
		.def("__call__", (FTouchingPawn& (TArray<FTouchingPawn>::*)(int))&TArray<FTouchingPawn>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFoliageMesh> >(m, "TArray<FFoliageMesh>")

		.def_readwrite("Count", &TArray<FFoliageMesh>::Count)
		.def_readwrite("Max", &TArray<FFoliageMesh>::Max)
		.def("Num", &TArray<FFoliageMesh>::Num)
		.def("__call__", (FFoliageMesh& (TArray<FFoliageMesh>::*)(int))&TArray<FFoliageMesh>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFloatMaterialParamMICData> >(m, "TArray<FFloatMaterialParamMICData>")

		.def_readwrite("Count", &TArray<FFloatMaterialParamMICData>::Count)
		.def_readwrite("Max", &TArray<FFloatMaterialParamMICData>::Max)
		.def("Num", &TArray<FFloatMaterialParamMICData>::Num)
		.def("__call__", (FFloatMaterialParamMICData& (TArray<FFloatMaterialParamMICData>::*)(int))&TArray<FFloatMaterialParamMICData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULandscapeComponent *> >(m, "TArray<ULandscapeComponent *>")

		.def_readwrite("Count", &TArray<ULandscapeComponent *>::Count)
		.def_readwrite("Max", &TArray<ULandscapeComponent *>::Max)
		.def("Num", &TArray<ULandscapeComponent *>::Num)
		.def("__call__", (ULandscapeComponent*& (TArray<ULandscapeComponent *>::*)(int))&TArray<ULandscapeComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ULandscapeHeightfieldCollisionComponent *> >(m, "TArray<ULandscapeHeightfieldCollisionComponent *>")

		.def_readwrite("Count", &TArray<ULandscapeHeightfieldCollisionComponent *>::Count)
		.def_readwrite("Max", &TArray<ULandscapeHeightfieldCollisionComponent *>::Max)
		.def("Num", &TArray<ULandscapeHeightfieldCollisionComponent *>::Num)
		.def("__call__", (ULandscapeHeightfieldCollisionComponent*& (TArray<ULandscapeHeightfieldCollisionComponent *>::*)(int))&TArray<ULandscapeHeightfieldCollisionComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLandscapeLayerInfo> >(m, "TArray<FLandscapeLayerInfo>")

		.def_readwrite("Count", &TArray<FLandscapeLayerInfo>::Count)
		.def_readwrite("Max", &TArray<FLandscapeLayerInfo>::Max)
		.def("Num", &TArray<FLandscapeLayerInfo>::Num)
		.def("__call__", (FLandscapeLayerInfo& (TArray<FLandscapeLayerInfo>::*)(int))&TArray<FLandscapeLayerInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTeleportKeyData> >(m, "TArray<FTeleportKeyData>")

		.def_readwrite("Count", &TArray<FTeleportKeyData>::Count)
		.def_readwrite("Max", &TArray<FTeleportKeyData>::Max)
		.def("Num", &TArray<FTeleportKeyData>::Num)
		.def("__call__", (FTeleportKeyData& (TArray<FTeleportKeyData>::*)(int))&TArray<FTeleportKeyData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FParticleReplayTrackKey> >(m, "TArray<FParticleReplayTrackKey>")

		.def_readwrite("Count", &TArray<FParticleReplayTrackKey>::Count)
		.def_readwrite("Max", &TArray<FParticleReplayTrackKey>::Max)
		.def("Num", &TArray<FParticleReplayTrackKey>::Num)
		.def("__call__", (FParticleReplayTrackKey& (TArray<FParticleReplayTrackKey>::*)(int))&TArray<FParticleReplayTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FShadowRelevanceSizePair> >(m, "TArray<FShadowRelevanceSizePair>")

		.def_readwrite("Count", &TArray<FShadowRelevanceSizePair>::Count)
		.def_readwrite("Max", &TArray<FShadowRelevanceSizePair>::Max)
		.def("Num", &TArray<FShadowRelevanceSizePair>::Num)
		.def("__call__", (FShadowRelevanceSizePair& (TArray<FShadowRelevanceSizePair>::*)(int))&TArray<FShadowRelevanceSizePair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWillowDialogEchoActor *> >(m, "TArray<AWillowDialogEchoActor *>")

		.def_readwrite("Count", &TArray<AWillowDialogEchoActor *>::Count)
		.def_readwrite("Max", &TArray<AWillowDialogEchoActor *>::Max)
		.def("Num", &TArray<AWillowDialogEchoActor *>::Num)
		.def("__call__", (AWillowDialogEchoActor*& (TArray<AWillowDialogEchoActor *>::*)(int))&TArray<AWillowDialogEchoActor *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBehaviorSequenceCustomEnableCondition *> >(m, "TArray<UBehaviorSequenceCustomEnableCondition *>")

		.def_readwrite("Count", &TArray<UBehaviorSequenceCustomEnableCondition *>::Count)
		.def_readwrite("Max", &TArray<UBehaviorSequenceCustomEnableCondition *>::Max)
		.def("Num", &TArray<UBehaviorSequenceCustomEnableCondition *>::Num)
		.def("__call__", (UBehaviorSequenceCustomEnableCondition*& (TArray<UBehaviorSequenceCustomEnableCondition *>::*)(int))&TArray<UBehaviorSequenceCustomEnableCondition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlaylistPopulation> >(m, "TArray<FPlaylistPopulation>")

		.def_readwrite("Count", &TArray<FPlaylistPopulation>::Count)
		.def_readwrite("Max", &TArray<FPlaylistPopulation>::Max)
		.def("Num", &TArray<FPlaylistPopulation>::Num)
		.def("__call__", (FPlaylistPopulation& (TArray<FPlaylistPopulation>::*)(int))&TArray<FPlaylistPopulation>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FClientMeshBeaconConnection> >(m, "TArray<FClientMeshBeaconConnection>")

		.def_readwrite("Count", &TArray<FClientMeshBeaconConnection>::Count)
		.def_readwrite("Max", &TArray<FClientMeshBeaconConnection>::Max)
		.def("Num", &TArray<FClientMeshBeaconConnection>::Num)
		.def("__call__", (FClientMeshBeaconConnection& (TArray<FClientMeshBeaconConnection>::*)(int))&TArray<FClientMeshBeaconConnection>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSMPerchRandomPair> >(m, "TArray<FSMPerchRandomPair>")

		.def_readwrite("Count", &TArray<FSMPerchRandomPair>::Count)
		.def_readwrite("Max", &TArray<FSMPerchRandomPair>::Max)
		.def("Num", &TArray<FSMPerchRandomPair>::Num)
		.def("__call__", (FSMPerchRandomPair& (TArray<FSMPerchRandomPair>::*)(int))&TArray<FSMPerchRandomPair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponTypeSelectorData> >(m, "TArray<FWeaponTypeSelectorData>")

		.def_readwrite("Count", &TArray<FWeaponTypeSelectorData>::Count)
		.def_readwrite("Max", &TArray<FWeaponTypeSelectorData>::Max)
		.def("Num", &TArray<FWeaponTypeSelectorData>::Num)
		.def("__call__", (FWeaponTypeSelectorData& (TArray<FWeaponTypeSelectorData>::*)(int))&TArray<FWeaponTypeSelectorData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AWwiseSoundVolume *> >(m, "TArray<AWwiseSoundVolume *>")

		.def_readwrite("Count", &TArray<AWwiseSoundVolume *>::Count)
		.def_readwrite("Max", &TArray<AWwiseSoundVolume *>::Max)
		.def("Num", &TArray<AWwiseSoundVolume *>::Num)
		.def("__call__", (AWwiseSoundVolume*& (TArray<AWwiseSoundVolume *>::*)(int))&TArray<AWwiseSoundVolume *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEnvironmentalEffectSetting> >(m, "TArray<FEnvironmentalEffectSetting>")

		.def_readwrite("Count", &TArray<FEnvironmentalEffectSetting>::Count)
		.def_readwrite("Max", &TArray<FEnvironmentalEffectSetting>::Max)
		.def("Num", &TArray<FEnvironmentalEffectSetting>::Num)
		.def("__call__", (FEnvironmentalEffectSetting& (TArray<FEnvironmentalEffectSetting>::*)(int))&TArray<FEnvironmentalEffectSetting>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FRTPCSetting> >(m, "TArray<FRTPCSetting>")

		.def_readwrite("Count", &TArray<FRTPCSetting>::Count)
		.def_readwrite("Max", &TArray<FRTPCSetting>::Max)
		.def("Num", &TArray<FRTPCSetting>::Num)
		.def("__call__", (FRTPCSetting& (TArray<FRTPCSetting>::*)(int))&TArray<FRTPCSetting>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FOccludedVolume> >(m, "TArray<FOccludedVolume>")

		.def_readwrite("Count", &TArray<FOccludedVolume>::Count)
		.def_readwrite("Max", &TArray<FOccludedVolume>::Max)
		.def("Num", &TArray<FOccludedVolume>::Num)
		.def("__call__", (FOccludedVolume& (TArray<FOccludedVolume>::*)(int))&TArray<FOccludedVolume>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCustomInput> >(m, "TArray<FCustomInput>")

		.def_readwrite("Count", &TArray<FCustomInput>::Count)
		.def_readwrite("Max", &TArray<FCustomInput>::Max)
		.def("Num", &TArray<FCustomInput>::Num)
		.def("__call__", (FCustomInput& (TArray<FCustomInput>::*)(int))&TArray<FCustomInput>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FVectorMaterialParamMICData> >(m, "TArray<FVectorMaterialParamMICData>")

		.def_readwrite("Count", &TArray<FVectorMaterialParamMICData>::Count)
		.def_readwrite("Max", &TArray<FVectorMaterialParamMICData>::Max)
		.def("Num", &TArray<FVectorMaterialParamMICData>::Num)
		.def("__call__", (FVectorMaterialParamMICData& (TArray<FVectorMaterialParamMICData>::*)(int))&TArray<FVectorMaterialParamMICData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSoundTrackKey> >(m, "TArray<FSoundTrackKey>")

		.def_readwrite("Count", &TArray<FSoundTrackKey>::Count)
		.def_readwrite("Max", &TArray<FSoundTrackKey>::Max)
		.def("Num", &TArray<FSoundTrackKey>::Num)
		.def("__call__", (FSoundTrackKey& (TArray<FSoundTrackKey>::*)(int))&TArray<FSoundTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FNxDestructibleDepthParameters> >(m, "TArray<FNxDestructibleDepthParameters>")

		.def_readwrite("Count", &TArray<FNxDestructibleDepthParameters>::Count)
		.def_readwrite("Max", &TArray<FNxDestructibleDepthParameters>::Max)
		.def("Num", &TArray<FNxDestructibleDepthParameters>::Num)
		.def("__call__", (FNxDestructibleDepthParameters& (TArray<FNxDestructibleDepthParameters>::*)(int))&TArray<FNxDestructibleDepthParameters>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FWeaponAmmoResourceSelectorData> >(m, "TArray<FWeaponAmmoResourceSelectorData>")

		.def_readwrite("Count", &TArray<FWeaponAmmoResourceSelectorData>::Count)
		.def_readwrite("Max", &TArray<FWeaponAmmoResourceSelectorData>::Max)
		.def("Num", &TArray<FWeaponAmmoResourceSelectorData>::Num)
		.def("__call__", (FWeaponAmmoResourceSelectorData& (TArray<FWeaponAmmoResourceSelectorData>::*)(int))&TArray<FWeaponAmmoResourceSelectorData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExposureUpdateStruct> >(m, "TArray<FExposureUpdateStruct>")

		.def_readwrite("Count", &TArray<FExposureUpdateStruct>::Count)
		.def_readwrite("Max", &TArray<FExposureUpdateStruct>::Max)
		.def("Num", &TArray<FExposureUpdateStruct>::Num)
		.def("__call__", (FExposureUpdateStruct& (TArray<FExposureUpdateStruct>::*)(int))&TArray<FExposureUpdateStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUnlockItemData> >(m, "TArray<FUnlockItemData>")

		.def_readwrite("Count", &TArray<FUnlockItemData>::Count)
		.def_readwrite("Max", &TArray<FUnlockItemData>::Max)
		.def("Num", &TArray<FUnlockItemData>::Num)
		.def("__call__", (FUnlockItemData& (TArray<FUnlockItemData>::*)(int))&TArray<FUnlockItemData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIConfigSectionProvider *> >(m, "TArray<UUIConfigSectionProvider *>")

		.def_readwrite("Count", &TArray<UUIConfigSectionProvider *>::Count)
		.def_readwrite("Max", &TArray<UUIConfigSectionProvider *>::Max)
		.def("Num", &TArray<UUIConfigSectionProvider *>::Num)
		.def("__call__", (UUIConfigSectionProvider*& (TArray<UUIConfigSectionProvider *>::*)(int))&TArray<UUIConfigSectionProvider *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<USplineMeshComponent *> >(m, "TArray<USplineMeshComponent *>")

		.def_readwrite("Count", &TArray<USplineMeshComponent *>::Count)
		.def_readwrite("Max", &TArray<USplineMeshComponent *>::Max)
		.def("Num", &TArray<USplineMeshComponent *>::Num)
		.def("__call__", (USplineMeshComponent*& (TArray<USplineMeshComponent *>::*)(int))&TArray<USplineMeshComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FManufacturerSelectorData> >(m, "TArray<FManufacturerSelectorData>")

		.def_readwrite("Count", &TArray<FManufacturerSelectorData>::Count)
		.def_readwrite("Max", &TArray<FManufacturerSelectorData>::Max)
		.def("Num", &TArray<FManufacturerSelectorData>::Num)
		.def("__call__", (FManufacturerSelectorData& (TArray<FManufacturerSelectorData>::*)(int))&TArray<FManufacturerSelectorData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGrenadeModBehaviorSequenceStateData> >(m, "TArray<FGrenadeModBehaviorSequenceStateData>")

		.def_readwrite("Count", &TArray<FGrenadeModBehaviorSequenceStateData>::Count)
		.def_readwrite("Max", &TArray<FGrenadeModBehaviorSequenceStateData>::Max)
		.def("Num", &TArray<FGrenadeModBehaviorSequenceStateData>::Num)
		.def("__call__", (FGrenadeModBehaviorSequenceStateData& (TArray<FGrenadeModBehaviorSequenceStateData>::*)(int))&TArray<FGrenadeModBehaviorSequenceStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEnemyBreadCrumbStruct> >(m, "TArray<FEnemyBreadCrumbStruct>")

		.def_readwrite("Count", &TArray<FEnemyBreadCrumbStruct>::Count)
		.def_readwrite("Max", &TArray<FEnemyBreadCrumbStruct>::Max)
		.def("Num", &TArray<FEnemyBreadCrumbStruct>::Num)
		.def("__call__", (FEnemyBreadCrumbStruct& (TArray<FEnemyBreadCrumbStruct>::*)(int))&TArray<FEnemyBreadCrumbStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPrismDataContainer> >(m, "TArray<FPrismDataContainer>")

		.def_readwrite("Count", &TArray<FPrismDataContainer>::Count)
		.def_readwrite("Max", &TArray<FPrismDataContainer>::Max)
		.def("Num", &TArray<FPrismDataContainer>::Num)
		.def("__call__", (FPrismDataContainer& (TArray<FPrismDataContainer>::*)(int))&TArray<FPrismDataContainer>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimDeltaDataList> >(m, "TArray<FAnimDeltaDataList>")

		.def_readwrite("Count", &TArray<FAnimDeltaDataList>::Count)
		.def_readwrite("Max", &TArray<FAnimDeltaDataList>::Max)
		.def("Num", &TArray<FAnimDeltaDataList>::Num)
		.def("__call__", (FAnimDeltaDataList& (TArray<FAnimDeltaDataList>::*)(int))&TArray<FAnimDeltaDataList>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAnimSwapData> >(m, "TArray<FAnimSwapData>")

		.def_readwrite("Count", &TArray<FAnimSwapData>::Count)
		.def_readwrite("Max", &TArray<FAnimSwapData>::Max)
		.def("Num", &TArray<FAnimSwapData>::Num)
		.def("__call__", (FAnimSwapData& (TArray<FAnimSwapData>::*)(int))&TArray<FAnimSwapData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFileNameToURLMapping> >(m, "TArray<FFileNameToURLMapping>")

		.def_readwrite("Count", &TArray<FFileNameToURLMapping>::Count)
		.def_readwrite("Max", &TArray<FFileNameToURLMapping>::Max)
		.def("Num", &TArray<FFileNameToURLMapping>::Num)
		.def("__call__", (FFileNameToURLMapping& (TArray<FFileNameToURLMapping>::*)(int))&TArray<FFileNameToURLMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTitleFileMcp> >(m, "TArray<FTitleFileMcp>")

		.def_readwrite("Count", &TArray<FTitleFileMcp>::Count)
		.def_readwrite("Max", &TArray<FTitleFileMcp>::Max)
		.def("Num", &TArray<FTitleFileMcp>::Num)
		.def("__call__", (FTitleFileMcp& (TArray<FTitleFileMcp>::*)(int))&TArray<FTitleFileMcp>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FToggleTrackKey> >(m, "TArray<FToggleTrackKey>")

		.def_readwrite("Count", &TArray<FToggleTrackKey>::Count)
		.def_readwrite("Max", &TArray<FToggleTrackKey>::Max)
		.def("Num", &TArray<FToggleTrackKey>::Num)
		.def("__call__", (FToggleTrackKey& (TArray<FToggleTrackKey>::*)(int))&TArray<FToggleTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSourceTexture2DRegion> >(m, "TArray<FSourceTexture2DRegion>")

		.def_readwrite("Count", &TArray<FSourceTexture2DRegion>::Count)
		.def_readwrite("Max", &TArray<FSourceTexture2DRegion>::Max)
		.def("Num", &TArray<FSourceTexture2DRegion>::Num)
		.def("__call__", (FSourceTexture2DRegion& (TArray<FSourceTexture2DRegion>::*)(int))&TArray<FSourceTexture2DRegion>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAimAnimTransitionData> >(m, "TArray<FAimAnimTransitionData>")

		.def_readwrite("Count", &TArray<FAimAnimTransitionData>::Count)
		.def_readwrite("Max", &TArray<FAimAnimTransitionData>::Max)
		.def("Num", &TArray<FAimAnimTransitionData>::Num)
		.def("__call__", (FAimAnimTransitionData& (TArray<FAimAnimTransitionData>::*)(int))&TArray<FAimAnimTransitionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIDataProvider_MenuItem *> >(m, "TArray<UUIDataProvider_MenuItem *>")

		.def_readwrite("Count", &TArray<UUIDataProvider_MenuItem *>::Count)
		.def_readwrite("Max", &TArray<UUIDataProvider_MenuItem *>::Max)
		.def("Num", &TArray<UUIDataProvider_MenuItem *>::Num)
		.def("__call__", (UUIDataProvider_MenuItem*& (TArray<UUIDataProvider_MenuItem *>::*)(int))&TArray<UUIDataProvider_MenuItem *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorTriggerMessageStruct> >(m, "TArray<FBehaviorTriggerMessageStruct>")

		.def_readwrite("Count", &TArray<FBehaviorTriggerMessageStruct>::Count)
		.def_readwrite("Max", &TArray<FBehaviorTriggerMessageStruct>::Max)
		.def("Num", &TArray<FBehaviorTriggerMessageStruct>::Num)
		.def("__call__", (FBehaviorTriggerMessageStruct& (TArray<FBehaviorTriggerMessageStruct>::*)(int))&TArray<FBehaviorTriggerMessageStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlaylist> >(m, "TArray<FPlaylist>")

		.def_readwrite("Count", &TArray<FPlaylist>::Count)
		.def_readwrite("Max", &TArray<FPlaylist>::Max)
		.def("Num", &TArray<FPlaylist>::Num)
		.def("__call__", (FPlaylist& (TArray<FPlaylist>::*)(int))&TArray<FPlaylist>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSkelMaterialSetterDatum> >(m, "TArray<FSkelMaterialSetterDatum>")

		.def_readwrite("Count", &TArray<FSkelMaterialSetterDatum>::Count)
		.def_readwrite("Max", &TArray<FSkelMaterialSetterDatum>::Max)
		.def("Num", &TArray<FSkelMaterialSetterDatum>::Num)
		.def("__call__", (FSkelMaterialSetterDatum& (TArray<FSkelMaterialSetterDatum>::*)(int))&TArray<FSkelMaterialSetterDatum>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGrenadeModPartBehaviorSequenceStateData> >(m, "TArray<FGrenadeModPartBehaviorSequenceStateData>")

		.def_readwrite("Count", &TArray<FGrenadeModPartBehaviorSequenceStateData>::Count)
		.def_readwrite("Max", &TArray<FGrenadeModPartBehaviorSequenceStateData>::Max)
		.def("Num", &TArray<FGrenadeModPartBehaviorSequenceStateData>::Num)
		.def("__call__", (FGrenadeModPartBehaviorSequenceStateData& (TArray<FGrenadeModPartBehaviorSequenceStateData>::*)(int))&TArray<FGrenadeModPartBehaviorSequenceStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDropProjectileBehaviorSequenceStateData> >(m, "TArray<FDropProjectileBehaviorSequenceStateData>")

		.def_readwrite("Count", &TArray<FDropProjectileBehaviorSequenceStateData>::Count)
		.def_readwrite("Max", &TArray<FDropProjectileBehaviorSequenceStateData>::Max)
		.def("Num", &TArray<FDropProjectileBehaviorSequenceStateData>::Num)
		.def("__call__", (FDropProjectileBehaviorSequenceStateData& (TArray<FDropProjectileBehaviorSequenceStateData>::*)(int))&TArray<FDropProjectileBehaviorSequenceStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<AController *> >(m, "TArray<AController *>")

		.def_readwrite("Count", &TArray<AController *>::Count)
		.def_readwrite("Max", &TArray<AController *>::Max)
		.def("Num", &TArray<AController *>::Num)
		.def("__call__", (AController*& (TArray<AController *>::*)(int))&TArray<AController *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FMovieRangeStateData> >(m, "TArray<FMovieRangeStateData>")

		.def_readwrite("Count", &TArray<FMovieRangeStateData>::Count)
		.def_readwrite("Max", &TArray<FMovieRangeStateData>::Max)
		.def("Num", &TArray<FMovieRangeStateData>::Num)
		.def("__call__", (FMovieRangeStateData& (TArray<FMovieRangeStateData>::*)(int))&TArray<FMovieRangeStateData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLevelStreamingData> >(m, "TArray<FLevelStreamingData>")

		.def_readwrite("Count", &TArray<FLevelStreamingData>::Count)
		.def_readwrite("Max", &TArray<FLevelStreamingData>::Max)
		.def("Num", &TArray<FLevelStreamingData>::Num)
		.def("__call__", (FLevelStreamingData& (TArray<FLevelStreamingData>::*)(int))&TArray<FLevelStreamingData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDialogueArgument> >(m, "TArray<FDialogueArgument>")

		.def_readwrite("Count", &TArray<FDialogueArgument>::Count)
		.def_readwrite("Max", &TArray<FDialogueArgument>::Max)
		.def("Num", &TArray<FDialogueArgument>::Num)
		.def("__call__", (FDialogueArgument& (TArray<FDialogueArgument>::*)(int))&TArray<FDialogueArgument>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSMMaterialSetterDatum> >(m, "TArray<FSMMaterialSetterDatum>")

		.def_readwrite("Count", &TArray<FSMMaterialSetterDatum>::Count)
		.def_readwrite("Max", &TArray<FSMMaterialSetterDatum>::Max)
		.def("Num", &TArray<FSMMaterialSetterDatum>::Num)
		.def("__call__", (FSMMaterialSetterDatum& (TArray<FSMMaterialSetterDatum>::*)(int))&TArray<FSMMaterialSetterDatum>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UBlockingMeshComponent *> >(m, "TArray<UBlockingMeshComponent *>")

		.def_readwrite("Count", &TArray<UBlockingMeshComponent *>::Count)
		.def_readwrite("Max", &TArray<UBlockingMeshComponent *>::Max)
		.def("Num", &TArray<UBlockingMeshComponent *>::Num)
		.def("__call__", (UBlockingMeshComponent*& (TArray<UBlockingMeshComponent *>::*)(int))&TArray<UBlockingMeshComponent *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FCullDistanceSizePair> >(m, "TArray<FCullDistanceSizePair>")

		.def_readwrite("Count", &TArray<FCullDistanceSizePair>::Count)
		.def_readwrite("Max", &TArray<FCullDistanceSizePair>::Max)
		.def("Num", &TArray<FCullDistanceSizePair>::Num)
		.def("__call__", (FCullDistanceSizePair& (TArray<FCullDistanceSizePair>::*)(int))&TArray<FCullDistanceSizePair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAkPlayingInfo> >(m, "TArray<FAkPlayingInfo>")

		.def_readwrite("Count", &TArray<FAkPlayingInfo>::Count)
		.def_readwrite("Max", &TArray<FAkPlayingInfo>::Max)
		.def("Num", &TArray<FAkPlayingInfo>::Num)
		.def("__call__", (FAkPlayingInfo& (TArray<FAkPlayingInfo>::*)(int))&TArray<FAkPlayingInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FGameResourceDataProvider> >(m, "TArray<FGameResourceDataProvider>")

		.def_readwrite("Count", &TArray<FGameResourceDataProvider>::Count)
		.def_readwrite("Max", &TArray<FGameResourceDataProvider>::Max)
		.def("Num", &TArray<FGameResourceDataProvider>::Num)
		.def("__call__", (FGameResourceDataProvider& (TArray<FGameResourceDataProvider>::*)(int))&TArray<FGameResourceDataProvider>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDynamicResourceProviderDefinition> >(m, "TArray<FDynamicResourceProviderDefinition>")

		.def_readwrite("Count", &TArray<FDynamicResourceProviderDefinition>::Count)
		.def_readwrite("Max", &TArray<FDynamicResourceProviderDefinition>::Max)
		.def("Num", &TArray<FDynamicResourceProviderDefinition>::Num)
		.def("__call__", (FDynamicResourceProviderDefinition& (TArray<FDynamicResourceProviderDefinition>::*)(int))&TArray<FDynamicResourceProviderDefinition>::operator (), py::return_value_policy::reference)
		;

	py::class_< FArchiveAsync >(m, "FArchiveAsync")
		.def_readonly("Unknown", &FArchiveAsync::Unknown)
		.def_readwrite("CurrentPos", &FArchiveAsync::CurrentPos)
		;

	py::class_< FArchive >(m, "FArchive")
		;

	py::class_< TArray<FUIProviderScriptFieldValue> >(m, "TArray<FUIProviderScriptFieldValue>")

		.def_readwrite("Count", &TArray<FUIProviderScriptFieldValue>::Count)
		.def_readwrite("Max", &TArray<FUIProviderScriptFieldValue>::Max)
		.def("Num", &TArray<FUIProviderScriptFieldValue>::Num)
		.def("__call__", (FUIProviderScriptFieldValue& (TArray<FUIProviderScriptFieldValue>::*)(int))&TArray<FUIProviderScriptFieldValue>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<APatrolDestination *> >(m, "TArray<APatrolDestination *>")

		.def_readwrite("Count", &TArray<APatrolDestination *>::Count)
		.def_readwrite("Max", &TArray<APatrolDestination *>::Max)
		.def("Num", &TArray<APatrolDestination *>::Num)
		.def("__call__", (APatrolDestination*& (TArray<APatrolDestination *>::*)(int))&TArray<APatrolDestination *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<ADynamicSMActor *> >(m, "TArray<ADynamicSMActor *>")

		.def_readwrite("Count", &TArray<ADynamicSMActor *>::Count)
		.def_readwrite("Max", &TArray<ADynamicSMActor *>::Max)
		.def("Num", &TArray<ADynamicSMActor *>::Num)
		.def("__call__", (ADynamicSMActor*& (TArray<ADynamicSMActor *>::*)(int))&TArray<ADynamicSMActor *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UUIConfigFileProvider *> >(m, "TArray<UUIConfigFileProvider *>")

		.def_readwrite("Count", &TArray<UUIConfigFileProvider *>::Count)
		.def_readwrite("Max", &TArray<UUIConfigFileProvider *>::Max)
		.def("Num", &TArray<UUIConfigFileProvider *>::Num)
		.def("__call__", (UUIConfigFileProvider*& (TArray<UUIConfigFileProvider *>::*)(int))&TArray<UUIConfigFileProvider *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FKeyValuePair> >(m, "TArray<FKeyValuePair>")

		.def_readwrite("Count", &TArray<FKeyValuePair>::Count)
		.def_readwrite("Max", &TArray<FKeyValuePair>::Max)
		.def("Num", &TArray<FKeyValuePair>::Num)
		.def("__call__", (FKeyValuePair& (TArray<FKeyValuePair>::*)(int))&TArray<FKeyValuePair>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPlayerResponseLine> >(m, "TArray<FPlayerResponseLine>")

		.def_readwrite("Count", &TArray<FPlayerResponseLine>::Count)
		.def_readwrite("Max", &TArray<FPlayerResponseLine>::Max)
		.def("Num", &TArray<FPlayerResponseLine>::Num)
		.def("__call__", (FPlayerResponseLine& (TArray<FPlayerResponseLine>::*)(int))&TArray<FPlayerResponseLine>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FHUDAnchorPoint> >(m, "TArray<FHUDAnchorPoint>")

		.def_readwrite("Count", &TArray<FHUDAnchorPoint>::Count)
		.def_readwrite("Max", &TArray<FHUDAnchorPoint>::Max)
		.def("Num", &TArray<FHUDAnchorPoint>::Num)
		.def("__call__", (FHUDAnchorPoint& (TArray<FHUDAnchorPoint>::*)(int))&TArray<FHUDAnchorPoint>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationOptionAreaData> >(m, "TArray<FPopulationOptionAreaData>")

		.def_readwrite("Count", &TArray<FPopulationOptionAreaData>::Count)
		.def_readwrite("Max", &TArray<FPopulationOptionAreaData>::Max)
		.def("Num", &TArray<FPopulationOptionAreaData>::Num)
		.def("__call__", (FPopulationOptionAreaData& (TArray<FPopulationOptionAreaData>::*)(int))&TArray<FPopulationOptionAreaData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationAreaOptionSpawnData> >(m, "TArray<FPopulationAreaOptionSpawnData>")

		.def_readwrite("Count", &TArray<FPopulationAreaOptionSpawnData>::Count)
		.def_readwrite("Max", &TArray<FPopulationAreaOptionSpawnData>::Max)
		.def("Num", &TArray<FPopulationAreaOptionSpawnData>::Num)
		.def("__call__", (FPopulationAreaOptionSpawnData& (TArray<FPopulationAreaOptionSpawnData>::*)(int))&TArray<FPopulationAreaOptionSpawnData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPopulationOptionSpawnDefData> >(m, "TArray<FPopulationOptionSpawnDefData>")

		.def_readwrite("Count", &TArray<FPopulationOptionSpawnDefData>::Count)
		.def_readwrite("Max", &TArray<FPopulationOptionSpawnDefData>::Max)
		.def("Num", &TArray<FPopulationOptionSpawnDefData>::Num)
		.def("__call__", (FPopulationOptionSpawnDefData& (TArray<FPopulationOptionSpawnDefData>::*)(int))&TArray<FPopulationOptionSpawnDefData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FAkEventTrackKey> >(m, "TArray<FAkEventTrackKey>")

		.def_readwrite("Count", &TArray<FAkEventTrackKey>::Count)
		.def_readwrite("Max", &TArray<FAkEventTrackKey>::Max)
		.def("Num", &TArray<FAkEventTrackKey>::Num)
		.def("__call__", (FAkEventTrackKey& (TArray<FAkEventTrackKey>::*)(int))&TArray<FAkEventTrackKey>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FUIDataStoreInputAlias> >(m, "TArray<FUIDataStoreInputAlias>")

		.def_readwrite("Count", &TArray<FUIDataStoreInputAlias>::Count)
		.def_readwrite("Max", &TArray<FUIDataStoreInputAlias>::Max)
		.def("Num", &TArray<FUIDataStoreInputAlias>::Num)
		.def("__call__", (FUIDataStoreInputAlias& (TArray<FUIDataStoreInputAlias>::*)(int))&TArray<FUIDataStoreInputAlias>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<UClassModDefinition *> >(m, "TArray<UClassModDefinition *>")

		.def_readwrite("Count", &TArray<UClassModDefinition *>::Count)
		.def_readwrite("Max", &TArray<UClassModDefinition *>::Max)
		.def("Num", &TArray<UClassModDefinition *>::Num)
		.def("__call__", (UClassModDefinition*& (TArray<UClassModDefinition *>::*)(int))&TArray<UClassModDefinition *>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FLocationBoneSocketInfo> >(m, "TArray<FLocationBoneSocketInfo>")

		.def_readwrite("Count", &TArray<FLocationBoneSocketInfo>::Count)
		.def_readwrite("Max", &TArray<FLocationBoneSocketInfo>::Max)
		.def("Num", &TArray<FLocationBoneSocketInfo>::Num)
		.def("__call__", (FLocationBoneSocketInfo& (TArray<FLocationBoneSocketInfo>::*)(int))&TArray<FLocationBoneSocketInfo>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FSwitchObjectCase> >(m, "TArray<FSwitchObjectCase>")

		.def_readwrite("Count", &TArray<FSwitchObjectCase>::Count)
		.def_readwrite("Max", &TArray<FSwitchObjectCase>::Max)
		.def("Num", &TArray<FSwitchObjectCase>::Num)
		.def("__call__", (FSwitchObjectCase& (TArray<FSwitchObjectCase>::*)(int))&TArray<FSwitchObjectCase>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FInterpCurvePointQuat> >(m, "TArray<FInterpCurvePointQuat>")

		.def_readwrite("Count", &TArray<FInterpCurvePointQuat>::Count)
		.def_readwrite("Max", &TArray<FInterpCurvePointQuat>::Max)
		.def("Num", &TArray<FInterpCurvePointQuat>::Num)
		.def("__call__", (FInterpCurvePointQuat& (TArray<FInterpCurvePointQuat>::*)(int))&TArray<FInterpCurvePointQuat>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBehaviorCondition> >(m, "TArray<FBehaviorCondition>")

		.def_readwrite("Count", &TArray<FBehaviorCondition>::Count)
		.def_readwrite("Max", &TArray<FBehaviorCondition>::Max)
		.def("Num", &TArray<FBehaviorCondition>::Num)
		.def("__call__", (FBehaviorCondition& (TArray<FBehaviorCondition>::*)(int))&TArray<FBehaviorCondition>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FDrunkenWaveFormData> >(m, "TArray<FDrunkenWaveFormData>")

		.def_readwrite("Count", &TArray<FDrunkenWaveFormData>::Count)
		.def_readwrite("Max", &TArray<FDrunkenWaveFormData>::Max)
		.def("Num", &TArray<FDrunkenWaveFormData>::Num)
		.def("__call__", (FDrunkenWaveFormData& (TArray<FDrunkenWaveFormData>::*)(int))&TArray<FDrunkenWaveFormData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStateAttributeData> >(m, "TArray<FStateAttributeData>")

		.def_readwrite("Count", &TArray<FStateAttributeData>::Count)
		.def_readwrite("Max", &TArray<FStateAttributeData>::Max)
		.def("Num", &TArray<FStateAttributeData>::Num)
		.def("__call__", (FStateAttributeData& (TArray<FStateAttributeData>::*)(int))&TArray<FStateAttributeData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FStatusEffectNameMapping> >(m, "TArray<FStatusEffectNameMapping>")

		.def_readwrite("Count", &TArray<FStatusEffectNameMapping>::Count)
		.def_readwrite("Max", &TArray<FStatusEffectNameMapping>::Max)
		.def("Num", &TArray<FStatusEffectNameMapping>::Num)
		.def("__call__", (FStatusEffectNameMapping& (TArray<FStatusEffectNameMapping>::*)(int))&TArray<FStatusEffectNameMapping>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBalanceMeResourceUpgradePath> >(m, "TArray<FBalanceMeResourceUpgradePath>")

		.def_readwrite("Count", &TArray<FBalanceMeResourceUpgradePath>::Count)
		.def_readwrite("Max", &TArray<FBalanceMeResourceUpgradePath>::Max)
		.def("Num", &TArray<FBalanceMeResourceUpgradePath>::Num)
		.def("__call__", (FBalanceMeResourceUpgradePath& (TArray<FBalanceMeResourceUpgradePath>::*)(int))&TArray<FBalanceMeResourceUpgradePath>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FExposureCacheStruct> >(m, "TArray<FExposureCacheStruct>")

		.def_readwrite("Count", &TArray<FExposureCacheStruct>::Count)
		.def_readwrite("Max", &TArray<FExposureCacheStruct>::Max)
		.def("Num", &TArray<FExposureCacheStruct>::Num)
		.def("__call__", (FExposureCacheStruct& (TArray<FExposureCacheStruct>::*)(int))&TArray<FExposureCacheStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FBucketStruct> >(m, "TArray<FBucketStruct>")

		.def_readwrite("Count", &TArray<FBucketStruct>::Count)
		.def_readwrite("Max", &TArray<FBucketStruct>::Max)
		.def("Num", &TArray<FBucketStruct>::Num)
		.def("__call__", (FBucketStruct& (TArray<FBucketStruct>::*)(int))&TArray<FBucketStruct>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FPointExposureData> >(m, "TArray<FPointExposureData>")

		.def_readwrite("Count", &TArray<FPointExposureData>::Count)
		.def_readwrite("Max", &TArray<FPointExposureData>::Max)
		.def("Num", &TArray<FPointExposureData>::Num)
		.def("__call__", (FPointExposureData& (TArray<FPointExposureData>::*)(int))&TArray<FPointExposureData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FFeatherBoneBlendTarget> >(m, "TArray<FFeatherBoneBlendTarget>")

		.def_readwrite("Count", &TArray<FFeatherBoneBlendTarget>::Count)
		.def_readwrite("Max", &TArray<FFeatherBoneBlendTarget>::Max)
		.def("Num", &TArray<FFeatherBoneBlendTarget>::Num)
		.def("__call__", (FFeatherBoneBlendTarget& (TArray<FFeatherBoneBlendTarget>::*)(int))&TArray<FFeatherBoneBlendTarget>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FEvalActionData> >(m, "TArray<FEvalActionData>")

		.def_readwrite("Count", &TArray<FEvalActionData>::Count)
		.def_readwrite("Max", &TArray<FEvalActionData>::Max)
		.def("Num", &TArray<FEvalActionData>::Num)
		.def("__call__", (FEvalActionData& (TArray<FEvalActionData>::*)(int))&TArray<FEvalActionData>::operator (), py::return_value_policy::reference)
		;

	py::class_< TArray<FTankSensor> >(m, "TArray<FTankSensor>")

		.def_readwrite("Count", &TArray<FTankSensor>::Count)
		.def_readwrite("Max", &TArray<FTankSensor>::Max)
		.def("Num", &TArray<FTankSensor>::Num)
		.def("__call__", (FTankSensor& (TArray<FTankSensor>::*)(int))&TArray<FTankSensor>::operator (), py::return_value_policy::reference)
		;
}