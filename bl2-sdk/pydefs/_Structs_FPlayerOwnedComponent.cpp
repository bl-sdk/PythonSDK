#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerOwnedComponent()
{
    py::class_< FPlayerOwnedComponent >("FPlayerOwnedComponent")
        .def_readwrite("PlayerOwner", &FPlayerOwnedComponent::PlayerOwner)
        .def_readwrite("Component", &FPlayerOwnedComponent::Component)
  ;
}