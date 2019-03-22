#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_WithinTraversalDist(py::module &m)
{
    py::class_< UPath_WithinTraversalDist,  UPathConstraint   >(m, "UPath_WithinTraversalDist")
        .def_readwrite("MaxTraversalDist", &UPath_WithinTraversalDist::MaxTraversalDist)
        .def_readwrite("SoftStartPenalty", &UPath_WithinTraversalDist::SoftStartPenalty)
        .def("StaticClass", &UPath_WithinTraversalDist::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UPath_WithinTraversalDist::Recycle)
        .def("DontExceedMaxDist", &UPath_WithinTraversalDist::DontExceedMaxDist)
          ;
}