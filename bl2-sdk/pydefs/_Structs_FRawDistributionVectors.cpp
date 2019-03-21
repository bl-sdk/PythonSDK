#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawDistributionVector(py::object m)
{
    py::class_< FRawDistributionVector,  FRawDistribution   >(m, "FRawDistributionVector")
        .def_readwrite("Distribution", &FRawDistributionVector::Distribution)
  ;
}