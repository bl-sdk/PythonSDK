#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureGroupContainer(py::module &m)
{
    py::class_< FTextureGroupContainer >(m, "FTextureGroupContainer")
  ;
}