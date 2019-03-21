#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReferencePoint()
{
    py::class_< FReferencePoint >("FReferencePoint")
        .def_readwrite("Type", &FReferencePoint::Type)
        .def_readwrite("Name", &FReferencePoint::Name)
  ;
}