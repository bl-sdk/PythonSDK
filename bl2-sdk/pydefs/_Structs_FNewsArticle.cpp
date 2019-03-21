#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNewsArticle()
{
    py::class_< FNewsArticle >("FNewsArticle")
        .def_readwrite("Header", &FNewsArticle::Header)
        .def_readwrite("Body", &FNewsArticle::Body)
  ;
}