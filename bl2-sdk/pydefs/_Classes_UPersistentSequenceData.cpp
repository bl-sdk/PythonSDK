#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPersistentSequenceData()
{
    py::class_< UPersistentSequenceData,  UObject   >("UPersistentSequenceData")
        .def_readwrite("LevelPackageName", &UPersistentSequenceData::LevelPackageName)
        .def_readwrite("SequenceName", &UPersistentSequenceData::SequenceName)
        .def_readonly("UnknownData00", &UPersistentSequenceData::UnknownData00)
        .def("StaticClass", &UPersistentSequenceData::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}