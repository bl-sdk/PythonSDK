#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UColiseumRuleDefinition()
{
    class_< UColiseumRuleDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UColiseumRuleDefinition", no_init)
        .def_readwrite("RuleTitle", &UColiseumRuleDefinition::RuleTitle)
        .def_readwrite("RuleDescription", &UColiseumRuleDefinition::RuleDescription)
        .def_readwrite("FrameLabel", &UColiseumRuleDefinition::FrameLabel)
        .def("StaticClass", &UColiseumRuleDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}