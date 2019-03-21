#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavigationMeshBase(py::object m)
{
    py::class_< UNavigationMeshBase,  UObject   >(m, "UNavigationMeshBase")
        .def_readonly("UnknownData00", &UNavigationMeshBase::UnknownData00)
        .def("StaticClass", &UNavigationMeshBase::StaticClass, py::return_value_policy::reference)
          ;
}