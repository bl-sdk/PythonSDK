#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameplayEventMetaData(py::object m)
{
    py::class_< FGameplayEventMetaData >(m, "FGameplayEventMetaData")
        .def_readwrite("EventID", &FGameplayEventMetaData::EventID)
        .def_readwrite("EventName", &FGameplayEventMetaData::EventName)
        .def_readwrite("StatGroup", &FGameplayEventMetaData::StatGroup)
        .def_readwrite("EventDataType", &FGameplayEventMetaData::EventDataType)
  ;
}