#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReferencePoint(py::module &m)
{
    py::class_< FReferencePoint >(m, "FReferencePoint")
        .def_readwrite("Type", &FReferencePoint::Type)
        .def_readwrite("Name", &FReferencePoint::Name)
  ;
}