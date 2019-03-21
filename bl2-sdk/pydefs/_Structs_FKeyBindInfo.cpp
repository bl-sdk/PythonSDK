#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKeyBindInfo()
{
    class_< FKeyBindInfo >("FKeyBindInfo", no_init)
        .def_readwrite("Tag", &FKeyBindInfo::Tag)
        .def_readwrite("ActionName", &FKeyBindInfo::ActionName)
        .def_readwrite("Caption", &FKeyBindInfo::Caption)
        .def_readwrite("CurrentKey", &FKeyBindInfo::CurrentKey)
        .def_readwrite("Object", &FKeyBindInfo::Object)
  ;
}