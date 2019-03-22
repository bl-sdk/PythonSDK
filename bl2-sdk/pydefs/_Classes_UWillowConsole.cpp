#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowConsole(py::module &m)
{
    py::class_< UWillowConsole,  UConsole   >(m, "UWillowConsole")
        .def("StaticClass", &UWillowConsole::StaticClass, py::return_value_policy::reference)
          ;
}