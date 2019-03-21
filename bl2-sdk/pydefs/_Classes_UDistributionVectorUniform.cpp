#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniform()
{
    py::class_< UDistributionVectorUniform,  UDistributionVector   >("UDistributionVectorUniform")
        .def_readwrite("Max", &UDistributionVectorUniform::Max)
        .def_readwrite("Min", &UDistributionVectorUniform::Min)
        .def_readwrite("LockedAxes", &UDistributionVectorUniform::LockedAxes)
        .def_readonly("MirrorFlags", &UDistributionVectorUniform::MirrorFlags)
        .def("StaticClass", &UDistributionVectorUniform::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}