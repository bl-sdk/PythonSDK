#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowScout(py::module &m)
{
    py::class_< AWillowScout,  AScout   >(m, "AWillowScout")
          ;
}