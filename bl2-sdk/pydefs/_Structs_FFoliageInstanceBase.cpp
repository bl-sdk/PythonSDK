#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFoliageInstanceBase(py::module &m)
{
    py::class_< FFoliageInstanceBase >(m, "FFoliageInstanceBase")
        .def_readwrite("Location", &FFoliageInstanceBase::Location)
        .def_readwrite("XAxis", &FFoliageInstanceBase::XAxis)
        .def_readwrite("YAxis", &FFoliageInstanceBase::YAxis)
        .def_readwrite("ZAxis", &FFoliageInstanceBase::ZAxis)
        .def_readwrite("DistanceFactorSquared", &FFoliageInstanceBase::DistanceFactorSquared)
  ;
}