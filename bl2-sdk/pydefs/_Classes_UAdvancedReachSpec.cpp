#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAdvancedReachSpec(py::module &m)
{
    py::class_< UAdvancedReachSpec,  UReachSpec   >(m, "UAdvancedReachSpec")
          ;
}