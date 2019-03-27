#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundThemeBinding(py::module &m)
{
    py::class_< FSoundThemeBinding >(m, "FSoundThemeBinding")
        .def_readwrite("ThemeName", &FSoundThemeBinding::ThemeName)
        .def_readwrite("Theme", &FSoundThemeBinding::Theme)
  ;
}