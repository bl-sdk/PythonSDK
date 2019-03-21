#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributePresentationValueRemappingData()
{
    py::class_< FAttributePresentationValueRemappingData >("FAttributePresentationValueRemappingData")
        .def_readwrite("InputValueMn", &FAttributePresentationValueRemappingData::InputValueMn)
        .def_readwrite("InputValueMx", &FAttributePresentationValueRemappingData::InputValueMx)
        .def_readwrite("OutputValueMn", &FAttributePresentationValueRemappingData::OutputValueMn)
        .def_readwrite("OutputValueMx", &FAttributePresentationValueRemappingData::OutputValueMx)
  ;
}