#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AITakeMoney(py::module &m)
{
    py::class_< UBehavior_AITakeMoney,  UBehaviorBase   >(m, "UBehavior_AITakeMoney")
		.def_static("StaticClass", &UBehavior_AITakeMoney::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TakePercent", &UBehavior_AITakeMoney::TakePercent)
        .def_readwrite("GiveTo", &UBehavior_AITakeMoney::GiveTo)
        .def_readwrite("CashItemPool", &UBehavior_AITakeMoney::CashItemPool)
        .def_readwrite("HUDSpecialRemovalFrame", &UBehavior_AITakeMoney::HUDSpecialRemovalFrame)
        .def("ApplyBehaviorToContext", &UBehavior_AITakeMoney::ApplyBehaviorToContext)
          ;
}