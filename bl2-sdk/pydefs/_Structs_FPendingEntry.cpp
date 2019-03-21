#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingEntry()
{
    class_< FPendingEntry >("FPendingEntry", no_init)
        .def_readwrite("RemoteId", &FPendingEntry::RemoteId)
        .def_readwrite("CallbackFunc", &FPendingEntry::CallbackFunc)
        .def_readwrite("UserData", &FPendingEntry::UserData)
  ;
}