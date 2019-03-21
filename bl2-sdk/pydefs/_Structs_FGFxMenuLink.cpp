#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGFxMenuLink()
{
    class_< FGFxMenuLink >("FGFxMenuLink", no_init)
        .def_readwrite("MenuName", &FGFxMenuLink::MenuName)
        .def_readwrite("Definition", &FGFxMenuLink::Definition)
  ;
}