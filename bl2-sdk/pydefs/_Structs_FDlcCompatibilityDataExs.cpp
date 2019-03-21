#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcCompatibilityDataEx(py::object m)
{
    py::class_< FDlcCompatibilityDataEx,  FDlcCompatibilityData   >(m, "FDlcCompatibilityDataEx")
  ;
}