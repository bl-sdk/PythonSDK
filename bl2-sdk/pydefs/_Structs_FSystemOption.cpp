#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSystemOption(py::object m)
{
    py::class_< FSystemOption >(m, "FSystemOption")
        .def_readwrite("Name", &FSystemOption::Name)
        .def_readwrite("ValueCount", &FSystemOption::ValueCount)
        .def_readwrite("CurrValue", &FSystemOption::CurrValue)
        .def_readwrite("ValueStrings", &FSystemOption::ValueStrings)
  ;
}