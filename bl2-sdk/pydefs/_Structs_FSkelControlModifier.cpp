#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkelControlModifier()
{
    class_< FSkelControlModifier >("FSkelControlModifier", no_init)
        .def_readwrite("SkelControlName", &FSkelControlModifier::SkelControlName)
        .def_readwrite("Modifiers", &FSkelControlModifier::Modifiers)
  ;
}