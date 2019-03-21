#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMenuItemCallback()
{
    class_< FMenuItemCallback >("FMenuItemCallback", no_init)
        .def_readwrite("Tag", &FMenuItemCallback::Tag)
        .def_readwrite("OnClicked", &FMenuItemCallback::OnClicked)
  ;
}