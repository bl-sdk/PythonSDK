#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamModifierOptions(py::object m)
{
    py::class_< FBeamModifierOptions >(m, "FBeamModifierOptions")
  ;
}