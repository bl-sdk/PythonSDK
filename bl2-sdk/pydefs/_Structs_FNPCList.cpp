#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNPCList()
{
    class_< FNPCList >("FNPCList", no_init)
        .def_readwrite("Mind", &FNPCList::Mind)
        .def_readwrite("LastPathTime", &FNPCList::LastPathTime)
        .def_readwrite("PathRequestTime", &FNPCList::PathRequestTime)
        .def_readwrite("Score", &FNPCList::Score)
  ;
}