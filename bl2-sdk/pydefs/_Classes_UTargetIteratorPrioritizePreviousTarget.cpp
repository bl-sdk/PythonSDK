#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizePreviousTarget(py::object m)
{
    py::class_< UTargetIteratorPrioritizePreviousTarget,  UTI_Prioritize   >(m, "UTargetIteratorPrioritizePreviousTarget")
        .def("StaticClass", &UTargetIteratorPrioritizePreviousTarget::StaticClass, py::return_value_policy::reference)
          ;
}