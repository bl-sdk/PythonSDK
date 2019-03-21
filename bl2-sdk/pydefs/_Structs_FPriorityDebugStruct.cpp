#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPriorityDebugStruct()
{
    class_< FPriorityDebugStruct >("FPriorityDebugStruct", no_init)
        .def_readwrite("IteratorName", &FPriorityDebugStruct::IteratorName)
        .def_readwrite("ShortName", &FPriorityDebugStruct::ShortName)
        .def_readwrite("PriorityValue", &FPriorityDebugStruct::PriorityValue)
  ;
}