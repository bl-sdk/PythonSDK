#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Metronome(py::object m)
{
    py::class_< UBehavior_Metronome,  UBehaviorBase   >(m, "UBehavior_Metronome")
        .def_readwrite("MaxTickCount", &UBehavior_Metronome::MaxTickCount)
        .def_readwrite("CurrentTickCount", &UBehavior_Metronome::CurrentTickCount)
        .def_readwrite("Duration", &UBehavior_Metronome::Duration)
        .def_readwrite("TickInterval", &UBehavior_Metronome::TickInterval)
        .def("StaticClass", &UBehavior_Metronome::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Metronome::ApplyBehaviorToContext)
          ;
}