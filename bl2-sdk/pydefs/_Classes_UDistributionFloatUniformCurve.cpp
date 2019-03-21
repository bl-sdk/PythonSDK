#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatUniformCurve()
{
    py::class_< UDistributionFloatUniformCurve,  UDistributionFloat   >("UDistributionFloatUniformCurve")
        .def_readwrite("ConstantCurve", &UDistributionFloatUniformCurve::ConstantCurve)
        .def("StaticClass", &UDistributionFloatUniformCurve::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}