#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecognisableWord()
{
    class_< FRecognisableWord >("FRecognisableWord", no_init)
        .def_readwrite("Id", &FRecognisableWord::Id)
        .def_readwrite("ReferenceWord", &FRecognisableWord::ReferenceWord)
        .def_readwrite("PhoneticWord", &FRecognisableWord::PhoneticWord)
  ;
}