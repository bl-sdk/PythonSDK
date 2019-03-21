#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecogVocabulary()
{
    class_< FRecogVocabulary >("FRecogVocabulary", no_init)
        .def_readwrite("WhoDictionary", &FRecogVocabulary::WhoDictionary)
        .def_readwrite("WhatDictionary", &FRecogVocabulary::WhatDictionary)
        .def_readwrite("WhereDictionary", &FRecogVocabulary::WhereDictionary)
        .def_readwrite("VocabName", &FRecogVocabulary::VocabName)
        .def_readwrite("VocabData", &FRecogVocabulary::VocabData)
        .def_readwrite("WorkingVocabData", &FRecogVocabulary::WorkingVocabData)
  ;
}