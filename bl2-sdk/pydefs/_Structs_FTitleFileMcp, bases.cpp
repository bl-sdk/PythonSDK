#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTitleFileMcp()
{
    class_< FTitleFileMcp, bases< FTitleFile >  >("FTitleFileMcp", no_init)
        .def_readwrite("HttpDownloader", &FTitleFileMcp::HttpDownloader)
  ;
}