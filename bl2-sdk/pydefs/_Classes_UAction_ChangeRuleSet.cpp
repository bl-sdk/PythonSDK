#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_ChangeRuleSet()
{
    class_< UAction_ChangeRuleSet, bases< UActionSequence >  , boost::noncopyable>("UAction_ChangeRuleSet", no_init)
        .def_readwrite("NewRuleSet", &UAction_ChangeRuleSet::NewRuleSet)
        .def("StaticClass", &UAction_ChangeRuleSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}