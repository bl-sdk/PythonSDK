#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIniLocFileEntry()
{
    class_< FIniLocFileEntry >("FIniLocFileEntry", no_init)
        .def_readwrite("Filename", &FIniLocFileEntry::Filename)
        .def_readwrite("ReadState", &FIniLocFileEntry::ReadState)
  ;
}