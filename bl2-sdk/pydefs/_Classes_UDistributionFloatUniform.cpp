#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatUniform(py::module &m)
{
    py::class_< UDistributionFloatUniform,  UDistributionFloat   >(m, "UDistributionFloatUniform")
        .def_readwrite("Min", &UDistributionFloatUniform::Min)
        .def_readwrite("Max", &UDistributionFloatUniform::Max)
        .def("StaticClass", &UDistributionFloatUniform::StaticClass, py::return_value_policy::reference)
          ;
}