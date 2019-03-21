#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSimpleAnimData()
{
    class_< FSimpleAnimData >("FSimpleAnimData", no_init)
        .def_readwrite("AnimName", &FSimpleAnimData::AnimName)
        .def_readwrite("Tree", &FSimpleAnimData::Tree)
        .def_readwrite("Nodes", &FSimpleAnimData::Nodes)
  ;
}