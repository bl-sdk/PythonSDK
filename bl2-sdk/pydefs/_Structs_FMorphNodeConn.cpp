#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMorphNodeConn()
{
    class_< FMorphNodeConn >("FMorphNodeConn", no_init)
        .def_readwrite("ChildNodes", &FMorphNodeConn::ChildNodes)
        .def_readwrite("ConnName", &FMorphNodeConn::ConnName)
        .def_readwrite("DrawY", &FMorphNodeConn::DrawY)
  ;
}