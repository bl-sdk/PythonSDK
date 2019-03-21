#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeHumanTargets(py::object m)
{
    py::class_< UTargetIteratorPrioritizeHumanTargets,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizeHumanTargets")
        .def("StaticClass", &UTargetIteratorPrioritizeHumanTargets::StaticClass, py::return_value_policy::reference)
          ;
}