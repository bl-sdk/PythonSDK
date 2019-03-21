#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKnowledgeRecordStruct(py::object m)
{
    py::class_< FKnowledgeRecordStruct >(m, "FKnowledgeRecordStruct")
        .def_readwrite("TheObj", &FKnowledgeRecordStruct::TheObj)
        .def_readwrite("InUse", &FKnowledgeRecordStruct::InUse)
        .def_readwrite("DeathTimeStamp", &FTimeStampedRecord::DeathTimeStamp)
  ;
}