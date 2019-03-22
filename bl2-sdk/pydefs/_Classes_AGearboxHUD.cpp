#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGearboxHUD(py::module &m)
{
    py::class_< AGearboxHUD,  AHUD   >(m, "AGearboxHUD")
          ;
}