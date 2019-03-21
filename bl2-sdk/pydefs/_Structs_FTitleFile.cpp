#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTitleFile()
{
    py::class_< FTitleFile >("FTitleFile")
        .def_readwrite("Filename", &FTitleFile::Filename)
        .def_readwrite("AsyncState", &FTitleFile::AsyncState)
        .def_readwrite("Data", &FTitleFile::Data)
  ;
}