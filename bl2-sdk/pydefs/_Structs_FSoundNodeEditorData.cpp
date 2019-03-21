#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundNodeEditorData()
{
    py::class_< FSoundNodeEditorData >("FSoundNodeEditorData")
        .def_readwrite("NodePosX", &FSoundNodeEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundNodeEditorData::NodePosY)
  ;
}