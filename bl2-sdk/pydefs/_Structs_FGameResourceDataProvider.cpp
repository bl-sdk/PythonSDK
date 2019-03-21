#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameResourceDataProvider(py::object m)
{
    py::class_< FGameResourceDataProvider >(m, "FGameResourceDataProvider")
        .def_readwrite("ProviderTag", &FGameResourceDataProvider::ProviderTag)
        .def_readwrite("ProviderClassName", &FGameResourceDataProvider::ProviderClassName)
        .def_readwrite("ProviderClass", &FGameResourceDataProvider::ProviderClass)
  ;
}