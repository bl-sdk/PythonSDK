#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerDataStoreGroup(py::object m)
{
    py::class_< FPlayerDataStoreGroup >(m, "FPlayerDataStoreGroup")
        .def_readwrite("PlayerOwner", &FPlayerDataStoreGroup::PlayerOwner)
        .def_readwrite("DataStores", &FPlayerDataStoreGroup::DataStores)
  ;
}