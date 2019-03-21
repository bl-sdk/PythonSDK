#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOrbitOptions()
{
    py::class_< FOrbitOptions >("FOrbitOptions")
  ;
}