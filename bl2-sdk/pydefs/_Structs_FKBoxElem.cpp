#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKBoxElem()
{
    class_< FKBoxElem >("FKBoxElem", no_init)
        .def_readwrite("TM", &FKBoxElem::TM)
        .def_readwrite("X", &FKBoxElem::X)
        .def_readwrite("Y", &FKBoxElem::Y)
        .def_readwrite("Z", &FKBoxElem::Z)
  ;
}