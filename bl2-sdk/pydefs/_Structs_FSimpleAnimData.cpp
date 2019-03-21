#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSimpleAnimData()
{
    py::class_< FSimpleAnimData >("FSimpleAnimData")
        .def_readwrite("AnimName", &FSimpleAnimData::AnimName)
        .def_readwrite("Tree", &FSimpleAnimData::Tree)
        .def_readwrite("Nodes", &FSimpleAnimData::Nodes)
  ;
}