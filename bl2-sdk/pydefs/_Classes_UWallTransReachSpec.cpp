#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWallTransReachSpec(py::module &m)
{
    py::class_< UWallTransReachSpec,  UReachSpec   >(m, "UWallTransReachSpec")
          ;
}