#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomizationSizeMapping(py::object m)
{
    py::class_< FCustomizationSizeMapping >(m, "FCustomizationSizeMapping")
        .def_readwrite("ProductID", &FCustomizationSizeMapping::ProductID)
        .def_readwrite("NumCustomizations", &FCustomizationSizeMapping::NumCustomizations)
  ;
}