#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_AwayFromTarget(py::module &m)
{
    py::class_< USearchDirection_AwayFromTarget,  USearchDirection   >(m, "USearchDirection_AwayFromTarget")
          ;
}