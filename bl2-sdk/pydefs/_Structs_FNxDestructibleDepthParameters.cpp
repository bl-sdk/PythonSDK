#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNxDestructibleDepthParameters()
{
    py::class_< FNxDestructibleDepthParameters >("FNxDestructibleDepthParameters")
  ;
}