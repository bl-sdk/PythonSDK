#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenMessageString(py::object m)
{
    py::class_< FScreenMessageString >(m, "FScreenMessageString")
        .def_readwrite("Key", &FScreenMessageString::Key)
        .def_readwrite("ScreenMessage", &FScreenMessageString::ScreenMessage)
        .def_readwrite("DisplayColor", &FScreenMessageString::DisplayColor)
        .def_readwrite("TimeToDisplay", &FScreenMessageString::TimeToDisplay)
        .def_readwrite("CurrentTimeDisplayed", &FScreenMessageString::CurrentTimeDisplayed)
  ;
}