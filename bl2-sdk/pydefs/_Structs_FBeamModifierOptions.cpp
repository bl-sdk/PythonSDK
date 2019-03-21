#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBeamModifierOptions()
{
    py::class_< FBeamModifierOptions >("FBeamModifierOptions")
  ;
}