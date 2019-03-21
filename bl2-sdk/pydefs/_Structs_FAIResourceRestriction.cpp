#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIResourceRestriction(py::object m)
{
    py::class_< FAIResourceRestriction >(m, "FAIResourceRestriction")
        .def_readwrite("MaxUsers", &FAIResourceRestriction::MaxUsers)
        .def_readwrite("MinUsers", &FAIResourceRestriction::MinUsers)
        .def_readwrite("Resource", &FAIResourceRestriction::Resource)
  ;
}