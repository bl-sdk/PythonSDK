#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UKnowledgeRecord()
{
    class_< UKnowledgeRecord, bases< UObject >  , boost::noncopyable>("UKnowledgeRecord", no_init)
        .def_readwrite("TheAIFactory", &UKnowledgeRecord::TheAIFactory)
        .def_readwrite("TheName", &UKnowledgeRecord::TheName)
        .def_readwrite("KCategory", &UKnowledgeRecord::KCategory)
        .def_readwrite("EvalType", &UKnowledgeRecord::EvalType)
        .def_readwrite("Active", &UKnowledgeRecord::Active)
        .def_readwrite("Marked", &UKnowledgeRecord::Marked)
        .def_readwrite("Frequency", &UKnowledgeRecord::Frequency)
        .def_readwrite("NextUpdateTime", &UKnowledgeRecord::NextUpdateTime)
        .def_readwrite("FlagIndex", &UKnowledgeRecord::FlagIndex)
        .def("StaticClass", &UKnowledgeRecord::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRecordEvalCallback", &UKnowledgeRecord::eventRecordEvalCallback)
        .staticmethod("StaticClass")
  ;
}