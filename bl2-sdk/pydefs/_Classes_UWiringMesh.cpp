#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWiringMesh(py::object m)
{
    py::class_< UWiringMesh,  UStaticMesh   >(m, "UWiringMesh")
        .def_readonly("UnknownData00", &UWiringMesh::UnknownData00)
        .def("StaticClass", &UWiringMesh::StaticClass, py::return_value_policy::reference)
          ;
}