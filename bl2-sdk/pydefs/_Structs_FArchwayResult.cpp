#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FArchwayResult()
{
    class_< FArchwayResult >("FArchwayResult", no_init)
        .def_readwrite("RequestId", &FArchwayResult::RequestId)
        .def_readwrite("GearboxUserToken", &FArchwayResult::GearboxUserToken)
        .def_readwrite("GearboxUserEmail", &FArchwayResult::GearboxUserEmail)
        .def_readwrite("Messages", &FArchwayResult::Messages)
        .def_readwrite("Entitlements", &FArchwayResult::Entitlements)
        .def_readwrite("Offers", &FArchwayResult::Offers)
        .def_readwrite("Services", &FArchwayResult::Services)
        .def_readwrite("EmergencyMessage", &FArchwayResult::EmergencyMessage)
  ;
}