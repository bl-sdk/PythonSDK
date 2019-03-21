#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNewsCacheEntry()
{
    class_< FNewsCacheEntry >("FNewsCacheEntry", no_init)
        .def_readwrite("NewsUrl", &FNewsCacheEntry::NewsUrl)
        .def_readwrite("ReadState", &FNewsCacheEntry::ReadState)
        .def_readwrite("NewsType", &FNewsCacheEntry::NewsType)
        .def_readwrite("NewsItem", &FNewsCacheEntry::NewsItem)
        .def_readwrite("TimeOut", &FNewsCacheEntry::TimeOut)
        .def_readwrite("HttpDownloader", &FNewsCacheEntry::HttpDownloader)
  ;
}