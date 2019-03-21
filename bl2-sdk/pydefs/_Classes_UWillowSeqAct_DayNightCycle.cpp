#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_DayNightCycle(py::object m)
{
    py::class_< UWillowSeqAct_DayNightCycle,  USeqAct_Interp   >(m, "UWillowSeqAct_DayNightCycle")
        .def("StaticClass", &UWillowSeqAct_DayNightCycle::StaticClass, py::return_value_policy::reference)
        .def("TogglePauseDayCycle", &UWillowSeqAct_DayNightCycle::TogglePauseDayCycle)
        .def("SetTimeOfDay", &UWillowSeqAct_DayNightCycle::SetTimeOfDay)
          ;
}