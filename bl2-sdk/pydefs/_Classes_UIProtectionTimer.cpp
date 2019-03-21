#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIProtectionTimer()
{
    py::class_< UIProtectionTimer,  UInterface   >("UIProtectionTimer")
        .def("StaticClass", &UIProtectionTimer::StaticClass, py::return_value_policy::reference)
        .def("GetMinimumHealthMaintainedByProtectionTimer", &UIProtectionTimer::GetMinimumHealthMaintainedByProtectionTimer)
        .def("EnableProtectionTimer", &UIProtectionTimer::EnableProtectionTimer)
        .def("IsProtectionTimerActive", &UIProtectionTimer::IsProtectionTimerActive)
        .staticmethod("StaticClass")
  ;
}