#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIFactoryBase(py::object m)
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
        .def("ReturnAIDef", &UAIFactoryBase::ReturnAIDef)
        .def("GetAIDef", &UAIFactoryBase::GetAIDef)
        .def("ReturnTargetRecord", &UAIFactoryBase::ReturnTargetRecord)
        .def("GetTargetRecord", &UAIFactoryBase::GetTargetRecord)
        .def("ReturnActionSequence", &UAIFactoryBase::ReturnActionSequence)
        .def("GetActionSequence", &UAIFactoryBase::GetActionSequence)
        .def("ReturnRuleSet", &UAIFactoryBase::ReturnRuleSet)
        .def("GetRuleSetFromArchetype", &UAIFactoryBase::GetRuleSetFromArchetype)
        .def("ReturnKnowledgeRecord", &UAIFactoryBase::ReturnKnowledgeRecord)
        .def("GetKnowledgeRecordListFromArchetypes", &UAIFactoryBase::GetKnowledgeRecordListFromArchetypes)
        .def("GetKnowledgeRecordFromArchetype", &UAIFactoryBase::GetKnowledgeRecordFromArchetype)
        .def("GetKnowledgeRecord", &UAIFactoryBase::GetKnowledgeRecord)
        .def("ReturnRule", &UAIFactoryBase::ReturnRule)
        .def("GetRuleFromArchetype", &UAIFactoryBase::GetRuleFromArchetype)
        .def("GetRule", &UAIFactoryBase::GetRule)
        .def("ReturnRuleEngine", &UAIFactoryBase::ReturnRuleEngine)
          ;
}