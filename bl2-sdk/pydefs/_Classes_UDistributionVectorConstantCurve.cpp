#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorConstantCurve(py::object m)
{
    py::class_< UDistributionVectorConstantCurve,  UDistributionVector   >(m, "UDistributionVectorConstantCurve")
        .def_readwrite("ConstantCurve", &UDistributionVectorConstantCurve::ConstantCurve)
        .def_readwrite("LockedAxes", &UDistributionVectorConstantCurve::LockedAxes)
        .def("StaticClass", &UDistributionVectorConstantCurve::StaticClass, py::return_value_policy::reference)
          ;
}