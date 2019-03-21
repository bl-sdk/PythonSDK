#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniform(py::object m)
{
    py::class_< UDistributionVectorUniform,  UDistributionVector   >(m, "UDistributionVectorUniform")
        .def_readwrite("Max", &UDistributionVectorUniform::Max)
        .def_readwrite("Min", &UDistributionVectorUniform::Min)
        .def_readwrite("LockedAxes", &UDistributionVectorUniform::LockedAxes)
        .def_readonly("MirrorFlags", &UDistributionVectorUniform::MirrorFlags)
        .def("StaticClass", &UDistributionVectorUniform::StaticClass, py::return_value_policy::reference)
          ;
}