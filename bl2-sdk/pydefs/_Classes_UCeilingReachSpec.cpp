#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCeilingReachSpec(py::module &m)
{
    py::class_< UCeilingReachSpec,  UReachSpec   >(m, "UCeilingReachSpec")
          ;
}