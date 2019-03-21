#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemPartSettings(py::object m)
{
    py::class_< FItemPartSettings >(m, "FItemPartSettings")
        .def_readwrite("PartList", &FItemPartSettings::PartList)
        .def_readwrite("Part", &FItemPartSettings::Part)
        .def_readwrite("PartName", &FItemPartSettings::PartName)
  ;
}