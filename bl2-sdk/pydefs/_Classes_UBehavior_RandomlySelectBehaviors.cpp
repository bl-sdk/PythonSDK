#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RandomlySelectBehaviors()
{
    class_< UBehavior_RandomlySelectBehaviors, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RandomlySelectBehaviors", no_init)
        .def_readwrite("Possibilities", &UBehavior_RandomlySelectBehaviors::Possibilities)
        .def_readwrite("WeightContext", &UBehavior_RandomlySelectBehaviors::WeightContext)
        .def("StaticClass", &UBehavior_RandomlySelectBehaviors::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehavior", &UBehavior_RandomlySelectBehaviors::ApplyBehavior)
        .def("SelectAndRunWeightedBehaviors", &UBehavior_RandomlySelectBehaviors::SelectAndRunWeightedBehaviors)
        .staticmethod("StaticClass")
  ;
}