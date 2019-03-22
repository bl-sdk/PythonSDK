#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFlag(py::module &m)
{
    py::class_< FFlag >(m, "FFlag")
        .def_readwrite("Value", &FFlag::Value)
        .def_readwrite("Raised", &FFlag::Raised)
        .def_readwrite("Lowered", &FFlag::Lowered)
        .def_readwrite("Padding", &FFlag::Padding)
        .def_readwrite("RaisedTime", &FFlag::RaisedTime)
        .def_readwrite("LoweredTime", &FFlag::LoweredTime)
        .def_readwrite("Duration", &FFlag::Duration)
  ;
}