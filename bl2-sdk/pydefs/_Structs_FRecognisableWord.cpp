#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecognisableWord()
{
    py::class_< FRecognisableWord >("FRecognisableWord")
        .def_readwrite("Id", &FRecognisableWord::Id)
        .def_readwrite("ReferenceWord", &FRecognisableWord::ReferenceWord)
        .def_readwrite("PhoneticWord", &FRecognisableWord::PhoneticWord)
  ;
}