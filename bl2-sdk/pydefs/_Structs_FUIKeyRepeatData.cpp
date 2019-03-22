#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIKeyRepeatData(py::module &m)
{
    py::class_< FUIKeyRepeatData >(m, "FUIKeyRepeatData")
        .def_readwrite("CurrentRepeatKey", &FUIKeyRepeatData::CurrentRepeatKey)
        .def_readwrite("NextRepeatTime", &FUIKeyRepeatData::NextRepeatTime)
  ;
}