#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundClassEditorData(py::object m)
{
    py::class_< FSoundClassEditorData >(m, "FSoundClassEditorData")
        .def_readwrite("NodePosX", &FSoundClassEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundClassEditorData::NodePosY)
  ;
}