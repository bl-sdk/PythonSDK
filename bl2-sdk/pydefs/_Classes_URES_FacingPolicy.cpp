#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_FacingPolicy(py::module &m)
{
    py::class_< URES_FacingPolicy,  UObject   >(m, "URES_FacingPolicy")
          ;
}