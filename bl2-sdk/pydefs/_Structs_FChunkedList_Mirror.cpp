#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FChunkedList_Mirror()
{
    class_< FChunkedList_Mirror >("FChunkedList_Mirror", no_init)
        .def_readwrite("Members", &FChunkedList_Mirror::Members)
  ;
}