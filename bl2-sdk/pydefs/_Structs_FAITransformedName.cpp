#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAITransformedName(py::object m)
{
    py::class_< FAITransformedName >(m, "FAITransformedName")
        .def_readwrite("Type", &FAITransformedName::Type)
        .def_readwrite("TransformedName", &FAITransformedName::TransformedName)
        .def_readwrite("TransformedKillStat", &FAITransformedName::TransformedKillStat)
  ;
}