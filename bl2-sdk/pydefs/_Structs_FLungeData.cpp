#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLungeData()
{
    class_< FLungeData >("FLungeData", no_init)
        .def_readwrite("Target", &FLungeData::Target)
        .def_readwrite("Length", &FLungeData::Length)
        .def_readwrite("Start", &FLungeData::Start)
        .def_readwrite("SavedAccelRate", &FLungeData::SavedAccelRate)
  ;
}