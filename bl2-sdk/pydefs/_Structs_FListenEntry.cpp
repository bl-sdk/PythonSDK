#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FListenEntry()
{
    class_< FListenEntry >("FListenEntry", no_init)
        .def_readwrite("RemoteId", &FListenEntry::RemoteId)
        .def_readwrite("Status", &FListenEntry::Status)
        .def_readwrite("ActiveTimestamp", &FListenEntry::ActiveTimestamp)
  ;
}