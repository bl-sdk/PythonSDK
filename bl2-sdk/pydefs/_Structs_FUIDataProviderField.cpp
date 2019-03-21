#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIDataProviderField()
{
    py::class_< FUIDataProviderField >("FUIDataProviderField")
        .def_readwrite("FieldTag", &FUIDataProviderField::FieldTag)
        .def_readwrite("FieldType", &FUIDataProviderField::FieldType)
        .def_readwrite("FieldProviders", &FUIDataProviderField::FieldProviders)
  ;
}