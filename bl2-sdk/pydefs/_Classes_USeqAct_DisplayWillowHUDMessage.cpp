#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_DisplayWillowHUDMessage(py::module &m)
{
    py::class_< USeqAct_DisplayWillowHUDMessage,  USequenceAction   >(m, "USeqAct_DisplayWillowHUDMessage")
		.def_static("StaticClass", &USeqAct_DisplayWillowHUDMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MessageType", &USeqAct_DisplayWillowHUDMessage::MessageType)
        .def_readwrite("MarkupString", &USeqAct_DisplayWillowHUDMessage::MarkupString)
        .def_readwrite("Duration", &USeqAct_DisplayWillowHUDMessage::Duration)
          ;
}