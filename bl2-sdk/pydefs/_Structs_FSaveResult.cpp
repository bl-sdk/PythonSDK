#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSaveResult()
{
    class_< FSaveResult >("FSaveResult", no_init)
        .def_readwrite("charID", &FSaveResult::charID)
        .def_readwrite("Data", &FSaveResult::Data)
  ;
}