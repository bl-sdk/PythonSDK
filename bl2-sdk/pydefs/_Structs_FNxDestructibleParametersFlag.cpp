#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNxDestructibleParametersFlag(py::object m)
{
    py::class_< FNxDestructibleParametersFlag >(m, "FNxDestructibleParametersFlag")
  ;
}