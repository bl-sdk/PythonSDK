#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowNavDebug(py::module &m)
{
    py::class_< AWillowNavDebug,  AActor   >(m, "AWillowNavDebug")
          ;
}