#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ReviveInjuredPlayer()
{
    py::class_< UBehavior_ReviveInjuredPlayer,  UBehaviorBase   >("UBehavior_ReviveInjuredPlayer")
        .def_readwrite("ReviverContext", &UBehavior_ReviveInjuredPlayer::ReviverContext)
        .def("StaticClass", &UBehavior_ReviveInjuredPlayer::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ReviveInjuredPlayer::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}