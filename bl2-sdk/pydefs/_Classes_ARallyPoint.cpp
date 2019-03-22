#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARallyPoint(py::module &m)
{
    py::class_< ARallyPoint,  AActor   >(m, "ARallyPoint")
          ;
}