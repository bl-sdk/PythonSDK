#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetRuleSetByName()
{
    class_< UBehavior_SetRuleSetByName, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetRuleSetByName", no_init)
        .def("StaticClass", &UBehavior_SetRuleSetByName::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}