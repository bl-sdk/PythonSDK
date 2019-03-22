#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLevelTimerDefinition(py::module &m)
{
    py::class_< UWillowLevelTimerDefinition,  UGBXDefinition   >(m, "UWillowLevelTimerDefinition")
        .def_readwrite("TimerHeader", &UWillowLevelTimerDefinition::TimerHeader)
        .def_readwrite("XPosition", &UWillowLevelTimerDefinition::XPosition)
        .def_readwrite("YPosition", &UWillowLevelTimerDefinition::YPosition)
        .def_readwrite("TimerFont", &UWillowLevelTimerDefinition::TimerFont)
        .def_readwrite("TimerColor", &UWillowLevelTimerDefinition::TimerColor)
          ;
}