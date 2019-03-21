#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorCalculateDistance()
{
    py::class_< UTargetIteratorCalculateDistance,  UTargetIterator   >("UTargetIteratorCalculateDistance")
        .def("StaticClass", &UTargetIteratorCalculateDistance::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}