#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetNotBeingShotAt()
{
    py::class_< UTargetIteratorPrioritizeTargetNotBeingShotAt,  UTI_Prioritize   >("UTargetIteratorPrioritizeTargetNotBeingShotAt")
        .def("StaticClass", &UTargetIteratorPrioritizeTargetNotBeingShotAt::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}