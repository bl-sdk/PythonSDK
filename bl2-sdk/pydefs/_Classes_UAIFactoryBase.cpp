#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIFactoryBase(py::module &m)
{
    py::class_< UAIFactoryBase,  UObject   >(m, "UAIFactoryBase")
        .def_readwrite("KnowledgeRecordList", &UAIFactoryBase::KnowledgeRecordList)
        .def_readwrite("RuleSets", &UAIFactoryBase::RuleSets)
        .def_readwrite("Rules", &UAIFactoryBase::Rules)
        .def_readwrite("ActionSequences", &UAIFactoryBase::ActionSequences)
        .def_readwrite("TargetRecords", &UAIFactoryBase::TargetRecords)
        .def_readwrite("AIDefinitionRecords", &UAIFactoryBase::AIDefinitionRecords)
        .def_readwrite("TimeStampedRecordLifetime", &UAIFactoryBase::TimeStampedRecordLifetime)
        .def("StaticClass", &UAIFactoryBase::StaticClass, py::return_value_policy::reference)
        .def("FlushPools", &UAIFactoryBase::FlushPools)
        .def("ReturnAIDef", [](UAIFactoryBase &self ) { class UAIDefinition** pyInAIDef = 0 ;   self.ReturnAIDef(pyInAIDef); return py::make_tuple(*pyInAIDef); })
        .def("GetAIDef", [](UAIFactoryBase &self , class UAIDefinition* AIDefTemplate) { class UAIDefinition** pyOutAIDef = 0 ;  bool ret =  self.GetAIDef(AIDefTemplate, pyOutAIDef); return py::make_tuple(ret, *pyOutAIDef); })
        .def("ReturnTargetRecord", [](UAIFactoryBase &self ) { class UMindTargetInfo** pyInTargetRecord = 0 ;   self.ReturnTargetRecord(pyInTargetRecord); return py::make_tuple(*pyInTargetRecord); })
        .def("GetTargetRecord", [](UAIFactoryBase &self , class UClass* InfoClass) { class UMindTargetInfo** pyOutTargetRecord = 0 ;  bool ret =  self.GetTargetRecord(InfoClass, pyOutTargetRecord); return py::make_tuple(ret, *pyOutTargetRecord); })
        .def("ReturnActionSequence", [](UAIFactoryBase &self ) { class UActionSequence** pyInSequence = 0 ;   self.ReturnActionSequence(pyInSequence); return py::make_tuple(*pyInSequence); })
        .def("GetActionSequence", [](UAIFactoryBase &self , class UActionSequence* SequenceTemplate) { class UActionSequence** pyOutSequence = 0 ;  bool ret =  self.GetActionSequence(SequenceTemplate, pyOutSequence); return py::make_tuple(ret, *pyOutSequence); })
        .def("ReturnRuleSet", [](UAIFactoryBase &self ) { class URuleSet** pyInRuleSet = 0 ;   self.ReturnRuleSet(pyInRuleSet); return py::make_tuple(*pyInRuleSet); })
        .def("GetRuleSetFromArchetype", [](UAIFactoryBase &self , class URuleSet* RuleSetArchetype, TArray< class URule* >* CurRunningRules) { class URuleSet** pyOutRuleSet = 0 ;  bool ret =  self.GetRuleSetFromArchetype(RuleSetArchetype, pyOutRuleSet, CurRunningRules); return py::make_tuple(ret, *pyOutRuleSet); })
        .def("ReturnKnowledgeRecord", [](UAIFactoryBase &self ) { class UKnowledgeRecord** pyInKR = 0 ;   self.ReturnKnowledgeRecord(pyInKR); return py::make_tuple(*pyInKR); })
        .def("GetKnowledgeRecordListFromArchetypes", &UAIFactoryBase::GetKnowledgeRecordListFromArchetypes)
        .def("GetKnowledgeRecordFromArchetype", [](UAIFactoryBase &self , class UKnowledgeRecord* InKR) { class UKnowledgeRecord** pyOutKR = 0 ;  bool ret =  self.GetKnowledgeRecordFromArchetype(InKR, pyOutKR); return py::make_tuple(ret, *pyOutKR); })
        .def("GetKnowledgeRecord", [](UAIFactoryBase &self , class UClass* KnowledgeRecordClass) { class UKnowledgeRecord** pyOutKR = 0 ;  bool ret =  self.GetKnowledgeRecord(KnowledgeRecordClass, pyOutKR); return py::make_tuple(ret, *pyOutKR); })
        .def("ReturnRule", [](UAIFactoryBase &self ) { class URule** pyInRule = 0 ;   self.ReturnRule(pyInRule); return py::make_tuple(*pyInRule); })
        .def("GetRuleFromArchetype", [](UAIFactoryBase &self , class URule* InRule) { class URule** pyOutRule = 0 ;  bool ret =  self.GetRuleFromArchetype(InRule, pyOutRule); return py::make_tuple(ret, *pyOutRule); })
        .def("GetRule", [](UAIFactoryBase &self , class UClass* RuleClass) { class URule** pyOutRule = 0 ;  bool ret =  self.GetRule(RuleClass, pyOutRule); return py::make_tuple(ret, *pyOutRule); })
        .def("ReturnRuleEngine", &UAIFactoryBase::ReturnRuleEngine)
          ;
}