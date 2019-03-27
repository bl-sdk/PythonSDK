#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEntitlementResult(py::module &m)
{
    py::class_< FEntitlementResult >(m, "FEntitlementResult")
        .def_readwrite("Identifier", &FEntitlementResult::Identifier)
        .def_readwrite("Payload", &FEntitlementResult::Payload)
        .def_readwrite("Id", &FEntitlementResult::Id)
        .def_readwrite("Consumed", &FEntitlementResult::Consumed)
        .def_readwrite("ConsumableAmount", &FEntitlementResult::ConsumableAmount)
  ;
}