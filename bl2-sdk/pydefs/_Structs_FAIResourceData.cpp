#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIResourceData()
{
    py::class_< FAIResourceData >("FAIResourceData")
        .def_readwrite("Resource", &FAIResourceData::Resource)
        .def_readwrite("CanRun", &FAIResourceData::CanRun)
        .def_readwrite("Running", &FAIResourceData::Running)
  ;
}