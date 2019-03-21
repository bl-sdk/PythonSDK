#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActorReference(py::object m)
{
    py::class_< FActorReference >(m, "FActorReference")
        .def_readwrite("Actor", &FActorReference::Actor)
        .def_readwrite("Guid", &FActorReference::Guid)
  ;
}