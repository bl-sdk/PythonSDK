#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecogVocabulary(py::object m)
{
    py::class_< FRecogVocabulary >(m, "FRecogVocabulary")
        .def_readwrite("WhoDictionary", &FRecogVocabulary::WhoDictionary)
        .def_readwrite("WhatDictionary", &FRecogVocabulary::WhatDictionary)
        .def_readwrite("WhereDictionary", &FRecogVocabulary::WhereDictionary)
        .def_readwrite("VocabName", &FRecogVocabulary::VocabName)
        .def_readwrite("VocabData", &FRecogVocabulary::VocabData)
        .def_readwrite("WorkingVocabData", &FRecogVocabulary::WorkingVocabData)
  ;
}