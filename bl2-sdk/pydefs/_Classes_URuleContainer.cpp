#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URuleContainer()
{
    class_< URuleContainer, bases< URule >  , boost::noncopyable>("URuleContainer", no_init)
        .def_readwrite("RuleSetTemplate", &URuleContainer::RuleSetTemplate)
        .def_readwrite("CurRuleSet", &URuleContainer::CurRuleSet)
        .def("StaticClass", &URuleContainer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}