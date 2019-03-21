#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTitleFile()
{
    class_< FTitleFile >("FTitleFile", no_init)
        .def_readwrite("Filename", &FTitleFile::Filename)
        .def_readwrite("AsyncState", &FTitleFile::AsyncState)
        .def_readwrite("Data", &FTitleFile::Data)
  ;
}