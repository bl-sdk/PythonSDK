#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDesignerAttributeDefaultValueData()
{
    py::class_< FDesignerAttributeDefaultValueData >("FDesignerAttributeDefaultValueData")
        .def_readwrite("DesignerAttribute", &FDesignerAttributeDefaultValueData::DesignerAttribute)
        .def_readwrite("BaseValue", &FDesignerAttributeDefaultValueData::BaseValue)
  ;
}