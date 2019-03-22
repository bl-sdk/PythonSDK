#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAutoLadder(py::module &m)
{
    py::class_< AAutoLadder,  ALadder   >(m, "AAutoLadder")
          ;
}