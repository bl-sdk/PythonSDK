#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSplitscreenData(py::module &m)
{
    py::class_< FSplitscreenData >(m, "FSplitscreenData")
        .def_readwrite("PlayerData", &FSplitscreenData::PlayerData)
  ;
}