#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatConstantCurve(py::object m)
{
    py::class_< UDistributionFloatConstantCurve,  UDistributionFloat   >(m, "UDistributionFloatConstantCurve")
        .def_readwrite("ConstantCurve", &UDistributionFloatConstantCurve::ConstantCurve)
        .def("StaticClass", &UDistributionFloatConstantCurve::StaticClass, py::return_value_policy::reference)
          ;
}