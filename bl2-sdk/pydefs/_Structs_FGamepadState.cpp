#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGamepadState()
{
    py::class_< FGamepadState >("FGamepadState")
  ;
}