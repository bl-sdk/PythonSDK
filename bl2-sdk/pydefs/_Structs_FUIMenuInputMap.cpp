#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIMenuInputMap(py::module &m)
{
    py::class_< FUIMenuInputMap >(m, "FUIMenuInputMap")
        .def_readwrite("FieldName", &FUIMenuInputMap::FieldName)
        .def_readwrite("Set", &FUIMenuInputMap::Set)
        .def_readwrite("MappedText", &FUIMenuInputMap::MappedText)
  ;
}