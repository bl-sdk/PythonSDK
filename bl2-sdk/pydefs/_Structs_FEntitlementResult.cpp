#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEntitlementResult()
{
    class_< FEntitlementResult >("FEntitlementResult", no_init)
        .def_readwrite("Identifier", &FEntitlementResult::Identifier)
        .def_readwrite("Payload", &FEntitlementResult::Payload)
        .def_readwrite("Id", &FEntitlementResult::Id)
        .def_readwrite("Consumed", &FEntitlementResult::Consumed)
        .def_readwrite("ConsumableAmount", &FEntitlementResult::ConsumableAmount)
  ;
}