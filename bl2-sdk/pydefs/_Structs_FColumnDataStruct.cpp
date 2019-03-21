#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColumnDataStruct(py::object m)
{
    py::class_< FColumnDataStruct >(m, "FColumnDataStruct")
        .def_readwrite("HeaderText", &FColumnDataStruct::HeaderText)
        .def_readwrite("Value", &FColumnDataStruct::Value)
        .def_readwrite("BarColor", &FColumnDataStruct::BarColor)
  ;
}