#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniformCurve()
{
    py::class_< UDistributionVectorUniformCurve,  UDistributionVector   >("UDistributionVectorUniformCurve")
        .def_readwrite("ConstantCurve", &UDistributionVectorUniformCurve::ConstantCurve)
        .def_readonly("LockedAxes", &UDistributionVectorUniformCurve::LockedAxes)
        .def_readonly("MirrorFlags", &UDistributionVectorUniformCurve::MirrorFlags)
        .def("StaticClass", &UDistributionVectorUniformCurve::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}