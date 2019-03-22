#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeExposedTargets(py::module &m)
{
    py::class_< UTargetIteratorPrioritizeExposedTargets,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizeExposedTargets")
        .def("StaticClass", &UTargetIteratorPrioritizeExposedTargets::StaticClass, py::return_value_policy::reference)
          ;
}