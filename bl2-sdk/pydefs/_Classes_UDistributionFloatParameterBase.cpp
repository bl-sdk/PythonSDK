#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatParameterBase()
{
    py::class_< UDistributionFloatParameterBase,  UDistributionFloat   >("UDistributionFloatParameterBase")
        .def_readwrite("ParameterName", &UDistributionFloatParameterBase::ParameterName)
        .def_readwrite("MinInput", &UDistributionFloatParameterBase::MinInput)
        .def_readwrite("MaxInput", &UDistributionFloatParameterBase::MaxInput)
        .def_readwrite("MinOutput", &UDistributionFloatParameterBase::MinOutput)
        .def_readwrite("MaxOutput", &UDistributionFloatParameterBase::MaxOutput)
        .def_readwrite("ParamMode", &UDistributionFloatParameterBase::ParamMode)
        .def_readwrite("Constant", &UDistributionFloatConstant::Constant)
        .def("StaticClass", &UDistributionFloatParameterBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}