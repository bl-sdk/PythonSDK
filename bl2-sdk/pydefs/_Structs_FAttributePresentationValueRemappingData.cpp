#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributePresentationValueRemappingData(py::object m)
{
    py::class_< FAttributePresentationValueRemappingData >(m, "FAttributePresentationValueRemappingData")
        .def_readwrite("InputValueMn", &FAttributePresentationValueRemappingData::InputValueMn)
        .def_readwrite("InputValueMx", &FAttributePresentationValueRemappingData::InputValueMx)
        .def_readwrite("OutputValueMn", &FAttributePresentationValueRemappingData::OutputValueMn)
        .def_readwrite("OutputValueMx", &FAttributePresentationValueRemappingData::OutputValueMx)
  ;
}