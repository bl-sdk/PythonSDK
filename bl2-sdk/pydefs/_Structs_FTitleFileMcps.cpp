#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTitleFileMcp()
{
    py::class_< FTitleFileMcp,  FTitleFile   >("FTitleFileMcp")
        .def_readwrite("HttpDownloader", &FTitleFileMcp::HttpDownloader)
  ;
}