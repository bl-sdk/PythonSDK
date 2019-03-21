#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCriticalTextMessageArray()
{
    class_< FCriticalTextMessageArray >("FCriticalTextMessageArray", no_init)
        .def_readwrite("MessageArray", &FCriticalTextMessageArray::MessageArray)
  ;
}