#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNxDestructibleParametersFlag()
{
    py::class_< FNxDestructibleParametersFlag >("FNxDestructibleParametersFlag")
  ;
}