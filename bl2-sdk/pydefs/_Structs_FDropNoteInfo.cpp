#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDropNoteInfo()
{
    class_< FDropNoteInfo >("FDropNoteInfo", no_init)
        .def_readwrite("Location", &FDropNoteInfo::Location)
        .def_readwrite("Rotation", &FDropNoteInfo::Rotation)
        .def_readwrite("Comment", &FDropNoteInfo::Comment)
  ;
}