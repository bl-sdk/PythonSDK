#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStaticMeshLODElement(py::object m)
{
    py::class_< FStaticMeshLODElement >(m, "FStaticMeshLODElement")
        .def_readwrite("Material", &FStaticMeshLODElement::Material)
        .def_readonly("UnknownData00", &FStaticMeshLODElement::UnknownData00)
  ;
}