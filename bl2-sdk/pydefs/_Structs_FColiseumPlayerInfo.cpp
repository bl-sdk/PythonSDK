#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColiseumPlayerInfo()
{
    class_< FColiseumPlayerInfo >("FColiseumPlayerInfo", no_init)
        .def_readwrite("WPC", &FColiseumPlayerInfo::WPC)
        .def_readwrite("Stats", &FColiseumPlayerInfo::Stats)
  ;
}