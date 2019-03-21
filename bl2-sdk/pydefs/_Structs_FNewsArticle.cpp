#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNewsArticle()
{
    class_< FNewsArticle >("FNewsArticle", no_init)
        .def_readwrite("Header", &FNewsArticle::Header)
        .def_readwrite("Body", &FNewsArticle::Body)
  ;
}