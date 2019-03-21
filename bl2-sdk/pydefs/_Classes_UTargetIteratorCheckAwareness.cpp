#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorCheckAwareness()
{
    py::class_< UTargetIteratorCheckAwareness,  UTargetIterator   >("UTargetIteratorCheckAwareness")
        .def("StaticClass", &UTargetIteratorCheckAwareness::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}