#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIDataProviderField(py::module &m)
{
    py::class_< FUIDataProviderField >(m, "FUIDataProviderField")
        .def_readwrite("FieldTag", &FUIDataProviderField::FieldTag)
        .def_readwrite("FieldType", &FUIDataProviderField::FieldType)
        .def_readwrite("FieldProviders", &FUIDataProviderField::FieldProviders)
  ;
}