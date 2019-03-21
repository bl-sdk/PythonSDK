#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatConstantCurve()
{
    py::class_< UDistributionFloatConstantCurve,  UDistributionFloat   >("UDistributionFloatConstantCurve")
        .def_readwrite("ConstantCurve", &UDistributionFloatConstantCurve::ConstantCurve)
        .def("StaticClass", &UDistributionFloatConstantCurve::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}