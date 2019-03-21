#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCounter()
{
    class_< UBehavior_ChangeCounter, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeCounter", no_init)
        .def_readwrite("CounterId", &UBehavior_ChangeCounter::CounterId)
        .def_readwrite("CounterAdjustment", &UBehavior_ChangeCounter::CounterAdjustment)
        .def_readwrite("NewCounterValue", &UBehavior_ChangeCounter::NewCounterValue)
        .def_readwrite("NewCounterTarget", &UBehavior_ChangeCounter::NewCounterTarget)
        .def("StaticClass", &UBehavior_ChangeCounter::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCounter::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}