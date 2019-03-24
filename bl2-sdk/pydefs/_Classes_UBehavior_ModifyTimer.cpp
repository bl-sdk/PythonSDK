#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ModifyTimer(py::module &m)
{
    py::class_< UBehavior_ModifyTimer,  UBehaviorBase   >(m, "UBehavior_ModifyTimer")
		.def_static("StaticClass", &UBehavior_ModifyTimer::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TimerId", &UBehavior_ModifyTimer::TimerId)
        .def_readwrite("Operation", &UBehavior_ModifyTimer::Operation)
        .def_readwrite("NewTimerDelay", &UBehavior_ModifyTimer::NewTimerDelay)
        .def("PublishBehaviorOutput", &UBehavior_ModifyTimer::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_ModifyTimer::ApplyBehaviorToContext)
          ;
}