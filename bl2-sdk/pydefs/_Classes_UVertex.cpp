#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVertex(py::object m)
{
    py::class_< UVertex,  UObject   >(m, "UVertex")
        .def_readwrite("ParentLine", &UVertex::ParentLine)
        .def_readwrite("Position", &UVertex::Position)
        .def_readwrite("Material", &UVertex::Material)
        .def_readwrite("Material_Selected", &UVertex::Material_Selected)
        .def_readwrite("cColor", &UVertex::cColor)
        .def("StaticClass", &UVertex::StaticClass, py::return_value_policy::reference)
          ;
}