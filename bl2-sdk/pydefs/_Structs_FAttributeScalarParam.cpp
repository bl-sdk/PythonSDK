#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeScalarParam()
{
    py::class_< FAttributeScalarParam >("FAttributeScalarParam")
        .def_readwrite("ParamName", &FAttributeScalarParam::ParamName)
        .def_readwrite("Input", &FAttributeScalarParam::Input)
        .def_readwrite("MinInput", &FAttributeScalarParam::MinInput)
        .def_readwrite("MaxInput", &FAttributeScalarParam::MaxInput)
        .def_readwrite("MinOutput", &FAttributeScalarParam::MinOutput)
        .def_readwrite("MaxOutput", &FAttributeScalarParam::MaxOutput)
        .def_readwrite("ScalarParamOperand", &FAttributeScalarParam::ScalarParamOperand)
        .def_readwrite("CurrentValue", &FAttributeScalarParam::CurrentValue)
  ;
}