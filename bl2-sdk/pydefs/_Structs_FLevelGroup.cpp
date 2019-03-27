#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelGroup(py::module &m)
{
    py::class_< FLevelGroup >(m, "FLevelGroup")
        .def_readwrite("GroupColor", &FLevelGroup::GroupColor)
        .def_readwrite("Levels", &FLevelGroup::Levels)
        .def_readwrite("LevelGridVolumes", &FLevelGroup::LevelGridVolumes)
        .def_readwrite("GroupName", &FLevelGroup::GroupName)
  ;
}