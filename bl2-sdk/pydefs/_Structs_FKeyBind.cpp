#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKeyBind()
{
    class_< FKeyBind >("FKeyBind", no_init)
        .def_readwrite("Name", &FKeyBind::Name)
        .def_readwrite("Command", &FKeyBind::Command)
  ;
}