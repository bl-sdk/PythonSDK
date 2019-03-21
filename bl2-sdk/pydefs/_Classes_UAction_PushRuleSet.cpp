#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_PushRuleSet()
{
    class_< UAction_PushRuleSet, bases< UActionSequencePawn >  , boost::noncopyable>("UAction_PushRuleSet", no_init)
        .def_readwrite("NewRuleSet", &UAction_PushRuleSet::NewRuleSet)
        .def("StaticClass", &UAction_PushRuleSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}