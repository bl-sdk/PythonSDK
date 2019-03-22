#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPauseTicker(py::module &m)
{
    py::class_< UWillowPauseTicker,  UObject   >(m, "UWillowPauseTicker")
        .def_readwrite("VfTable_FTickableObject", &UWillowPauseTicker::VfTable_FTickableObject)
        .def_readwrite("Timers", &UWillowPauseTicker::Timers)
        .def("StaticClass", &UWillowPauseTicker::StaticClass, py::return_value_policy::reference)
        .def("ClearTimer", &UWillowPauseTicker::ClearTimer)
        .def("IsTimerActive", &UWillowPauseTicker::IsTimerActive)
        .def("SetTimer", &UWillowPauseTicker::SetTimer)
          ;
}