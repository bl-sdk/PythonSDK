#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RuleEvent()
{
    class_< UBehavior_RuleEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RuleEvent", no_init)
        .def("StaticClass", &UBehavior_RuleEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}