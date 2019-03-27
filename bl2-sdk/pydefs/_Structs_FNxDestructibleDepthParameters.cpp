#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNxDestructibleDepthParameters(py::module &m)
{
    py::class_< FNxDestructibleDepthParameters >(m, "FNxDestructibleDepthParameters")
  ;
}