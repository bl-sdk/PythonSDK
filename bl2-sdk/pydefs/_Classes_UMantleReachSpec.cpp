#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMantleReachSpec(py::module &m)
{
    py::class_< UMantleReachSpec,  UForcedReachSpec   >(m, "UMantleReachSpec")
          ;
}