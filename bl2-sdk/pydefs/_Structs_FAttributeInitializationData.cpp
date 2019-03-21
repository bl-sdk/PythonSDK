#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeInitializationData(py::object m)
{
    py::class_< FAttributeInitializationData >(m, "FAttributeInitializationData")
        .def_readwrite("BaseValueConstant", &FAttributeInitializationData::BaseValueConstant)
        .def_readwrite("BaseValueAttribute", &FAttributeInitializationData::BaseValueAttribute)
        .def_readwrite("InitializationDefinition", &FAttributeInitializationData::InitializationDefinition)
        .def_readwrite("BaseValueScaleConstant", &FAttributeInitializationData::BaseValueScaleConstant)
  ;
}