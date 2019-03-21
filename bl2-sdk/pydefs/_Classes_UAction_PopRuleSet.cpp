#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_PopRuleSet()
{
    class_< UAction_PopRuleSet, bases< UActionSequencePawn >  , boost::noncopyable>("UAction_PopRuleSet", no_init)
        .def("StaticClass", &UAction_PopRuleSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}