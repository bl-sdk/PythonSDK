#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AITakeMoney()
{
    py::class_< UBehavior_AITakeMoney,  UBehaviorBase   >("UBehavior_AITakeMoney")
        .def_readwrite("TakePercent", &UBehavior_AITakeMoney::TakePercent)
        .def_readwrite("GiveTo", &UBehavior_AITakeMoney::GiveTo)
        .def_readwrite("CashItemPool", &UBehavior_AITakeMoney::CashItemPool)
        .def_readwrite("HUDSpecialRemovalFrame", &UBehavior_AITakeMoney::HUDSpecialRemovalFrame)
        .def("StaticClass", &UBehavior_AITakeMoney::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AITakeMoney::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}