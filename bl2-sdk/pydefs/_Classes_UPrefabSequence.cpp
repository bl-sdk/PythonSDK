#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrefabSequence(py::module &m)
{
    py::class_< UPrefabSequence,  USequence   >(m, "UPrefabSequence")
        .def_readwrite("OwnerPrefab", &UPrefabSequence::OwnerPrefab)
        .def("GetOwnerPrefab", &UPrefabSequence::GetOwnerPrefab, py::return_value_policy::reference)
        .def("SetOwnerPrefab", &UPrefabSequence::SetOwnerPrefab)
          ;
}