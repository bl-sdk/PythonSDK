#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGamePawn(py::module &m)
{
    py::class_< AGamePawn,  APawn   >(m, "AGamePawn")
          ;
}