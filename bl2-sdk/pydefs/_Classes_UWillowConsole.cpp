#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowConsole()
{
    py::class_< UWillowConsole,  UConsole   >("UWillowConsole")
        .def("StaticClass", &UWillowConsole::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}