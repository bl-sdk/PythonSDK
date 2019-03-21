#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConsoleMessage()
{
    py::class_< FConsoleMessage >("FConsoleMessage")
        .def_readwrite("Text", &FConsoleMessage::Text)
        .def_readwrite("TextColor", &FConsoleMessage::TextColor)
        .def_readwrite("MessageLife", &FConsoleMessage::MessageLife)
        .def_readwrite("PRI", &FConsoleMessage::PRI)
  ;
}