#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDestructionParameters(py::module &m)
{
    py::class_< FDestructionParameters >(m, "FDestructionParameters")
  ;
}