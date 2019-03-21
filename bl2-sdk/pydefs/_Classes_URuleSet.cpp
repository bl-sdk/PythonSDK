#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URuleSet()
{
    class_< URuleSet, bases< UObject >  , boost::noncopyable>("URuleSet", no_init)
        .def_readwrite("TheAIFactory", &URuleSet::TheAIFactory)
        .def_readwrite("RuleTemplateRefs", &URuleSet::RuleTemplateRefs)
        .def_readwrite("Rules", &URuleSet::Rules)
        .def_readwrite("ToDiscard", &URuleSet::ToDiscard)
        .def_readwrite("RuleSetName", &URuleSet::RuleSetName)
        .def_readwrite("FlagsOnEntry", &URuleSet::FlagsOnEntry)
        .def_readwrite("FlagsOnExit", &URuleSet::FlagsOnExit)
        .def_readwrite("HACK_RuleSetsAllowedToFollow", &URuleSet::HACK_RuleSetsAllowedToFollow)
        .def("StaticClass", &URuleSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}