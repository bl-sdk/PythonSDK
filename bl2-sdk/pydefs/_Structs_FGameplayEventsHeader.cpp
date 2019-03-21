#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameplayEventsHeader(py::object m)
{
    py::class_< FGameplayEventsHeader >(m, "FGameplayEventsHeader")
        .def_readwrite("EngineVersion", &FGameplayEventsHeader::EngineVersion)
        .def_readwrite("StatsWriterVersion", &FGameplayEventsHeader::StatsWriterVersion)
        .def_readwrite("StreamOffset", &FGameplayEventsHeader::StreamOffset)
        .def_readwrite("AggregateOffset", &FGameplayEventsHeader::AggregateOffset)
        .def_readwrite("FooterOffset", &FGameplayEventsHeader::FooterOffset)
        .def_readwrite("TotalStreamSize", &FGameplayEventsHeader::TotalStreamSize)
        .def_readwrite("FileSize", &FGameplayEventsHeader::FileSize)
        .def_readwrite("FilterClass", &FGameplayEventsHeader::FilterClass)
        .def_readwrite("Flags", &FGameplayEventsHeader::Flags)
  ;
}