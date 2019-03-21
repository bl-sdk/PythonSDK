#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatConstant()
{
    py::class_< UDistributionFloatConstant,  UDistributionFloat   >("UDistributionFloatConstant")
        .def_readwrite("Constant", &UDistributionFloatConstant::Constant)
        .def("StaticClass", &UDistributionFloatConstant::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}