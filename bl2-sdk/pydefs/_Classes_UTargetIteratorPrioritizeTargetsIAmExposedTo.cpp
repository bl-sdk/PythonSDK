#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorPrioritizeTargetsIAmExposedTo(py::object m)
{
    py::class_< UTargetIteratorPrioritizeTargetsIAmExposedTo,  UTargetIterator   >(m, "UTargetIteratorPrioritizeTargetsIAmExposedTo")
        .def("StaticClass", &UTargetIteratorPrioritizeTargetsIAmExposedTo::StaticClass, py::return_value_policy::reference)
          ;
}