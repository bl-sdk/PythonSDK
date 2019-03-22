#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNodeData(py::module &m)
{
    py::class_< FNodeData >(m, "FNodeData")
        .def_readwrite("Node", &FNodeData::Node)
        .def_readwrite("Weight", &FNodeData::Weight)
  ;
}