#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowReplicatedEmitter(py::module &m)
{
    py::class_< AWillowReplicatedEmitter,  AWillowEmitter   >(m, "AWillowReplicatedEmitter")
		.def_static("StaticClass", &AWillowReplicatedEmitter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EmitterTemplate", &AWillowReplicatedEmitter::EmitterTemplate)
        .def_readwrite("ServerLifeSpan", &AWillowReplicatedEmitter::ServerLifeSpan)
        .def_readwrite("NumFloatParameters", &AWillowReplicatedEmitter::NumFloatParameters)
        .def_readwrite("NumVectorParameters", &AWillowReplicatedEmitter::NumVectorParameters)
        .def_readwrite("NumColorParameters", &AWillowReplicatedEmitter::NumColorParameters)
        .def("Behavior_ChangeParticleSystemActiveState", &AWillowReplicatedEmitter::Behavior_ChangeParticleSystemActiveState)
        .def("Behavior_SetObjectParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyParam = 0 ;   self.Behavior_SetObjectParameterValue(pySectionIndex, ParameterName, pyParam); return py::make_tuple(*pySectionIndex, *pyParam); })
        .def("Behavior_GetObjectParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyParam = 0 ;  bool ret =  self.Behavior_GetObjectParameterValue(pySectionIndex, ParameterName, pyParam); return py::make_tuple(ret, *pySectionIndex, *pyParam); })
        .def("Behavior_GetColorParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName, struct FLinearColor* Param) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetColorParameterValue(pySectionIndex, ParameterName, Param); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetVectorParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName, struct FVector* Param) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetVectorParameterValue(pySectionIndex, ParameterName, Param); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetFloatParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyParam = (float*)malloc(sizeof(float)) ;  bool ret =  self.Behavior_GetFloatParameterValue(pySectionIndex, ParameterName, pyParam); return py::make_tuple(ret, *pySectionIndex, *pyParam); })
        .def("Behavior_SetColorParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName, struct FLinearColor* Param) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetColorParameterValue(pySectionIndex, ParameterName, Param); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetVectorParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName, struct FVector* Param) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetVectorParameterValue(pySectionIndex, ParameterName, Param); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetFloatParameterValue", [](AWillowReplicatedEmitter &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyParam = (float*)malloc(sizeof(float)) ;   self.Behavior_SetFloatParameterValue(pySectionIndex, ParameterName, pyParam); return py::make_tuple(*pySectionIndex, *pyParam); })
        .def("ApplyColorParameters", &AWillowReplicatedEmitter::ApplyColorParameters)
        .def("ApplyVectorParameters", &AWillowReplicatedEmitter::ApplyVectorParameters)
        .def("ApplyFloatParameters", &AWillowReplicatedEmitter::ApplyFloatParameters)
        .def("SetColorParameter", &AWillowReplicatedEmitter::SetColorParameter)
        .def("SetVectorParameter", &AWillowReplicatedEmitter::SetVectorParameter)
        .def("SetFloatParameter", &AWillowReplicatedEmitter::SetFloatParameter)
        .def("eventSetTemplate", &AWillowReplicatedEmitter::eventSetTemplate)
        .def("SetTemplateWithCensoredAlternative", &AWillowReplicatedEmitter::SetTemplateWithCensoredAlternative)
        .def("eventReplicatedEvent", &AWillowReplicatedEmitter::eventReplicatedEvent)
        .def("PostBeginPlay", &AWillowReplicatedEmitter::PostBeginPlay)
          ;
}