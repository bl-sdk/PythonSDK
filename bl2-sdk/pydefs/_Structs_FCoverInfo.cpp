#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoverInfo()
{
    class_< FCoverInfo >("FCoverInfo", no_init)
        .def_readwrite("Link", &FCoverInfo::Link)
        .def_readwrite("SlotIdx", &FCoverInfo::SlotIdx)
  ;
}