#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServiceParameterResult()
{
    class_< FServiceParameterResult >("FServiceParameterResult", no_init)
        .def_readwrite("Key", &FServiceParameterResult::Key)
        .def_readwrite("Value", &FServiceParameterResult::Value)
  ;
}