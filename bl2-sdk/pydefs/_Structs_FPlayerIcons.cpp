#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerIcon()
{
    class_< FPlayerIcon, bases< FWorldSpaceIcon >  >("FPlayerIcon", no_init)
        .def_readwrite("TextClip", &FPlayerIcon::TextClip)
        .def_readwrite("StateClip", &FPlayerIcon::StateClip)
  ;
}