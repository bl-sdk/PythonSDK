#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimTransform()
{
    py::class_< FAimTransform >("FAimTransform")
        .def_readwrite("Quaternion", &FAimTransform::Quaternion)
        .def_readwrite("Translation", &FAimTransform::Translation)
  ;
}