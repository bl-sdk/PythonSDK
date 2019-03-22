#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIRangeData(py::module &m)
{
    py::class_< FUIRangeData >(m, "FUIRangeData")
        .def_readwrite("CurrentValue", &FUIRangeData::CurrentValue)
        .def_readwrite("MinValue", &FUIRangeData::MinValue)
        .def_readwrite("MaxValue", &FUIRangeData::MaxValue)
        .def_readwrite("NudgeValue", &FUIRangeData::NudgeValue)
  ;
}