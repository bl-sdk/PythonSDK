#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorUniform(py::module &m)
{
    py::class_< UDistributionVectorUniform,  UDistributionVector   >(m, "UDistributionVectorUniform")
        .def_readwrite("Max", &UDistributionVectorUniform::Max)
        .def_readwrite("Min", &UDistributionVectorUniform::Min)
        .def_readwrite("LockedAxes", &UDistributionVectorUniform::LockedAxes)
          ;
}