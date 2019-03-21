#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTitleFileMcp(py::object m)
{
    py::class_< FTitleFileMcp,  FTitleFile   >(m, "FTitleFileMcp")
        .def_readwrite("HttpDownloader", &FTitleFileMcp::HttpDownloader)
  ;
}