#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAccountEntitlement(py::module &m)
{
    py::class_< UGearboxAccountEntitlement,  UObject   >(m, "UGearboxAccountEntitlement")
		.def_static("StaticClass", &UGearboxAccountEntitlement::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Identifier", &UGearboxAccountEntitlement::Identifier)
        .def_readwrite("Id", &UGearboxAccountEntitlement::Id)
        .def_readwrite("ConsumableAmount", &UGearboxAccountEntitlement::ConsumableAmount)
        .def_readwrite("Consumed", &UGearboxAccountEntitlement::Consumed)
        .def_readwrite("Payload", &UGearboxAccountEntitlement::Payload)
        .def_readwrite("LocallyConsumed", &UGearboxAccountEntitlement::LocallyConsumed)
          ;
}