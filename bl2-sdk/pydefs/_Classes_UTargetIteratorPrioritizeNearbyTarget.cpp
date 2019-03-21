#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeNearbyTarget()
{
    py::class_< UTargetIteratorPrioritizeNearbyTarget,  UTI_Prioritize   >("UTargetIteratorPrioritizeNearbyTarget")
        .def_readwrite("MaxDistance", &UTargetIteratorPrioritizeNearbyTarget::MaxDistance)
        .def("StaticClass", &UTargetIteratorPrioritizeNearbyTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}