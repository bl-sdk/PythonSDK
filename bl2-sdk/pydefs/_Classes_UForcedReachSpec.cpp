#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UForcedReachSpec(py::module &m)
{
    py::class_< UForcedReachSpec,  UReachSpec   >(m, "UForcedReachSpec")
          ;
}