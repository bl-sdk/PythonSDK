#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClanSwitchData(py::module &m)
{
    py::class_< FClanSwitchData >(m, "FClanSwitchData")
        .def_readwrite("SwitchName", &FClanSwitchData::SwitchName)
        .def_readwrite("SwitchValue", &FClanSwitchData::SwitchValue)
  ;
}