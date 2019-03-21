#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorCheckRemoveTarget()
{
    py::class_< UTargetIteratorCheckRemoveTarget,  UTargetIterator   >("UTargetIteratorCheckRemoveTarget")
        .def("StaticClass", &UTargetIteratorCheckRemoveTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}