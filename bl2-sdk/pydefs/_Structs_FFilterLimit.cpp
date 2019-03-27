#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFilterLimit(py::module &m)
{
    py::class_< FFilterLimit >(m, "FFilterLimit")
        .def_readwrite("Base", &FFilterLimit::Base)
        .def_readwrite("NoiseScale", &FFilterLimit::NoiseScale)
        .def_readwrite("NoiseAmount", &FFilterLimit::NoiseAmount)
  ;
}