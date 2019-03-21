#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSavedTransform()
{
    py::class_< FSavedTransform >("FSavedTransform")
        .def_readwrite("Location", &FSavedTransform::Location)
        .def_readwrite("Rotation", &FSavedTransform::Rotation)
  ;
}