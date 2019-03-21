#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAIResourceRestriction()
{
    py::class_< FAIResourceRestriction >("FAIResourceRestriction")
        .def_readwrite("MaxUsers", &FAIResourceRestriction::MaxUsers)
        .def_readwrite("MinUsers", &FAIResourceRestriction::MinUsers)
        .def_readwrite("Resource", &FAIResourceRestriction::Resource)
  ;
}