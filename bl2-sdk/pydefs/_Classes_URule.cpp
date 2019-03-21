#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URule()
{
    class_< URule, bases< UObject >  , boost::noncopyable>("URule", no_init)
        .def_readwrite("MyRuleEngine", &URule::MyRuleEngine)
        .def_readwrite("Priority", &URule::Priority)
        .def_readwrite("BasePriority", &URule::BasePriority)
        .def_readwrite("StartingSequenceTemplate", &URule::StartingSequenceTemplate)
        .def_readwrite("ExecutionPattern", &URule::ExecutionPattern)
        .def_readwrite("TimeToWaitBeforeFirstExecution", &URule::TimeToWaitBeforeFirstExecution)
        .def_readwrite("TimeToWaitBeforeNextExecution", &URule::TimeToWaitBeforeNextExecution)
        .def_readwrite("MaxTimeToExecute", &URule::MaxTimeToExecute)
        .def_readwrite("MaxNumberOfExecutions", &URule::MaxNumberOfExecutions)
        .def_readwrite("CanExecuteConditionals", &URule::CanExecuteConditionals)
        .def_readwrite("ShouldStopConditionals", &URule::ShouldStopConditionals)
        .def_readwrite("CanExecuteExpression", &URule::CanExecuteExpression)
        .def_readwrite("ShouldStopExpression", &URule::ShouldStopExpression)
        .def_readwrite("MyActionSequence", &URule::MyActionSequence)
        .def_readwrite("TheAIFactory", &URule::TheAIFactory)
        .def_readwrite("MyRuleEventDef", &URule::MyRuleEventDef)
        .def_readwrite("AssociatedKnowledgeRecords", &URule::AssociatedKnowledgeRecords)
        .def_readwrite("FlagDebugString", &URule::FlagDebugString)
        .def_readwrite("RuleName", &URule::RuleName)
        .def_readwrite("OtherEventParticipantObject", &URule::OtherEventParticipantObject)
        .def_readwrite("IsTimingRestrictedNow", &URule::IsTimingRestrictedNow)
        .def_readwrite("NumExecutions", &URule::NumExecutions)
        .def_readwrite("RuleEventDefPath", &URule::RuleEventDefPath)
        .def_readwrite("StartExecutionTimeStamp", &URule::StartExecutionTimeStamp)
        .def("StaticClass", &URule::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetRuleName", &URule::GetRuleName)
        .def("GetRuleFName", &URule::GetRuleFName)
        .def("GetOtherEventParticipant", &URule::GetOtherEventParticipant, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}