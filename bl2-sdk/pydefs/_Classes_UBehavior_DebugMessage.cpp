#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DebugMessage(py::module &m)
{
    py::class_< UBehavior_DebugMessage,  UBehaviorBase   >(m, "UBehavior_DebugMessage")
		.def_static("StaticClass", &UBehavior_DebugMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DebugMessage", &UBehavior_DebugMessage::DebugMessage)
        .def_readwrite("Duration", &UBehavior_DebugMessage::Duration)
        .def_readwrite("DebugFloat", &UBehavior_DebugMessage::DebugFloat)
        .def_readwrite("DebugInt", &UBehavior_DebugMessage::DebugInt)
        .def_readwrite("DebugObject", &UBehavior_DebugMessage::DebugObject)
        .def_readwrite("DebugVector", &UBehavior_DebugMessage::DebugVector)
        .def("ApplyBehaviorToContext", &UBehavior_DebugMessage::ApplyBehaviorToContext)
          ;
}