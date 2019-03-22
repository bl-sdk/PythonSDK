#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_LeapAtTarget(py::module &m)
{
    py::class_< UBehavior_LeapAtTarget,  UBehaviorBase   >(m, "UBehavior_LeapAtTarget")
          ;
}