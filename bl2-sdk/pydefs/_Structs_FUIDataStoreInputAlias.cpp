#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUIDataStoreInputAlias(py::module &m)
{
    py::class_< FUIDataStoreInputAlias >(m, "FUIDataStoreInputAlias")
        .def_readwrite("AliasName", &FUIDataStoreInputAlias::AliasName)
  ;
}