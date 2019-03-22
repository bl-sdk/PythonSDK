#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeTimer(py::module &m)
{
    py::class_< UBehavior_ChangeTimer,  UBehaviorBase   >(m, "UBehavior_ChangeTimer")
        .def_readwrite("TimerId", &UBehavior_ChangeTimer::TimerId)
        .def_readwrite("Reaction", &UBehavior_ChangeTimer::Reaction)
        .def_readwrite("NewTimerDelayFormula", &UBehavior_ChangeTimer::NewTimerDelayFormula)
        .def_readwrite("NewTimerDelay", &UBehavior_ChangeTimer::NewTimerDelay)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeTimer::ApplyBehaviorToContext)
          ;
}