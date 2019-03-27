#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeCategory(py::module &m)
{
    py::class_< FAttributeCategory >(m, "FAttributeCategory")
        .def_readwrite("Category", &FAttributeCategory::Category)
        .def_readwrite("Attributes", &FAttributeCategory::Attributes)
  ;
}