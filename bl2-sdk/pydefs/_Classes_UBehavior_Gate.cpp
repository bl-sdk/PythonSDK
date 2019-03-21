#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_Gate()
{
    class_< UBehavior_Gate, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_Gate", no_init)
        .def_readwrite("GateCount", &UBehavior_Gate::GateCount)
        .def_readwrite("ActivationCount", &UBehavior_Gate::ActivationCount)
        .def("StaticClass", &UBehavior_Gate::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_Gate::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}