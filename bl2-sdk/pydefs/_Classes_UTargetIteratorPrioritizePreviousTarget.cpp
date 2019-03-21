#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizePreviousTarget()
{
    py::class_< UTargetIteratorPrioritizePreviousTarget,  UTI_Prioritize   >("UTargetIteratorPrioritizePreviousTarget")
        .def("StaticClass", &UTargetIteratorPrioritizePreviousTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}