#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerStat()
{
    class_< FPlayerStat >("FPlayerStat", no_init)
        .def_readwrite("ViewId", &FPlayerStat::ViewId)
        .def_readwrite("PropertyId", &FPlayerStat::PropertyId)
        .def_readwrite("Data", &FPlayerStat::Data)
  ;
}