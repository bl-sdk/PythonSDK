#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIRuleEngineOwner()
{
    class_< UIRuleEngineOwner, bases< UInterface >  , boost::noncopyable>("UIRuleEngineOwner", no_init)
        .def("StaticClass", &UIRuleEngineOwner::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetRuleEngine", &UIRuleEngineOwner::GetRuleEngine, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}