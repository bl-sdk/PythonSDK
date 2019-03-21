#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefab()
{
    py::class_< UPrefab,  UObject   >("UPrefab")
        .def_readwrite("PrefabVersion", &UPrefab::PrefabVersion)
        .def_readwrite("PrefabArchetypes", &UPrefab::PrefabArchetypes)
        .def_readwrite("RemovedArchetypes", &UPrefab::RemovedArchetypes)
        .def_readwrite("PrefabSequence", &UPrefab::PrefabSequence)
        .def("StaticClass", &UPrefab::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}