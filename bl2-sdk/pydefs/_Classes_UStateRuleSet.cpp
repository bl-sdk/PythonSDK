#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStateRuleSet()
{
    class_< UStateRuleSet, bases< URuleSet >  , boost::noncopyable>("UStateRuleSet", no_init)
        .def_readwrite("StateRules", &UStateRuleSet::StateRules)
        .def_readwrite("StateAttributeMap", &UStateRuleSet::StateAttributeMap)
        .def("StaticClass", &UStateRuleSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}