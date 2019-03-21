#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSplitscreenData()
{
    py::class_< FSplitscreenData >("FSplitscreenData")
        .def_readwrite("PlayerData", &FSplitscreenData::PlayerData)
  ;
}