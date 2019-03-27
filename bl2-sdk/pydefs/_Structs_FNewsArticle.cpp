#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNewsArticle(py::module &m)
{
    py::class_< FNewsArticle >(m, "FNewsArticle")
        .def_readwrite("Header", &FNewsArticle::Header)
        .def_readwrite("Body", &FNewsArticle::Body)
  ;
}