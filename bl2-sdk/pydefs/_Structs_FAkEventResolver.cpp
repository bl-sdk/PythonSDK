#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAkEventResolver()
{
    class_< FAkEventResolver >("FAkEventResolver", no_init)
        .def_readwrite("Interaction", &FAkEventResolver::Interaction)
        .def_readwrite("AkEvent", &FAkEventResolver::AkEvent)
  ;
}