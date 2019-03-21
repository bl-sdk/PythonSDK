#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetRuleSet()
{
    class_< UBehavior_SetRuleSet, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetRuleSet", no_init)
        .def("StaticClass", &UBehavior_SetRuleSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}