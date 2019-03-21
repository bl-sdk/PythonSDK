#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOrbitOptions(py::object m)
{
    py::class_< FOrbitOptions >(m, "FOrbitOptions")
  ;
}