#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FThreadSafeCounter()
{
    class_< FThreadSafeCounter >("FThreadSafeCounter", no_init)
        .def_readwrite("Value", &FThreadSafeCounter::Value)
  ;
}