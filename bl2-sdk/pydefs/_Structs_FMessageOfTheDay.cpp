#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMessageOfTheDay(py::object m)
{
    py::class_< FMessageOfTheDay >(m, "FMessageOfTheDay")
        .def_readwrite("Header", &FMessageOfTheDay::Header)
        .def_readwrite("Body", &FMessageOfTheDay::Body)
        .def_readwrite("DisplayTime", &FMessageOfTheDay::DisplayTime)
  ;
}