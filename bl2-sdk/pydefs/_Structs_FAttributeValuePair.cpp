#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeValuePair(py::module &m)
{
    py::class_< FAttributeValuePair >(m, "FAttributeValuePair")
        .def_readwrite("Key", &FAttributeValuePair::Key)
        .def_readwrite("Value", &FAttributeValuePair::Value)
  ;
}