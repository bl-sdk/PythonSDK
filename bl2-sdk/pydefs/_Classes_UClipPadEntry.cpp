#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClipPadEntry()
{
    class_< UClipPadEntry, bases< UObject >  , boost::noncopyable>("UClipPadEntry", no_init)
        .def_readwrite("Title", &UClipPadEntry::Title)
        .def_readwrite("Text", &UClipPadEntry::Text)
        .def("StaticClass", &UClipPadEntry::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}