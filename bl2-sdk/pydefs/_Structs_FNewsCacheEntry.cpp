#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNewsCacheEntry(py::object m)
{
    py::class_< FNewsCacheEntry >(m, "FNewsCacheEntry")
        .def_readwrite("NewsUrl", &FNewsCacheEntry::NewsUrl)
        .def_readwrite("ReadState", &FNewsCacheEntry::ReadState)
        .def_readwrite("NewsType", &FNewsCacheEntry::NewsType)
        .def_readwrite("NewsItem", &FNewsCacheEntry::NewsItem)
        .def_readwrite("TimeOut", &FNewsCacheEntry::TimeOut)
        .def_readwrite("HttpDownloader", &FNewsCacheEntry::HttpDownloader)
  ;
}