#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVector()
{
    py::class_< UDistributionVector,  UComponent   >("UDistributionVector")
        .def_readwrite("VfTable_FCurveEdInterface", &UDistributionVector::VfTable_FCurveEdInterface)
        .def("StaticClass", &UDistributionVector::StaticClass, py::return_value_policy::reference)
        .def("GetVectorValue", &UDistributionVector::GetVectorValue)
        .staticmethod("StaticClass")
  ;
}