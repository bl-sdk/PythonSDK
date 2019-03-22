#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefab(py::module &m)
{
    py::class_< UPrefab,  UObject   >(m, "UPrefab")
        .def_readwrite("PrefabVersion", &UPrefab::PrefabVersion)
        .def_readwrite("PrefabArchetypes", &UPrefab::PrefabArchetypes)
        .def_readwrite("RemovedArchetypes", &UPrefab::RemovedArchetypes)
        .def_readwrite("PrefabSequence", &UPrefab::PrefabSequence)
          ;
}