#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RandomlyRunBehaviors()
{
    class_< UBehavior_RandomlyRunBehaviors, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RandomlyRunBehaviors", no_init)
        .def_readwrite("ProbabilityContext", &UBehavior_RandomlyRunBehaviors::ProbabilityContext)
        .def_readwrite("ProbabilityLowerBound", &UBehavior_RandomlyRunBehaviors::ProbabilityLowerBound)
        .def_readwrite("ProbabilityUpperBound", &UBehavior_RandomlyRunBehaviors::ProbabilityUpperBound)
        .def_readwrite("Possibilities", &UBehavior_RandomlyRunBehaviors::Possibilities)
        .def("StaticClass", &UBehavior_RandomlyRunBehaviors::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehavior", &UBehavior_RandomlyRunBehaviors::ApplyBehavior)
        .staticmethod("StaticClass")
  ;
}