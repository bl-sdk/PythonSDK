#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimTransform(py::module &m)
{
    py::class_< FAimTransform >(m, "FAimTransform")
        .def_readwrite("Quaternion", &FAimTransform::Quaternion)
        .def_readwrite("Translation", &FAimTransform::Translation)
  ;
}