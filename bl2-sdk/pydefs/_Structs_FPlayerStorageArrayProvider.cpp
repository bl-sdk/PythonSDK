#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerStorageArrayProvider(py::object m)
{
    py::class_< FPlayerStorageArrayProvider >(m, "FPlayerStorageArrayProvider")
        .def_readwrite("PlayerStorageId", &FPlayerStorageArrayProvider::PlayerStorageId)
        .def_readwrite("PlayerStorageName", &FPlayerStorageArrayProvider::PlayerStorageName)
        .def_readwrite("Provider", &FPlayerStorageArrayProvider::Provider)
  ;
}