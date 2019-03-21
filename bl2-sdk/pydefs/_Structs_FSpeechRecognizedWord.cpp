#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpeechRecognizedWord()
{
    class_< FSpeechRecognizedWord >("FSpeechRecognizedWord", no_init)
        .def_readwrite("WordId", &FSpeechRecognizedWord::WordId)
        .def_readwrite("WordText", &FSpeechRecognizedWord::WordText)
        .def_readwrite("Confidence", &FSpeechRecognizedWord::Confidence)
  ;
}