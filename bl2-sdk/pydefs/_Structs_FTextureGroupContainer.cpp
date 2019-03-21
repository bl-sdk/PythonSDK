#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureGroupContainer()
{
    py::class_< FTextureGroupContainer >("FTextureGroupContainer")
  ;
}