#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundClassEditorData()
{
    py::class_< FSoundClassEditorData >("FSoundClassEditorData")
        .def_readwrite("NodePosX", &FSoundClassEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundClassEditorData::NodePosY)
  ;
}