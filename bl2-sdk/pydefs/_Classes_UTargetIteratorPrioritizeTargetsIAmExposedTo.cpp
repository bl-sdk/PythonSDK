#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetsIAmExposedTo()
{
    py::class_< UTargetIteratorPrioritizeTargetsIAmExposedTo,  UTargetIterator   >("UTargetIteratorPrioritizeTargetsIAmExposedTo")
        .def("StaticClass", &UTargetIteratorPrioritizeTargetsIAmExposedTo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}