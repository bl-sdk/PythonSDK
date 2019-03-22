#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTurnData(py::module &m)
{
    py::class_< FTurnData >(m, "FTurnData")
        .def_readwrite("MinRepeatTime", &FTurnData::MinRepeatTime)
        .def_readwrite("Left", &FTurnData::Left)
        .def_readwrite("Right", &FTurnData::Right)
        .def_readwrite("Left01", &FTurnData::Left01)
        .def_readwrite("Right01", &FTurnData::Right01)
        .def_readwrite("Left02", &FTurnData::Left02)
        .def_readwrite("Right02", &FTurnData::Right02)
  ;
}