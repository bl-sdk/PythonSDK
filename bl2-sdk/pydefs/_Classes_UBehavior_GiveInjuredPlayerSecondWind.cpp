#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GiveInjuredPlayerSecondWind()
{
    py::class_< UBehavior_GiveInjuredPlayerSecondWind,  UBehaviorBase   >("UBehavior_GiveInjuredPlayerSecondWind")
        .def("StaticClass", &UBehavior_GiveInjuredPlayerSecondWind::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GiveInjuredPlayerSecondWind::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}