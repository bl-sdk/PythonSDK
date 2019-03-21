#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActorReference()
{
    py::class_< FActorReference >("FActorReference")
        .def_readwrite("Actor", &FActorReference::Actor)
        .def_readwrite("Guid", &FActorReference::Guid)
  ;
}