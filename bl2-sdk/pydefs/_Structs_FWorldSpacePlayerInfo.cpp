#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWorldSpacePlayerInfo()
{
    class_< FWorldSpacePlayerInfo >("FWorldSpacePlayerInfo", no_init)
        .def_readwrite("WPRI", &FWorldSpacePlayerInfo::WPRI)
        .def_readwrite("WPP", &FWorldSpacePlayerInfo::WPP)
  ;
}