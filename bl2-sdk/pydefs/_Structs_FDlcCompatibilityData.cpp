#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcCompatibilityData()
{
    py::class_< FDlcCompatibilityData >("FDlcCompatibilityData")
        .def_readwrite("A", &FDlcCompatibilityData::A)
        .def_readwrite("B", &FDlcCompatibilityData::B)
        .def_readwrite("C", &FDlcCompatibilityData::C)
        .def_readwrite("D", &FDlcCompatibilityData::D)
  ;
}