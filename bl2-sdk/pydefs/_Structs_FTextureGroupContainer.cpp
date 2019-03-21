#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureGroupContainer(py::object m)
{
    py::class_< FTextureGroupContainer >(m, "FTextureGroupContainer")
  ;
}