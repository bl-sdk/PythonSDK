#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDestructionParameters(py::object m)
{
    py::class_< FDestructionParameters >(m, "FDestructionParameters")
  ;
}