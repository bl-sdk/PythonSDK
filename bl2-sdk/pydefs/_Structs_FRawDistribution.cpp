#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawDistribution(py::object m)
{
    py::class_< FRawDistribution >(m, "FRawDistribution")
        .def_readwrite("Type", &FRawDistribution::Type)
        .def_readwrite("Op", &FRawDistribution::Op)
        .def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
        .def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
        .def_readwrite("LookupTable", &FRawDistribution::LookupTable)
        .def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
        .def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
  ;
}