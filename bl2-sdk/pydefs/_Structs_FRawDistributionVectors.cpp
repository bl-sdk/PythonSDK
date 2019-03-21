#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawDistributionVector()
{
    py::class_< FRawDistributionVector,  FRawDistribution   >("FRawDistributionVector")
        .def_readwrite("Distribution", &FRawDistributionVector::Distribution)
  ;
}