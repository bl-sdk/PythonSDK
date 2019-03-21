#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStreamingNameCombo(py::object m)
{
    py::class_< FLevelStreamingNameCombo >(m, "FLevelStreamingNameCombo")
        .def_readwrite("Level", &FLevelStreamingNameCombo::Level)
        .def_readwrite("LevelName", &FLevelStreamingNameCombo::LevelName)
  ;
}