#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeHumanTargets(py::module &m)
{
    py::class_< UTargetIteratorPrioritizeHumanTargets,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizeHumanTargets")
          ;
}