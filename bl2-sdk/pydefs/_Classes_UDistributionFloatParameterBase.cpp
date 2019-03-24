#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatParameterBase(py::module &m)
{
    py::class_< UDistributionFloatParameterBase,  UDistributionFloat   >(m, "UDistributionFloatParameterBase")
		.def_static("StaticClass", &UDistributionFloatParameterBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParameterName", &UDistributionFloatParameterBase::ParameterName)
        .def_readwrite("MinInput", &UDistributionFloatParameterBase::MinInput)
        .def_readwrite("MaxInput", &UDistributionFloatParameterBase::MaxInput)
        .def_readwrite("MinOutput", &UDistributionFloatParameterBase::MinOutput)
        .def_readwrite("MaxOutput", &UDistributionFloatParameterBase::MaxOutput)
        .def_readwrite("ParamMode", &UDistributionFloatParameterBase::ParamMode)
        .def_readwrite("Constant", &UDistributionFloatConstant::Constant)
          ;
}