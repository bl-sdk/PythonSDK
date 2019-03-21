#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSplitscreenData()
{
    class_< FSplitscreenData >("FSplitscreenData", no_init)
        .def_readwrite("PlayerData", &FSplitscreenData::PlayerData)
  ;
}