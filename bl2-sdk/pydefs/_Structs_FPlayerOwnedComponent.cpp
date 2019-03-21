#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerOwnedComponent(py::object m)
{
    py::class_< FPlayerOwnedComponent >(m, "FPlayerOwnedComponent")
        .def_readwrite("PlayerOwner", &FPlayerOwnedComponent::PlayerOwner)
        .def_readwrite("Component", &FPlayerOwnedComponent::Component)
  ;
}