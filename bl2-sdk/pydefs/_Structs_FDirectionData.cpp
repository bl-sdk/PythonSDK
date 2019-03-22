#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDirectionData(py::module &m)
{
    py::class_< FDirectionData >(m, "FDirectionData")
        .def_readwrite("This", &FDirectionData::This)
        .def_readwrite("Left", &FDirectionData::Left)
        .def_readwrite("Right", &FDirectionData::Right)
        .def_readwrite("Up", &FDirectionData::Up)
        .def_readwrite("Down", &FDirectionData::Down)
  ;
}