#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundNodeEditorData(py::object m)
{
    py::class_< FSoundNodeEditorData >(m, "FSoundNodeEditorData")
        .def_readwrite("NodePosX", &FSoundNodeEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundNodeEditorData::NodePosY)
  ;
}