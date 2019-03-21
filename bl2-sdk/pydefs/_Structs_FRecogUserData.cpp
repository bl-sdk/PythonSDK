#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecogUserData()
{
    class_< FRecogUserData >("FRecogUserData", no_init)
        .def_readwrite("ActiveVocabularies", &FRecogUserData::ActiveVocabularies)
        .def_readwrite("UserData", &FRecogUserData::UserData)
  ;
}