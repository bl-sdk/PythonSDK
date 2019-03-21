#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefabSequence()
{
    py::class_< UPrefabSequence,  USequence   >("UPrefabSequence")
        .def_readwrite("OwnerPrefab", &UPrefabSequence::OwnerPrefab)
        .def("StaticClass", &UPrefabSequence::StaticClass, py::return_value_policy::reference)
        .def("GetOwnerPrefab", &UPrefabSequence::GetOwnerPrefab, py::return_value_policy::reference)
        .def("SetOwnerPrefab", &UPrefabSequence::SetOwnerPrefab)
        .staticmethod("StaticClass")
  ;
}