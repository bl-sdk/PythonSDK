#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeExposedTargets()
{
    py::class_< UTargetIteratorPrioritizeExposedTargets,  UTI_Prioritize   >("UTargetIteratorPrioritizeExposedTargets")
        .def("StaticClass", &UTargetIteratorPrioritizeExposedTargets::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}