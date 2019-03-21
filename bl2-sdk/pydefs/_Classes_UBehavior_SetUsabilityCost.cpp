#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsabilityCost()
{
    class_< UBehavior_SetUsabilityCost, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetUsabilityCost", no_init)
        .def_readwrite("ChangeCost", &UBehavior_SetUsabilityCost::ChangeCost)
        .def_readwrite("CostCurrencyType", &UBehavior_SetUsabilityCost::CostCurrencyType)
        .def_readwrite("UsabilityType", &UBehavior_SetUsabilityCost::UsabilityType)
        .def_readwrite("CostAmount", &UBehavior_SetUsabilityCost::CostAmount)
        .def("StaticClass", &UBehavior_SetUsabilityCost::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetUsabilityCost::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}