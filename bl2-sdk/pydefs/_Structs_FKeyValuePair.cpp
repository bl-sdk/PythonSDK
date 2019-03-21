#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKeyValuePair()
{
    class_< FKeyValuePair >("FKeyValuePair", no_init)
        .def_readwrite("Key", &FKeyValuePair::Key)
        .def_readwrite("Value", &FKeyValuePair::Value)
  ;
}