#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRawDistribution()
{
    class_< FRawDistribution >("FRawDistribution", no_init)
        .def_readwrite("Type", &FRawDistribution::Type)
        .def_readwrite("Op", &FRawDistribution::Op)
        .def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
        .def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
        .def_readwrite("LookupTable", &FRawDistribution::LookupTable)
        .def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
        .def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
  ;
}