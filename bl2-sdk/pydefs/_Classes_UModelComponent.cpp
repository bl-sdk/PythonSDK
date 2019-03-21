#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UModelComponent(py::object m)
{
    py::class_< UModelComponent,  UPrimitiveComponent   >(m, "UModelComponent")
        .def_readwrite("Model", &UModelComponent::Model)
        .def_readwrite("ZoneIndex", &UModelComponent::ZoneIndex)
        .def_readwrite("ComponentIndex", &UModelComponent::ComponentIndex)
        .def_readwrite("Nodes", &UModelComponent::Nodes)
        .def_readwrite("Elements", &UModelComponent::Elements)
        .def("StaticClass", &UModelComponent::StaticClass, py::return_value_policy::reference)
          ;
}