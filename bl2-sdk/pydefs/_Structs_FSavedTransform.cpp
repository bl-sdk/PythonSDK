#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSavedTransform(py::module &m)
{
    py::class_< FSavedTransform >(m, "FSavedTransform")
        .def_readwrite("Location", &FSavedTransform::Location)
        .def_readwrite("Rotation", &FSavedTransform::Rotation)
  ;
}