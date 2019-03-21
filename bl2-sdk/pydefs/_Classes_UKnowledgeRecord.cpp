#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKnowledgeRecord(py::object m)
{
    py::class_< UKnowledgeRecord,  UObject   >(m, "UKnowledgeRecord")
        .def_readwrite("TheAIFactory", &UKnowledgeRecord::TheAIFactory)
        .def_readwrite("TheName", &UKnowledgeRecord::TheName)
        .def_readwrite("KCategory", &UKnowledgeRecord::KCategory)
        .def_readwrite("EvalType", &UKnowledgeRecord::EvalType)
        .def_readwrite("Active", &UKnowledgeRecord::Active)
        .def_readwrite("Marked", &UKnowledgeRecord::Marked)
        .def_readwrite("Frequency", &UKnowledgeRecord::Frequency)
        .def_readwrite("NextUpdateTime", &UKnowledgeRecord::NextUpdateTime)
        .def_readwrite("FlagIndex", &UKnowledgeRecord::FlagIndex)
        .def("StaticClass", &UKnowledgeRecord::StaticClass, py::return_value_policy::reference)
        .def("eventRecordEvalCallback", &UKnowledgeRecord::eventRecordEvalCallback)
          ;
}