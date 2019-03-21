#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeTimer()
{
    class_< UBehavior_ChangeTimer, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeTimer", no_init)
        .def_readwrite("TimerId", &UBehavior_ChangeTimer::TimerId)
        .def_readwrite("Reaction", &UBehavior_ChangeTimer::Reaction)
        .def_readwrite("NewTimerDelayFormula", &UBehavior_ChangeTimer::NewTimerDelayFormula)
        .def_readwrite("NewTimerDelay", &UBehavior_ChangeTimer::NewTimerDelay)
        .def("StaticClass", &UBehavior_ChangeTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeTimer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}