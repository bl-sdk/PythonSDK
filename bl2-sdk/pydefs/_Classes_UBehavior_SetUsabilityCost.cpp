#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetUsabilityCost(py::module &m)
{
    py::class_< UBehavior_SetUsabilityCost,  UBehaviorBase   >(m, "UBehavior_SetUsabilityCost")
        .def_readwrite("ChangeCost", &UBehavior_SetUsabilityCost::ChangeCost)
        .def_readwrite("CostCurrencyType", &UBehavior_SetUsabilityCost::CostCurrencyType)
        .def_readwrite("UsabilityType", &UBehavior_SetUsabilityCost::UsabilityType)
        .def_readwrite("CostAmount", &UBehavior_SetUsabilityCost::CostAmount)
        .def("StaticClass", &UBehavior_SetUsabilityCost::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetUsabilityCost::ApplyBehaviorToContext)
          ;
}