#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIDataStoreInputAlias()
{
    py::class_< FUIDataStoreInputAlias >("FUIDataStoreInputAlias")
        .def_readwrite("AliasName", &FUIDataStoreInputAlias::AliasName)
        .def_readonly("PlatformInputKeys", &FUIDataStoreInputAlias::PlatformInputKeys)
  ;
}