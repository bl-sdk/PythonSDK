#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSeqEventLink()
{
    class_< FSeqEventLink >("FSeqEventLink", no_init)
        .def_readwrite("LinkedEvents", &FSeqEventLink::LinkedEvents)
        .def_readwrite("LinkDesc", &FSeqEventLink::LinkDesc)
  ;
}