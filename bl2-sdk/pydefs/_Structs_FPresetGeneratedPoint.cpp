#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPresetGeneratedPoint(py::object m)
{
    py::class_< FPresetGeneratedPoint >(m, "FPresetGeneratedPoint")
        .def_readwrite("KeyIn", &FPresetGeneratedPoint::KeyIn)
        .def_readwrite("KeyOut", &FPresetGeneratedPoint::KeyOut)
        .def_readwrite("TangentIn", &FPresetGeneratedPoint::TangentIn)
        .def_readwrite("TangentOut", &FPresetGeneratedPoint::TangentOut)
        .def_readwrite("IntepMode", &FPresetGeneratedPoint::IntepMode)
  ;
}