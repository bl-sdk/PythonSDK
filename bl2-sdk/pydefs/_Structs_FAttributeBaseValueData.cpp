#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeBaseValueData()
{
    py::class_< FAttributeBaseValueData >("FAttributeBaseValueData")
        .def_readwrite("Attribute", &FAttributeBaseValueData::Attribute)
        .def_readwrite("BaseValue", &FAttributeBaseValueData::BaseValue)
  ;
}