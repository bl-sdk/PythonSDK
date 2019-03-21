#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKnowledgeRecordStruct()
{
    class_< FKnowledgeRecordStruct >("FKnowledgeRecordStruct", no_init)
        .def_readwrite("TheObj", &FKnowledgeRecordStruct::TheObj)
        .def_readwrite("InUse", &FKnowledgeRecordStruct::InUse)
        .def_readwrite("DeathTimeStamp", &FTimeStampedRecord::DeathTimeStamp)
  ;
}