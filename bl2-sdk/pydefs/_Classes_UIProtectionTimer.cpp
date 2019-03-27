#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIProtectionTimer(py::module &m)
{
    py::class_< UIProtectionTimer,  UInterface   >(m, "UIProtectionTimer")
		.def_static("StaticClass", &UIProtectionTimer::StaticClass, py::return_value_policy::reference)
        .def("GetMinimumHealthMaintainedByProtectionTimer", &UIProtectionTimer::GetMinimumHealthMaintainedByProtectionTimer)
        .def("EnableProtectionTimer", &UIProtectionTimer::EnableProtectionTimer)
        .def("IsProtectionTimerActive", &UIProtectionTimer::IsProtectionTimerActive)
          ;
}