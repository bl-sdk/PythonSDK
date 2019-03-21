#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxAccountEntitlement()
{
    class_< UGearboxAccountEntitlement, bases< UObject >  , boost::noncopyable>("UGearboxAccountEntitlement", no_init)
        .def_readwrite("Identifier", &UGearboxAccountEntitlement::Identifier)
        .def_readwrite("Id", &UGearboxAccountEntitlement::Id)
        .def_readwrite("ConsumableAmount", &UGearboxAccountEntitlement::ConsumableAmount)
        .def_readwrite("Consumed", &UGearboxAccountEntitlement::Consumed)
        .def_readwrite("Payload", &UGearboxAccountEntitlement::Payload)
        .def_readwrite("LocallyConsumed", &UGearboxAccountEntitlement::LocallyConsumed)
        .def("StaticClass", &UGearboxAccountEntitlement::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}