#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpeechRecognizedWord()
{
    py::class_< FSpeechRecognizedWord >("FSpeechRecognizedWord")
        .def_readwrite("WordId", &FSpeechRecognizedWord::WordId)
        .def_readwrite("WordText", &FSpeechRecognizedWord::WordText)
        .def_readwrite("Confidence", &FSpeechRecognizedWord::Confidence)
  ;
}