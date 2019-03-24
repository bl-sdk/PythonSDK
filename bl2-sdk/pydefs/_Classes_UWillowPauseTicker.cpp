#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPauseTicker(py::module &m)
{
    py::class_< UWillowPauseTicker,  UObject   >(m, "UWillowPauseTicker")
		.def_static("StaticClass", &UWillowPauseTicker::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FTickableObject", &UWillowPauseTicker::VfTable_FTickableObject)
        .def_readwrite("Timers", &UWillowPauseTicker::Timers)
        .def("ClearTimer", &UWillowPauseTicker::ClearTimer)
        .def("IsTimerActive", &UWillowPauseTicker::IsTimerActive)
        .def("SetTimer", &UWillowPauseTicker::SetTimer)
          ;
}