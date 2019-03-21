#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloat()
{
    py::class_< UDistributionFloat,  UComponent   >("UDistributionFloat")
        .def_readwrite("VfTable_FCurveEdInterface", &UDistributionFloat::VfTable_FCurveEdInterface)
        .def("StaticClass", &UDistributionFloat::StaticClass, py::return_value_policy::reference)
        .def("GetFloatValue", &UDistributionFloat::GetFloatValue)
        .staticmethod("StaticClass")
  ;
}