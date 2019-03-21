#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcCompatibilityDataEx()
{
    py::class_< FDlcCompatibilityDataEx,  FDlcCompatibilityData   >("FDlcCompatibilityDataEx")
  ;
}